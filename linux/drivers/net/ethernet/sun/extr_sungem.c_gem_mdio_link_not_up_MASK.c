
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* def; int speed; } ;
struct gem {int lstate; int timer_ticks; int dev; TYPE_3__ phy_mii; int last_forced_speed; } ;
struct TYPE_7__ {TYPE_1__* ops; int magic_aneg; } ;
struct TYPE_6__ {int (* setup_forced ) (TYPE_3__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_0 (struct gem*,int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gem *VAR_5)
{
 switch (VAR_5->lstate) {
 case 129:
  FUNC_0(VAR_5, VAR_3, VAR_5->dev,
      "Autoneg failed again, keeping forced mode\n");
  VAR_5->phy_mii.def->ops->setup_forced(&VAR_5->phy_mii,
   VAR_5->last_forced_speed, VAR_0);
  VAR_5->timer_ticks = 5;
  VAR_5->lstate = VAR_4;
  return 0;
 case 130:




  if (VAR_5->phy_mii.def->magic_aneg)
   return 1;
  FUNC_0(VAR_5, VAR_3, VAR_5->dev, "switching to forced 100bt\n");

  VAR_5->phy_mii.def->ops->setup_forced(&VAR_5->phy_mii, VAR_2,
   VAR_0);
  VAR_5->timer_ticks = 5;
  VAR_5->lstate = 128;
  return 0;
 case 128:




  if (VAR_5->phy_mii.speed == VAR_2) {
   VAR_5->phy_mii.def->ops->setup_forced(&VAR_5->phy_mii, VAR_1,
    VAR_0);
   VAR_5->timer_ticks = 5;
   FUNC_0(VAR_5, VAR_3, VAR_5->dev,
       "switching to forced 10bt\n");
   return 0;
  } else
   return 1;
 default:
  return 0;
 }
}
