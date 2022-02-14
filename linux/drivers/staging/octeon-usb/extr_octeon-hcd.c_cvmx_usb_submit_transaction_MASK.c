
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct urb {int dummy; } ;
struct octeon_hcd {int * active_pipes; } ;
struct cvmx_usb_transaction {int type; int buffer_length; int iso_start_frame; int iso_number_packets; int node; int stage; struct urb* urb; struct cvmx_usb_iso_packet* iso_packets; void* control_header; void* buffer; } ;
struct cvmx_usb_pipe {int transfer_type; int node; int transactions; } ;
struct cvmx_usb_iso_packet {int dummy; } ;
typedef enum cvmx_usb_transfer { ____Placeholder_cvmx_usb_transfer } cvmx_usb_transfer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct octeon_hcd*,int ) ;
 struct cvmx_usb_transaction* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct cvmx_usb_transaction *FUNC_6(
    struct octeon_hcd *VAR_4,
    struct cvmx_usb_pipe *VAR_5,
    enum cvmx_usb_transfer VAR_6,
    u64 VAR_7,
    int VAR_8,
    u64 VAR_9,
    int VAR_10,
    int VAR_11,
    struct cvmx_usb_iso_packet *VAR_12,
    struct urb *VAR_13)
{
 struct cvmx_usb_transaction *VAR_14;

 if (FUNC_5(VAR_5->transfer_type != VAR_6))
  return ((void*)0);

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_3);
 if (FUNC_5(!VAR_14))
  return ((void*)0);

 VAR_14->type = VAR_6;
 VAR_14->buffer = VAR_7;
 VAR_14->buffer_length = VAR_8;
 VAR_14->control_header = VAR_9;

 VAR_14->iso_start_frame = VAR_10;
 VAR_14->iso_number_packets = VAR_11;
 VAR_14->iso_packets = VAR_12;
 VAR_14->urb = VAR_13;
 if (VAR_14->type == VAR_2)
  VAR_14->stage = VAR_1;
 else
  VAR_14->stage = VAR_0;

 if (!FUNC_3(&VAR_5->transactions)) {
  FUNC_2(&VAR_14->node, &VAR_5->transactions);
 } else {
  FUNC_2(&VAR_14->node, &VAR_5->transactions);
  FUNC_4(&VAR_5->node,
          &VAR_4->active_pipes[VAR_5->transfer_type]);





  FUNC_0(VAR_4, 0);
 }

 return VAR_14;
}
