
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int reg_lock; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*,int ) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

u32
FUNC_5(struct il_priv *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_3(&VAR_0->reg_lock, VAR_2);
 FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0);
 FUNC_4(&VAR_0->reg_lock, VAR_2);
 return VAR_3;
}
