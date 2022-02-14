
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_3__* def; } ;
struct gem {scalar_t__ phy_type; TYPE_4__ phy_mii; int dev; int lstate; scalar_t__ timer_ticks; int mii_phy_addr; scalar_t__ regs; TYPE_1__* pdev; int of_node; } ;
struct TYPE_8__ {char* name; TYPE_2__* ops; } ;
struct TYPE_7__ {int (* init ) (TYPE_4__*) ;} ;
struct TYPE_6__ {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct gem*,int *) ;
 int FUNC_1 (struct gem*) ;
 int FUNC_2 (struct gem*) ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (struct gem*,int ) ;
 int FUNC_12 (struct gem*,int ,int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct gem *VAR_17)
{
 u32 VAR_18;


 VAR_18 = FUNC_8(VAR_17->regs + VAR_1);
 VAR_18 &= ~VAR_2;
 FUNC_13(VAR_18, VAR_17->regs + VAR_1);

 if (VAR_17->pdev->vendor == VAR_5) {
  int VAR_19;





  for (VAR_19 = 0; VAR_19 < 3; VAR_19++) {







   FUNC_12(VAR_17, VAR_3, VAR_0);
   FUNC_3(20);
   if (FUNC_11(VAR_17, VAR_3) != 0xffff)
    break;
   if (VAR_19 == 2)
    FUNC_5(VAR_17->dev, "GMAC PHY not responding !\n");
  }
 }

 if (VAR_17->pdev->vendor == VAR_6 &&
     VAR_17->pdev->device == VAR_4) {
  u32 VAR_20;


  if (VAR_17->phy_type == VAR_14 ||
      VAR_17->phy_type == VAR_15) {
   VAR_20 = VAR_10;
  } else if (VAR_17->phy_type == VAR_16) {
   VAR_20 = VAR_11 | VAR_9;
  } else {
   VAR_20 = VAR_8;
  }

  FUNC_13(VAR_20, VAR_17->regs + VAR_7);
 }

 if (VAR_17->phy_type == VAR_14 ||
     VAR_17->phy_type == VAR_15) {

  FUNC_10(&VAR_17->phy_mii, VAR_17->mii_phy_addr);


  if (VAR_17->phy_mii.def && VAR_17->phy_mii.def->ops->init)
   VAR_17->phy_mii.def->ops->init(&VAR_17->phy_mii);
 } else {
  FUNC_2(VAR_17);
  FUNC_1(VAR_17);
 }


 VAR_17->timer_ticks = 0;
 VAR_17->lstate = VAR_13;
 FUNC_6(VAR_17->dev);


 if (VAR_17->phy_type == VAR_14 ||
     VAR_17->phy_type == VAR_15)
  FUNC_4(VAR_17->dev, "Found %s PHY\n",
       VAR_17->phy_mii.def ? VAR_17->phy_mii.def->name : "no");

 FUNC_0(VAR_17, ((void*)0));
}
