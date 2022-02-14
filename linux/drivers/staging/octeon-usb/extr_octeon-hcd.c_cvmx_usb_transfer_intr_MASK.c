
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_hcd {int dummy; } ;
struct cvmx_usb_transaction {scalar_t__ stage; } ;
struct cvmx_usb_pipe {int max_packet; scalar_t__ interval; int next_tx_frame; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct cvmx_usb_transaction*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;

__attribute__((used)) static void FUNC_2(struct octeon_hcd *VAR_3,
       struct cvmx_usb_pipe *VAR_4,
       struct cvmx_usb_transaction *VAR_5,
       int VAR_6,
       int VAR_7)
{
 if (FUNC_1(VAR_3, VAR_4)) {
  if (VAR_5->stage == VAR_0) {
   VAR_5->stage =
    VAR_1;
  } else if (VAR_6 &&
      (VAR_7 == VAR_4->max_packet)) {
   VAR_5->stage = VAR_0;
  } else {
   VAR_4->next_tx_frame += VAR_4->interval;
   FUNC_0(VAR_3, VAR_4, VAR_5,
       VAR_2);
  }
 } else if (!VAR_6 ||
     (VAR_7 < VAR_4->max_packet)) {
  VAR_4->next_tx_frame += VAR_4->interval;
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2);
 }
}
