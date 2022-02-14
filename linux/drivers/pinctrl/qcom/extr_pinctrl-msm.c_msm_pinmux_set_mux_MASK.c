
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct msm_pingroup {int mux_bit; int nfuncs; unsigned int* funcs; } ;
struct msm_pinctrl {int lock; TYPE_1__* soc; } ;
struct TYPE_2__ {struct msm_pingroup* groups; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct msm_pinctrl*,struct msm_pingroup const*) ;
 int FUNC_3 (int,struct msm_pinctrl*,struct msm_pingroup const*) ;
 scalar_t__ FUNC_4 (int) ;
 struct msm_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_1,
         unsigned VAR_2,
         unsigned VAR_3)
{
 struct msm_pinctrl *VAR_4 = FUNC_5(VAR_1);
 const struct msm_pingroup *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = &VAR_4->soc->groups[VAR_3];
 VAR_8 = FUNC_0(VAR_5->mux_bit + FUNC_4(VAR_5->nfuncs) - 1, VAR_5->mux_bit);

 for (VAR_9 = 0; VAR_9 < VAR_5->nfuncs; VAR_9++) {
  if (VAR_5->funcs[VAR_9] == VAR_2)
   break;
 }

 if (FUNC_1(VAR_9 == VAR_5->nfuncs))
  return -VAR_0;

 FUNC_6(&VAR_4->lock, VAR_6);

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 VAR_7 &= ~VAR_8;
 VAR_7 |= VAR_9 << VAR_5->mux_bit;
 FUNC_3(VAR_7, VAR_4, VAR_5);

 FUNC_7(&VAR_4->lock, VAR_6);

 return 0;
}
