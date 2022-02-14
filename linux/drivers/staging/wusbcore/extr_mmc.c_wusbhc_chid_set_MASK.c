
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusb_ckhdid {int dummy; } ;
struct wusbhc {int mutex; int * uwb_rc; int pal; TYPE_1__* dev; struct wusb_ckhdid chid; scalar_t__ active; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (struct wusb_ckhdid const*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (struct wusbhc*) ;

int FUNC_9(struct wusbhc *VAR_3, const struct wusb_ckhdid *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_1(VAR_4, &VAR_2, sizeof(*VAR_4)) == 0)
  VAR_4 = ((void*)0);

 FUNC_2(&VAR_3->mutex);
 if (VAR_4) {
  if (VAR_3->active) {
   FUNC_3(&VAR_3->mutex);
   return -VAR_0;
  }
  VAR_3->chid = *VAR_4;
 }



 if ((VAR_4) && (VAR_3->uwb_rc == ((void*)0))) {
  VAR_3->uwb_rc = FUNC_6(VAR_3->dev->parent);
  if (VAR_3->uwb_rc == ((void*)0)) {
   VAR_5 = -VAR_1;
   FUNC_0(VAR_3->dev,
    "Cannot get associated UWB Host Controller\n");
   goto error_rc_get;
  }

  VAR_5 = FUNC_8(VAR_3);
  if (VAR_5 < 0) {
   FUNC_0(VAR_3->dev, "Cannot register as a UWB PAL\n");
   goto error_pal_register;
  }
 }
 FUNC_3(&VAR_3->mutex);

 if (VAR_4)
  VAR_5 = FUNC_4(&VAR_3->pal);
 else if (VAR_3->uwb_rc)
  FUNC_5(&VAR_3->pal);

 return VAR_5;

error_pal_register:
 FUNC_7(VAR_3->uwb_rc);
 VAR_3->uwb_rc = ((void*)0);
error_rc_get:
 FUNC_3(&VAR_3->mutex);

 return VAR_5;
}
