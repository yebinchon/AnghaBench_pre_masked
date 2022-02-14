
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hcd {int regs; } ;
struct timer_list {int dummy; } ;
struct ptd {int dw3; int dw0; } ;
struct isp1760_hcd {int atl_done_map; int lock; TYPE_1__* atl_slots; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct TYPE_4__ {scalar_t__ timestamp; scalar_t__ qh; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__ VAR_3 ;
 struct usb_hcd* VAR_4 ;
 int FUNC_3 (struct usb_hcd*) ;
 struct isp1760_hcd* FUNC_4 (struct usb_hcd*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,struct ptd*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct usb_hcd *VAR_7 = VAR_4;
 struct isp1760_hcd *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;
 struct ptd VAR_10;
 unsigned long VAR_11;

 FUNC_7(&VAR_8->lock, VAR_11);

 for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
  if (VAR_8->atl_slots[VAR_9].qh && FUNC_9(VAR_5,
     VAR_8->atl_slots[VAR_9].timestamp +
     FUNC_5(VAR_2))) {
   FUNC_6(VAR_7->regs, VAR_0, VAR_9, &VAR_10);
   if (!FUNC_0(VAR_10.dw0) &&
     !FUNC_1(VAR_10.dw3))
    VAR_8->atl_done_map |= 1 << VAR_9;
  }

 if (VAR_8->atl_done_map)
  FUNC_3(VAR_7);

 FUNC_8(&VAR_8->lock, VAR_11);

 VAR_3.expires = VAR_5 + FUNC_5(VAR_1);
 FUNC_2(&VAR_3);
}
