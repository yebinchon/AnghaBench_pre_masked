
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {int dummy; } ;
struct tegra_io_pad_soc {int id; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;


 unsigned long FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long) ;
 struct tegra_pmc* FUNC_2 (struct pinctrl_dev*) ;
 struct tegra_io_pad_soc* FUNC_3 (struct tegra_pmc*,unsigned int) ;
 int FUNC_4 (struct tegra_pmc*,int ) ;
 int FUNC_5 (struct tegra_pmc*,int ) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2, unsigned long *VAR_3)
{
 enum pin_config_param VAR_4 = FUNC_1(*VAR_3);
 struct tegra_pmc *VAR_5 = FUNC_2(VAR_1);
 const struct tegra_io_pad_soc *VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_4(VAR_5, VAR_6->id);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = VAR_7;
  break;

 case 129:
  VAR_7 = FUNC_5(VAR_5, VAR_6->id);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = !VAR_7;
  break;

 default:
  return -VAR_0;
 }

 *VAR_3 = FUNC_0(VAR_4, VAR_8);

 return 0;
}
