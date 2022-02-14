
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_lcd {int limit_sem; TYPE_1__* interface; } ;
struct urb {int status; int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; struct usb_lcd* context; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_3)
{
 struct usb_lcd *VAR_4;
 int VAR_5 = VAR_3->status;

 VAR_4 = VAR_3->context;


 if (VAR_5 &&
     !(VAR_5 == -VAR_1 ||
       VAR_5 == -VAR_0 ||
       VAR_5 == -VAR_2)) {
  FUNC_0(&VAR_4->interface->dev,
   "nonzero write bulk status received: %d\n", VAR_5);
 }


 FUNC_2(VAR_3->dev, VAR_3->transfer_buffer_length,
     VAR_3->transfer_buffer, VAR_3->transfer_dma);
 FUNC_1(&VAR_4->limit_sem);
}
