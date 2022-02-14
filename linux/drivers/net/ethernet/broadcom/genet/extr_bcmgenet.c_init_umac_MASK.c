
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct bcmgenet_priv {scalar_t__ phy_interface; TYPE_2__* hw_params; int dev; TYPE_1__* pdev; } ;
struct TYPE_4__ {int bp_in_mask; int flags; int bp_in_en_shift; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bcmgenet_priv*) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct bcmgenet_priv*) ;
 int FUNC_4 (struct bcmgenet_priv*,int) ;
 int FUNC_5 (struct bcmgenet_priv*) ;
 int FUNC_6 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_7 (struct bcmgenet_priv*,int ) ;
 int FUNC_8 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_9 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_10 (struct device*,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct bcmgenet_priv*) ;

__attribute__((used)) static void FUNC_13(struct bcmgenet_priv *VAR_14)
{
 struct device *VAR_15 = &VAR_14->pdev->dev;
 u32 VAR_16;
 u32 VAR_17 = 0;

 FUNC_10(&VAR_14->pdev->dev, "bcmgenet: init_umac\n");

 FUNC_12(VAR_14);


 FUNC_9(VAR_14,
        VAR_4 | VAR_5 | VAR_3,
        VAR_13);
 FUNC_9(VAR_14, 0, VAR_13);

 FUNC_9(VAR_14, VAR_0, VAR_12);


 VAR_16 = FUNC_7(VAR_14, VAR_8);
 VAR_16 |= VAR_7;
 FUNC_8(VAR_14, VAR_16, VAR_8);

 if (!FUNC_1(VAR_14) && !FUNC_2(VAR_14))
  FUNC_8(VAR_14, 1, VAR_9);

 FUNC_5(VAR_14);


 if (VAR_14->phy_interface == VAR_6) {
  VAR_16 = FUNC_3(VAR_14);
  VAR_16 |= FUNC_0(VAR_14->hw_params->bp_in_en_shift);


  if (FUNC_11(VAR_14->dev))
   VAR_16 |= VAR_14->hw_params->bp_in_mask;
  else
   VAR_16 &= ~VAR_14->hw_params->bp_in_mask;
  FUNC_4(VAR_14, VAR_16);
 }


 if (VAR_14->hw_params->flags & VAR_1)
  VAR_17 |= (VAR_10 | VAR_11);

 FUNC_6(VAR_14, VAR_17, VAR_2);

 FUNC_10(VAR_15, "done init umac\n");
}
