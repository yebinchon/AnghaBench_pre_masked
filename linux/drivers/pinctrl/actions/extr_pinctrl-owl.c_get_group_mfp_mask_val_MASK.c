
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_pingroup {int nfuncs; int* funcs; int mfpctl_width; int mfpctl_shift; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(const struct owl_pingroup *VAR_1,
    int VAR_2,
    u32 *VAR_3,
    u32 *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1->nfuncs; VAR_5++) {
  if (VAR_1->funcs[VAR_5] == VAR_2)
   break;
 }
 if (FUNC_0(VAR_5 == VAR_1->nfuncs))
  return -VAR_0;

 VAR_6 = (1 << VAR_1->mfpctl_width);
 if (VAR_5 > VAR_6)
  VAR_5 -= VAR_6;

 VAR_7 = VAR_6 - 1;
 *VAR_3 = (VAR_7 << VAR_1->mfpctl_shift);
 *VAR_4 = (VAR_5 << VAR_1->mfpctl_shift);

 return 0;
}
