
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_iso_packet_descriptor {int status; int actual_length; int length; int offset; } ;
struct urb {int number_of_packets; struct usb_iso_packet_descriptor* iso_frame_desc; scalar_t__ complete; scalar_t__ context; int error_count; int interval; int start_frame; scalar_t__ setup_packet; int actual_length; int transfer_buffer_length; scalar_t__ transfer_buffer; int transfer_flags; scalar_t__ hcpriv; int pipe; scalar_t__ dev; } ;
typedef enum debuglevel { ____Placeholder_debuglevel } debuglevel ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(enum debuglevel VAR_0, const char *VAR_1,
       struct urb *VAR_2)
{
}
