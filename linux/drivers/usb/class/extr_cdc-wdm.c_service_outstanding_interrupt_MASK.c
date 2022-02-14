
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdm_device {scalar_t__ resp_count; int flags; TYPE_1__* intf; int iuspin; int response; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wdm_device *VAR_2)
{
 int VAR_3 = 0;


 if (!VAR_2->resp_count || !--VAR_2->resp_count)
  goto out;

 FUNC_2(VAR_1, &VAR_2->flags);
 FUNC_4(&VAR_2->iuspin);
 VAR_3 = FUNC_5(VAR_2->response, VAR_0);
 FUNC_3(&VAR_2->iuspin);
 if (VAR_3) {
  FUNC_1(&VAR_2->intf->dev,
   "usb_submit_urb failed with result %d\n", VAR_3);


  FUNC_0(VAR_1, &VAR_2->flags);
  VAR_2->resp_count = 0;
 }
out:
 return VAR_3;
}
