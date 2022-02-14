
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mtk_mdp_fmt {size_t flags; size_t pixelformat; } ;


 size_t FUNC_0 (struct mtk_mdp_fmt const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 struct mtk_mdp_fmt const* VAR_2 ;

__attribute__((used)) static const struct mtk_mdp_fmt *FUNC_2(u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_4) ? VAR_1 :
        VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5) {
  if (!(VAR_2[VAR_5].flags & VAR_6))
   continue;
  if (VAR_2[VAR_5].pixelformat == VAR_3)
   return &VAR_2[VAR_5];
 }
 return ((void*)0);
}
