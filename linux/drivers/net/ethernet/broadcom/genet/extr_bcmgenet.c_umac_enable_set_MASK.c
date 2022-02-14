
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct bcmgenet_priv *VAR_1, u32 VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 FUNC_1(VAR_1, VAR_4, VAR_0);




 if (VAR_3 == 0)
  FUNC_2(1000, 2000);
}
