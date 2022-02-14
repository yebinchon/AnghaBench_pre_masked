
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vl600_state {int dummy; } ;
struct usbnet {TYPE_1__* net; struct vl600_state* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vl600_state*) ;
 struct vl600_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_4, struct usb_interface *VAR_5)
{
 int VAR_6;
 struct vl600_state *VAR_7 = FUNC_1(sizeof(struct vl600_state), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_7);
  return VAR_6;
 }

 VAR_4->driver_priv = VAR_7;
 VAR_4->net->flags |= VAR_3;

 VAR_4->net->flags |= VAR_2;

 return VAR_6;
}
