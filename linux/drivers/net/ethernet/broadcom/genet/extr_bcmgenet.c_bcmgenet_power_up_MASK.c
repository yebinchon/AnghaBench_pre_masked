
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {int dev; TYPE_1__* hw_params; } ;
typedef enum bcmgenet_power_mode { ____Placeholder_bcmgenet_power_mode } bcmgenet_power_mode ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct bcmgenet_priv*) ;



 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bcmgenet_priv*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bcmgenet_priv *VAR_13,
         enum bcmgenet_power_mode VAR_14)
{
 u32 VAR_15;

 if (!(VAR_13->hw_params->flags & VAR_12))
  return;

 VAR_15 = FUNC_1(VAR_13, VAR_0);

 switch (VAR_14) {
 case 129:
  VAR_15 &= ~(VAR_5 | VAR_4);
  if (FUNC_0(VAR_13)) {
   VAR_15 &= ~(VAR_7 |
     VAR_8 |
     VAR_10 |
     VAR_9 |
     VAR_11 |
     VAR_1);
   VAR_15 |= VAR_2;
   FUNC_2(VAR_13, VAR_15, VAR_0);
   FUNC_5(1);

   VAR_15 &= ~VAR_2;
  } else {
   VAR_15 &= ~VAR_6;
   VAR_15 |= VAR_3;
  }
  FUNC_2(VAR_13, VAR_15, VAR_0);
  FUNC_3(VAR_13->dev, 1);
  break;

 case 130:

  if (!FUNC_0(VAR_13)) {
   VAR_15 |= VAR_3;
   FUNC_2(VAR_13, VAR_15, VAR_0);
  }
  break;
 case 128:
  FUNC_4(VAR_13, VAR_14);
  return;
 default:
  break;
 }
}
