
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmx {TYPE_1__* soc; } ;
struct tegra_pingroup {scalar_t__ mux_reg; unsigned int* funcs; int mux_bit; int mux_bank; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {struct tegra_pingroup* groups; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct tegra_pmx* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct tegra_pmx*,int ,scalar_t__) ;
 int FUNC_4 (struct tegra_pmx*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
     unsigned VAR_2,
     unsigned VAR_3)
{
 struct tegra_pmx *VAR_4 = FUNC_2(VAR_1);
 const struct tegra_pingroup *VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = &VAR_4->soc->groups[VAR_3];

 if (FUNC_1(VAR_5->mux_reg < 0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->funcs); VAR_6++) {
  if (VAR_5->funcs[VAR_6] == VAR_2)
   break;
 }
 if (FUNC_1(VAR_6 == FUNC_0(VAR_5->funcs)))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_5->mux_bank, VAR_5->mux_reg);
 VAR_7 &= ~(0x3 << VAR_5->mux_bit);
 VAR_7 |= VAR_6 << VAR_5->mux_bit;
 FUNC_4(VAR_4, VAR_7, VAR_5->mux_bank, VAR_5->mux_reg);

 return 0;
}
