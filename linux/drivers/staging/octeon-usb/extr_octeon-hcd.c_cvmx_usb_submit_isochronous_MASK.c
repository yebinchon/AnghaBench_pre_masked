
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int number_of_packets; int start_frame; int transfer_buffer_length; int transfer_dma; scalar_t__ setup_packet; } ;
struct octeon_hcd {int dummy; } ;
struct cvmx_usb_transaction {int dummy; } ;
struct cvmx_usb_pipe {int dummy; } ;
struct cvmx_usb_iso_packet {int dummy; } ;


 int VAR_0 ;
 struct cvmx_usb_transaction* FUNC_0 (struct octeon_hcd*,struct cvmx_usb_pipe*,int ,int ,int ,int ,int ,int ,struct cvmx_usb_iso_packet*,struct urb*) ;

__attribute__((used)) static struct cvmx_usb_transaction *FUNC_1(
      struct octeon_hcd *VAR_1,
      struct cvmx_usb_pipe *VAR_2,
      struct urb *VAR_3)
{
 struct cvmx_usb_iso_packet *VAR_4;

 VAR_4 = (struct cvmx_usb_iso_packet *)VAR_3->setup_packet;
 return FUNC_0(VAR_1, VAR_2,
        VAR_0,
        VAR_3->transfer_dma,
        VAR_3->transfer_buffer_length,
        0,
        VAR_3->start_frame,
        VAR_3->number_of_packets,
        VAR_4, VAR_3);
}
