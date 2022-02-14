
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_composite_dev {TYPE_1__* gadget; } ;
struct TYPE_7__ {TYPE_2__* config; } ;
struct TYPE_8__ {TYPE_3__ func; } ;
struct f_acm {int pending; int lock; int serial_state; int port_num; scalar_t__ notify_req; TYPE_4__ port; } ;
typedef int __le16 ;
struct TYPE_6__ {struct usb_composite_dev* cdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct f_acm*,int ,int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct f_acm *VAR_1)
{
 struct usb_composite_dev *VAR_2 = VAR_1->port.func.config->cdev;
 int VAR_3;
 __le16 VAR_4;

 FUNC_3(&VAR_1->lock);
 if (VAR_1->notify_req) {
  FUNC_2(&VAR_2->gadget->dev, "acm ttyGS%d serial state %04x\n",
   VAR_1->port_num, VAR_1->serial_state);
  VAR_4 = FUNC_1(VAR_1->serial_state);
  VAR_3 = FUNC_0(VAR_1, VAR_0,
    0, &VAR_4, sizeof(VAR_1->serial_state));
 } else {
  VAR_1->pending = 1;
  VAR_3 = 0;
 }
 FUNC_4(&VAR_1->lock);
 return VAR_3;
}
