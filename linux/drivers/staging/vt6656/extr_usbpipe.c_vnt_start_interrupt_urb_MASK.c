
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_use; int data_buf; } ;
struct vnt_private {TYPE_1__ int_buf; TYPE_2__* usb; int interrupt_urb; int int_interval; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int ,int ,int ,struct vnt_private*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;

int FUNC_4(struct vnt_private *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->int_buf.in_use) {
  VAR_5 = -VAR_0;
  goto err;
 }

 VAR_4->int_buf.in_use = 1;

 FUNC_1(VAR_4->interrupt_urb,
    VAR_4->usb,
    FUNC_2(VAR_4->usb, 1),
    VAR_4->int_buf.data_buf,
    VAR_2,
    VAR_3,
    VAR_4,
    VAR_4->int_interval);

 VAR_5 = FUNC_3(VAR_4->interrupt_urb, VAR_1);
 if (VAR_5) {
  FUNC_0(&VAR_4->usb->dev, "Submit int URB failed %d\n", VAR_5);
  goto err_submit;
 }

 return 0;

err_submit:
 VAR_4->int_buf.in_use = 0;
err:
 return VAR_5;
}
