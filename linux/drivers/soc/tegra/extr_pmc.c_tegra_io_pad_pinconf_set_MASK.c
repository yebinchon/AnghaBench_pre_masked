
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


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 struct tegra_pmc* FUNC_2 (struct pinctrl_dev*) ;
 struct tegra_io_pad_soc* FUNC_3 (struct tegra_pmc*,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tegra_pmc*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_3,
        unsigned int VAR_4, unsigned long *VAR_5,
        unsigned int VAR_6)
{
 struct tegra_pmc *VAR_7 = FUNC_2(VAR_3);
 const struct tegra_io_pad_soc *VAR_8;
 enum pin_config_param VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_8 = FUNC_3(VAR_7, VAR_4);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10) {
  VAR_9 = FUNC_1(VAR_5[VAR_10]);
  VAR_12 = FUNC_0(VAR_5[VAR_10]);

  switch (VAR_9) {
  case 129:
   if (VAR_12)
    VAR_11 = FUNC_4(VAR_8->id);
   else
    VAR_11 = FUNC_5(VAR_8->id);
   if (VAR_11)
    return VAR_11;
   break;
  case 128:
   if (VAR_12 != VAR_1 &&
       VAR_12 != VAR_2)
    return -VAR_0;
   VAR_11 = FUNC_6(VAR_7, VAR_8->id, VAR_12);
   if (VAR_11)
    return VAR_11;
   break;
  default:
   return -VAR_0;
  }
 }

 return 0;
}
