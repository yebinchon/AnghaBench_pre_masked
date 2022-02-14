
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {TYPE_2__* dev; TYPE_1__* hw_params; } ;
struct TYPE_4__ {int phydev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bcmgenet_priv *VAR_4)
{
 u32 VAR_5;

 if (!FUNC_0(VAR_4)) {

  VAR_5 = FUNC_1(VAR_4, VAR_2);
  VAR_5 |= VAR_1;
  FUNC_2(VAR_4, VAR_5, VAR_2);
 }

 if (VAR_4->hw_params->flags & VAR_0)
  FUNC_3(VAR_4->dev->phydev,
       VAR_3);
}
