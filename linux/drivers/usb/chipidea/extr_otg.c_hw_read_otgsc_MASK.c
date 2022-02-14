
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ci_hdrc_cable {scalar_t__ enabled; scalar_t__ connected; scalar_t__ changed; int edev; } ;
struct ci_hdrc {scalar_t__ role_switch; TYPE_1__* platdata; } ;
struct TYPE_2__ {struct ci_hdrc_cable id_extcon; struct ci_hdrc_cable vbus_extcon; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ci_hdrc*,int ,int) ;

u32 FUNC_2(struct ci_hdrc *VAR_7, u32 VAR_8)
{
 struct ci_hdrc_cable *VAR_9;
 u32 VAR_10 = FUNC_1(VAR_7, VAR_0, VAR_8);





 VAR_9 = &VAR_7->platdata->vbus_extcon;
 if (!FUNC_0(VAR_9->edev) || VAR_7->role_switch) {
  if (VAR_9->changed)
   VAR_10 |= VAR_3;
  else
   VAR_10 &= ~VAR_3;

  if (VAR_9->connected)
   VAR_10 |= VAR_1;
  else
   VAR_10 &= ~VAR_1;

  if (VAR_9->enabled)
   VAR_10 |= VAR_2;
  else
   VAR_10 &= ~VAR_2;
 }

 VAR_9 = &VAR_7->platdata->id_extcon;
 if (!FUNC_0(VAR_9->edev) || VAR_7->role_switch) {
  if (VAR_9->changed)
   VAR_10 |= VAR_6;
  else
   VAR_10 &= ~VAR_6;

  if (VAR_9->connected)
   VAR_10 &= ~VAR_4;
  else
   VAR_10 |= VAR_4;

  if (VAR_9->enabled)
   VAR_10 |= VAR_5;
  else
   VAR_10 &= ~VAR_5;
 }

 return VAR_10 & VAR_8;
}
