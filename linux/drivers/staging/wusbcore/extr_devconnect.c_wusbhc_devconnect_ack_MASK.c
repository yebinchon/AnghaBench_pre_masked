
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdr; } ;
struct wusbhc {unsigned int ports_max; int mutex; TYPE_1__ cack_ie; int (* set_ptk ) (struct wusbhc*,unsigned int,int ,int *,int ) ;struct device* dev; } ;
struct wusb_port {int status; int change; struct wusb_dev* wusb_dev; } ;
struct wusb_dn_connect {int CDID; } ;
struct wusb_dev {int cdid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int,char const*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wusbhc*,unsigned int,int ,int *,int ) ;
 struct wusb_port* FUNC_6 (struct wusbhc*,unsigned int) ;
 struct wusb_dev* FUNC_7 (struct wusbhc*,struct wusb_dn_connect*,char const*,unsigned int) ;
 int FUNC_8 (struct wusbhc*,int ,int ,int *) ;

__attribute__((used)) static
void FUNC_9(struct wusbhc *VAR_3, struct wusb_dn_connect *VAR_4,
      const char *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = VAR_3->dev;
 struct wusb_dev *VAR_8;
 struct wusb_port *VAR_9;
 unsigned VAR_10;

 FUNC_3(&VAR_3->mutex);


 for (VAR_10 = 0; VAR_10 < VAR_3->ports_max; VAR_10++) {
  VAR_9 = FUNC_6(VAR_3, VAR_10);
  if (VAR_9->wusb_dev
      && FUNC_1(&VAR_4->CDID, &VAR_9->wusb_dev->cdid, sizeof(VAR_4->CDID)) == 0)
   goto error_unlock;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3->ports_max; VAR_10++) {
  VAR_9 = FUNC_6(VAR_3, VAR_10);
  if ((VAR_9->status & VAR_2)
      && !(VAR_9->status & VAR_0))
   break;
 }
 if (VAR_10 >= VAR_3->ports_max) {
  FUNC_0(VAR_7, "Host controller can't connect more devices "
   "(%u already connected); device %s rejected\n",
   VAR_3->ports_max, VAR_5);



  goto error_unlock;
 }


 VAR_3->set_ptk(VAR_3, VAR_10, 0, ((void*)0), 0);



 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_10);
 if (VAR_8 == ((void*)0))
  goto error_unlock;
 VAR_6 = FUNC_8(VAR_3, 0, 0, &VAR_3->cack_ie.hdr);
 if (VAR_6 < 0)
  goto error_unlock;


 FUNC_2(3);
 VAR_9->wusb_dev = VAR_8;
 VAR_9->status |= VAR_0;
 VAR_9->change |= VAR_1;





error_unlock:
 FUNC_4(&VAR_3->mutex);
 return;

}
