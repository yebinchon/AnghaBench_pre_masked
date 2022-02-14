
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_3 (int) ;
 struct bcmgenet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;

void FUNC_6(struct net_device *VAR_5, bool VAR_6)
{
 struct bcmgenet_priv *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8 = 0;


 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7, VAR_3);
  if (VAR_6) {
   VAR_8 &= ~VAR_2;
   FUNC_2(VAR_7, VAR_8, VAR_3);
   FUNC_3(1);

   VAR_8 &= ~(VAR_0 | VAR_1);
   VAR_8 |= VAR_4;
   FUNC_2(VAR_7, VAR_8, VAR_3);
   FUNC_3(1);

   VAR_8 &= ~VAR_4;
  } else {
   VAR_8 |= VAR_0 | VAR_1 |
          VAR_4;
   FUNC_2(VAR_7, VAR_8, VAR_3);
   FUNC_3(1);
   VAR_8 |= VAR_2;
  }
  FUNC_2(VAR_7, VAR_8, VAR_3);
  FUNC_5(60);
 } else {
  FUNC_3(1);
 }
}
