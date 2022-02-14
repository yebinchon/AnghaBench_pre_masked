
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gbe_priv {int num_et_stats; int * hw_stats; } ;


 int FUNC_0 (struct gbe_priv*,int) ;

__attribute__((used)) static void FUNC_1(struct gbe_priv *VAR_0, uint64_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_et_stats; VAR_2++) {
  FUNC_0(VAR_0, VAR_2);

  if (VAR_1)
   VAR_1[VAR_2] = VAR_0->hw_stats[VAR_2];
 }
}
