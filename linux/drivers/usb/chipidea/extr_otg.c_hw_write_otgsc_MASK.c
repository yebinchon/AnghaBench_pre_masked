
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ci_hdrc_cable {int changed; int enabled; int edev; } ;
struct ci_hdrc {scalar_t__ role_switch; TYPE_1__* platdata; } ;
struct TYPE_2__ {struct ci_hdrc_cable id_extcon; struct ci_hdrc_cable vbus_extcon; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ci_hdrc*,int ,int,int) ;

void FUNC_2(struct ci_hdrc *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct ci_hdrc_cable *VAR_9;

 VAR_9 = &VAR_6->platdata->vbus_extcon;
 if (!FUNC_0(VAR_9->edev) || VAR_6->role_switch) {
  if (VAR_8 & VAR_7 & VAR_2)
   VAR_9->changed = 0;


  if (VAR_8 & VAR_7 & VAR_1) {
   VAR_9->enabled = 1;
   VAR_8 &= ~VAR_1;
  } else if (VAR_7 & VAR_1) {
   VAR_9->enabled = 0;
  }
 }

 VAR_9 = &VAR_6->platdata->id_extcon;
 if (!FUNC_0(VAR_9->edev) || VAR_6->role_switch) {
  if (VAR_8 & VAR_7 & VAR_4)
   VAR_9->changed = 0;


  if (VAR_8 & VAR_7 & VAR_3) {
   VAR_9->enabled = 1;
   VAR_8 &= ~VAR_3;
  } else if (VAR_7 & VAR_3) {
   VAR_9->enabled = 0;
  }
 }

 FUNC_1(VAR_6, VAR_0, VAR_7 | VAR_5, VAR_8);
}
