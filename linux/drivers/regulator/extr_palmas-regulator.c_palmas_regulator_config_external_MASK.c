
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_regs_info {int sleep_id; } ;
struct palmas_reg_init {int roof_floor; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct palmas*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct palmas *VAR_0, int VAR_1,
  struct palmas_reg_init *VAR_2)
{
 struct palmas_pmic_driver_data *VAR_3 = VAR_0->pmic_ddata;
 struct palmas_regs_info *VAR_4 = &VAR_3->palmas_regs_info[VAR_1];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_4->sleep_id,
         VAR_2->roof_floor, 1);
 if (VAR_5 < 0)
  FUNC_0(VAR_0->dev,
   "Ext control config for regulator %d failed %d\n",
   VAR_1, VAR_5);
 return VAR_5;
}
