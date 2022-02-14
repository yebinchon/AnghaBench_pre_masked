
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct palmas_regs_info {int ctrl_addr; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {TYPE_1__* palmas; } ;
struct TYPE_2__ {struct palmas_pmic_driver_data* pmic_ddata; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned int*) ;
 struct palmas_pmic* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);
 struct palmas_pmic *VAR_3 = FUNC_1(VAR_1);
 struct palmas_pmic_driver_data *VAR_4 = VAR_3->palmas->pmic_ddata;
 struct palmas_regs_info *VAR_5 = &VAR_4->palmas_regs_info[VAR_2];
 unsigned int VAR_6;

 FUNC_0(VAR_3->palmas, VAR_5->ctrl_addr, &VAR_6);

 VAR_6 &= VAR_0;

 return !!(VAR_6);
}
