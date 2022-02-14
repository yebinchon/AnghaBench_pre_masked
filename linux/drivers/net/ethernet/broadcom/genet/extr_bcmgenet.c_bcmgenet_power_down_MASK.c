
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {TYPE_2__* dev; TYPE_1__* hw_params; } ;
typedef enum bcmgenet_power_mode { ____Placeholder_bcmgenet_power_mode } bcmgenet_power_mode ;
struct TYPE_4__ {int phydev; } ;
struct TYPE_3__ {int flags; } ;


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
 int FUNC_0 (struct bcmgenet_priv*) ;



 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct bcmgenet_priv*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct bcmgenet_priv *VAR_11,
    enum bcmgenet_power_mode VAR_12)
{
 int VAR_13 = 0;
 u32 VAR_14;

 switch (VAR_12) {
 case 130:
  FUNC_5(VAR_11->dev->phydev);
  break;

 case 128:
  VAR_13 = FUNC_4(VAR_11, VAR_12);
  break;

 case 129:

  if (VAR_11->hw_params->flags & VAR_10) {
   VAR_14 = FUNC_1(VAR_11, VAR_0);
   if (FUNC_0(VAR_11))
    VAR_14 |= VAR_5 |
           VAR_6 |
           VAR_8 |
           VAR_7 |
           VAR_9 |
           VAR_1;
   else
    VAR_14 |= VAR_4;

   VAR_14 |= (VAR_3 | VAR_2);
   FUNC_2(VAR_11, VAR_14, VAR_0);

   FUNC_3(VAR_11->dev, 0);
  }
  break;
 default:
  break;
 }

 return VAR_13;
}
