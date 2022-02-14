
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sysdev; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct urb {int transfer_flags; int transfer_buffer_length; int transfer_buffer; int transfer_dma; TYPE_2__* dev; int num_sgs; int sg; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int *,int *,int ,int) ;
 int FUNC_5 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_6 (struct urb*) ;

void FUNC_7(struct usb_hcd *VAR_7, struct urb *VAR_8)
{
 enum dma_data_direction VAR_9;

 FUNC_5(VAR_7, VAR_8);

 VAR_9 = FUNC_6(VAR_8) ? VAR_1 : VAR_2;
 if (FUNC_0(VAR_0) &&
     (VAR_8->transfer_flags & VAR_4))
  FUNC_2(VAR_7->self.sysdev,
    VAR_8->sg,
    VAR_8->num_sgs,
    VAR_9);
 else if (FUNC_0(VAR_0) &&
   (VAR_8->transfer_flags & VAR_3))
  FUNC_1(VAR_7->self.sysdev,
    VAR_8->transfer_dma,
    VAR_8->transfer_buffer_length,
    VAR_9);
 else if (FUNC_0(VAR_0) &&
   (VAR_8->transfer_flags & VAR_5))
  FUNC_3(VAR_7->self.sysdev,
    VAR_8->transfer_dma,
    VAR_8->transfer_buffer_length,
    VAR_9);
 else if (VAR_8->transfer_flags & VAR_6)
  FUNC_4(VAR_8->dev->bus,
    &VAR_8->transfer_dma,
    &VAR_8->transfer_buffer,
    VAR_8->transfer_buffer_length,
    VAR_9);


 VAR_8->transfer_flags &= ~(VAR_4 | VAR_3 |
   VAR_5 | VAR_6);
}
