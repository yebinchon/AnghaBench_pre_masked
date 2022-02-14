
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_gen3_thermal_priv {unsigned int num_tscs; int * tscs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct rcar_gen3_thermal_priv *VAR_3, bool VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6 = VAR_4 ? VAR_1 | VAR_0 : 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_tscs; VAR_5++)
  FUNC_0(VAR_3->tscs[VAR_5], VAR_2, VAR_6);
}
