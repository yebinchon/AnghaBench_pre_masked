
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int ) ;
 int FUNC_3 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_4 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct bcmgenet_priv *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;


 VAR_7 = 1 << (VAR_0 + VAR_3) | VAR_2;
 VAR_6 = FUNC_2(VAR_5, VAR_1);
 VAR_6 &= ~VAR_7;
 FUNC_3(VAR_5, VAR_6, VAR_1);

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 &= ~VAR_7;
 FUNC_1(VAR_5, VAR_6, VAR_1);

 FUNC_4(VAR_5, 1, VAR_4);
 FUNC_5(10);
 FUNC_4(VAR_5, 0, VAR_4);

 return VAR_7;
}
