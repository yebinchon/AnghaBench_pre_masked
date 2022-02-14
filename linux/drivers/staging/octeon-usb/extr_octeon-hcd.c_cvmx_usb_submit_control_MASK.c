
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct urb {int transfer_buffer_length; int transfer_dma; int setup_dma; } ;
struct octeon_hcd {int dummy; } ;
struct cvmx_usb_transaction {int dummy; } ;
struct cvmx_usb_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_ctrlrequest* FUNC_0 (int ) ;
 struct cvmx_usb_transaction* FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*,int ,int ,int,int ,int ,int ,int *,struct urb*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct cvmx_usb_transaction *FUNC_3(
      struct octeon_hcd *VAR_2,
      struct cvmx_usb_pipe *VAR_3,
      struct urb *VAR_4)
{
 int VAR_5 = VAR_4->transfer_buffer_length;
 u64 VAR_6 = VAR_4->setup_dma;
 struct usb_ctrlrequest *VAR_7 = FUNC_0(VAR_6);

 if ((VAR_7->bRequestType & VAR_1) == 0)
  VAR_5 = FUNC_2(VAR_7->wLength);

 return FUNC_1(VAR_2, VAR_3,
        VAR_0,
        VAR_4->transfer_dma, VAR_5,
        VAR_6,
        0,
        0,
        ((void*)0),
        VAR_4);
}
