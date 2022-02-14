
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_hcd {int idle_pipes; struct cvmx_usb_transaction* active_split; } ;
struct cvmx_usb_transaction {scalar_t__ type; int iso_number_packets; int urb; scalar_t__ actual_bytes; int node; int stage; TYPE_1__* iso_packets; } ;
struct cvmx_usb_pipe {int node; int transactions; } ;
typedef enum cvmx_usb_status { ____Placeholder_cvmx_usb_status } cvmx_usb_status ;
struct TYPE_2__ {int status; scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cvmx_usb_transaction*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct octeon_hcd*,int,struct cvmx_usb_pipe*,struct cvmx_usb_transaction*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct octeon_hcd *VAR_3,
         struct cvmx_usb_pipe *VAR_4,
         struct cvmx_usb_transaction *VAR_5,
         enum cvmx_usb_status VAR_6)
{

 if (VAR_3->active_split == VAR_5)
  VAR_3->active_split = ((void*)0);





 if (FUNC_5(VAR_5->type == VAR_2)) {

  VAR_5->iso_packets[0].length = VAR_5->actual_bytes;
  VAR_5->iso_packets[0].status = VAR_6;





  if ((VAR_5->iso_number_packets > 1) &&
      (VAR_6 == VAR_1)) {

   VAR_5->actual_bytes = 0;

   VAR_5->iso_number_packets--;

   VAR_5->iso_packets++;
   VAR_5->stage = VAR_0;
   return;
  }
 }


 FUNC_1(&VAR_5->node);
 if (FUNC_2(&VAR_4->transactions))
  FUNC_3(&VAR_4->node, &VAR_3->idle_pipes);
 FUNC_4(VAR_3, VAR_6, VAR_4,
      VAR_5,
      VAR_5->actual_bytes,
      VAR_5->urb);
 FUNC_0(VAR_5);
}
