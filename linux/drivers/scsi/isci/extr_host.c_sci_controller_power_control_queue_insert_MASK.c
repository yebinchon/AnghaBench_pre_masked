
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {scalar_t__ current_state_id; } ;
struct TYPE_5__ {int sas_addr; } ;
struct TYPE_6__ {TYPE_1__ iaf; } ;
struct isci_phy {scalar_t__ protocol; size_t phy_index; TYPE_3__ sm; TYPE_2__ frame_rcvd; } ;
struct TYPE_8__ {scalar_t__ phys_granted_power; int timer_started; int phys_waiting; struct isci_phy** requesters; int timer; } ;
struct isci_host {TYPE_4__ power_control; struct isci_phy* phys; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct isci_host*) ;
 size_t FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct isci_phy*) ;

void FUNC_6(struct isci_host *VAR_4,
            struct isci_phy *VAR_5)
{
 FUNC_0(VAR_5 == ((void*)0));

 if (VAR_4->power_control.phys_granted_power < FUNC_1(VAR_4)) {
  VAR_4->power_control.phys_granted_power++;
  FUNC_5(VAR_5);





  if (VAR_4->power_control.timer_started)
   FUNC_3(&VAR_4->power_control.timer);

  FUNC_4(&VAR_4->power_control.timer,
     VAR_1);
  VAR_4->power_control.timer_started = 1;

 } else {




  u8 VAR_6;
  struct isci_phy *VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   u8 VAR_8;
   VAR_7 = &VAR_4->phys[VAR_6];

   VAR_8 = FUNC_2(VAR_7->frame_rcvd.iaf.sas_addr,
           VAR_5->frame_rcvd.iaf.sas_addr,
           sizeof(VAR_7->frame_rcvd.iaf.sas_addr));

   if (VAR_7->sm.current_state_id == VAR_3 &&
       VAR_7->protocol == VAR_0 &&
       VAR_8 == 0) {
    FUNC_5(VAR_5);
    break;
   }
  }

  if (VAR_6 == VAR_2) {

   VAR_4->power_control.requesters[VAR_5->phy_index] = VAR_5;
   VAR_4->power_control.phys_waiting++;
  }
 }
}
