
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_thermal_priv {struct rcar_thermal_common* common; } ;
struct rcar_thermal_common {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rcar_thermal_priv*) ;
 int FUNC_1 (struct rcar_thermal_priv*) ;
 int FUNC_2 (struct rcar_thermal_common*,int ,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct rcar_thermal_priv *VAR_1, int VAR_2)
{
 struct rcar_thermal_common *VAR_3 = VAR_1->common;
 unsigned long VAR_4;
 u32 VAR_5 = 0x3 << FUNC_1(VAR_1);

 if (!FUNC_0(VAR_1))
  return;

 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_3, VAR_0, VAR_5, VAR_2 ? 0 : VAR_5);

 FUNC_4(&VAR_3->lock, VAR_4);
}
