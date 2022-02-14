
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nak; } ;
union cvmx_usbcx_hcintx {TYPE_1__ s; } ;
struct octeon_hcd {int dummy; } ;
struct cvmx_usb_transaction {scalar_t__ stage; } ;
struct cvmx_usb_pipe {int max_packet; scalar_t__ device_speed; scalar_t__ transfer_dir; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct cvmx_usb_transaction*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;

__attribute__((used)) static void FUNC_2(struct octeon_hcd *VAR_6,
       struct cvmx_usb_pipe *VAR_7,
       struct cvmx_usb_transaction *VAR_8,
       union cvmx_usbcx_hcintx VAR_9,
       int VAR_10,
       int VAR_11)
{





 if (FUNC_1(VAR_6, VAR_7)) {
  if (VAR_8->stage == VAR_3)
   VAR_8->stage =
    VAR_4;
  else if (VAR_10 &&
    (VAR_11 == VAR_7->max_packet))
   VAR_8->stage = VAR_3;
  else
   FUNC_0(VAR_6, VAR_7, VAR_8,
       VAR_5);
 } else {
  if ((VAR_7->device_speed == VAR_2) &&
      (VAR_7->transfer_dir == VAR_0) &&
      (VAR_9.s.nak))
   VAR_7->flags |= VAR_1;
  if (!VAR_10 ||
      (VAR_11 < VAR_7->max_packet))
   FUNC_0(VAR_6, VAR_7, VAR_8,
       VAR_5);
 }
}
