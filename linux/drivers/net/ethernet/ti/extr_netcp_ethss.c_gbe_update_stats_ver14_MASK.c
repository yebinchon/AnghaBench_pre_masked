
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct gbe_priv {int num_et_stats; int * hw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gbe_priv*,int ) ;
 int FUNC_1 (struct gbe_priv*,int) ;

__attribute__((used)) static void FUNC_2(struct gbe_priv *VAR_2, uint64_t *VAR_3)
{
 u32 VAR_4 = (VAR_2->num_et_stats / 2);
 int VAR_5, VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  FUNC_0(VAR_2, (VAR_7 ?
            VAR_1 :
            VAR_0));

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   VAR_5 = VAR_7 * VAR_4 + VAR_6;
   FUNC_1(VAR_2, VAR_5);

   if (VAR_3)
    VAR_3[VAR_5] = VAR_2->hw_stats[VAR_5];
  }
 }
}
