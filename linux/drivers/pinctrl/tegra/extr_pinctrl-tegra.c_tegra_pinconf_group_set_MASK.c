
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tegra_pmx {TYPE_1__* soc; } ;
struct tegra_pingroup {int dummy; } ;
struct pinctrl_dev {int dev; } ;
typedef int s8 ;
typedef int s32 ;
typedef enum tegra_pinconf_param { ____Placeholder_tegra_pinconf_param } tegra_pinconf_param ;
struct TYPE_2__ {struct tegra_pingroup* groups; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,char*,...) ;
 struct tegra_pmx* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct tegra_pmx*,int,int ) ;
 int FUNC_6 (struct tegra_pmx*,int,int,int ) ;
 int FUNC_7 (struct tegra_pmx*,struct tegra_pingroup const*,int,int,int*,int *,int*,int*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_2,
       unsigned VAR_3, unsigned long *VAR_4,
       unsigned VAR_5)
{
 struct tegra_pmx *VAR_6 = FUNC_4(VAR_2);
 enum tegra_pinconf_param VAR_7;
 u16 VAR_8;
 const struct tegra_pingroup *VAR_9;
 int VAR_10, VAR_11;
 s8 VAR_12, VAR_13, VAR_14;
 s32 VAR_15;
 u32 VAR_16, VAR_17;

 VAR_9 = &VAR_6->soc->groups[VAR_3];

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_7 = FUNC_2(VAR_4[VAR_11]);
  VAR_8 = FUNC_1(VAR_4[VAR_11]);

  VAR_10 = FUNC_7(VAR_6, VAR_9, VAR_7, 1, &VAR_12, &VAR_15, &VAR_13,
     &VAR_14);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_16 = FUNC_5(VAR_6, VAR_12, VAR_15);


  if (VAR_7 == VAR_1) {
   if ((VAR_16 & FUNC_0(VAR_13)) && !VAR_8) {
    FUNC_3(VAR_2->dev, "LOCK bit cannot be cleared\n");
    return -VAR_0;
   }
  }


  if (VAR_14 == 1)
   VAR_8 = !!VAR_8;


  VAR_17 = (1 << VAR_14) - 1;
  if (VAR_8 & ~VAR_17) {
   FUNC_3(VAR_2->dev,
    "config %lx: %x too big for %d bit register\n",
    VAR_4[VAR_11], VAR_8, VAR_14);
   return -VAR_0;
  }


  VAR_16 &= ~(VAR_17 << VAR_13);
  VAR_16 |= VAR_8 << VAR_13;
  FUNC_6(VAR_6, VAR_16, VAR_12, VAR_15);
 }

 return 0;
}
