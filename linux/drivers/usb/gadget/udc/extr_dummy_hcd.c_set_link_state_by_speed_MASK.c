
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dummy_hcd {int port_status; int old_status; scalar_t__ rh_state; int active; struct dummy* dum; } ;
struct dummy {scalar_t__ udc_suspended; int pullup; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (struct dummy_hcd*) ;

__attribute__((used)) static void FUNC_1(struct dummy_hcd *VAR_13)
{
 struct dummy *VAR_14 = VAR_13->dum;

 if (FUNC_0(VAR_13)->speed == VAR_1) {
  if ((VAR_13->port_status & VAR_12) == 0) {
   VAR_13->port_status = 0;
  } else if (!VAR_14->pullup || VAR_14->udc_suspended) {

   VAR_13->port_status &= ~(VAR_2 |
      VAR_4);
   if ((VAR_13->old_status &
        VAR_2) != 0)
    VAR_13->port_status |=
     (VAR_3 << 16);
  } else {

   VAR_13->port_status |= (VAR_2 |
       VAR_9) ;
   if ((VAR_13->old_status &
        VAR_2) == 0)
    VAR_13->port_status |=
     (VAR_3 << 16);
   if ((VAR_13->port_status & VAR_4) &&
       (VAR_13->port_status &
        VAR_6) == VAR_11 &&
       VAR_13->rh_state != VAR_0)
    VAR_13->active = 1;
  }
 } else {
  if ((VAR_13->port_status & VAR_8) == 0) {
   VAR_13->port_status = 0;
  } else if (!VAR_14->pullup || VAR_14->udc_suspended) {

   VAR_13->port_status &= ~(VAR_2 |
      VAR_4 |
      VAR_7 |
      VAR_5 |
      VAR_10);
   if ((VAR_13->old_status &
        VAR_2) != 0)
    VAR_13->port_status |=
     (VAR_3 << 16);
  } else {
   VAR_13->port_status |= VAR_2;
   if ((VAR_13->old_status &
        VAR_2) == 0)
    VAR_13->port_status |=
     (VAR_3 << 16);
   if ((VAR_13->port_status & VAR_4) == 0)
    VAR_13->port_status &= ~VAR_10;
   else if ((VAR_13->port_status &
      VAR_10) == 0 &&
     VAR_13->rh_state != VAR_0)
    VAR_13->active = 1;
  }
 }
}
