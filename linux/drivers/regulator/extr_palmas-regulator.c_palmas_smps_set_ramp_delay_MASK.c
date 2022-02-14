
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct palmas_regs_info {int tstep_addr; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {int * ramp_delay; TYPE_1__* palmas; } ;
struct TYPE_2__ {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;




 int FUNC_0 (int ,char*,int) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,unsigned int) ;
 struct palmas_pmic* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1,
   int VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);
 struct palmas_pmic *VAR_4 = FUNC_2(VAR_1);
 struct palmas_pmic_driver_data *VAR_5 = VAR_4->palmas->pmic_ddata;
 struct palmas_regs_info *VAR_6 = &VAR_5->palmas_regs_info[VAR_3];
 unsigned int VAR_7 = 0;
 int VAR_8;


 switch (VAR_3) {
 case 129:
 case 128:
  return 0;
 }

 if (VAR_2 <= 0)
  VAR_7 = 0;
 else if (VAR_2 <= 2500)
  VAR_7 = 3;
 else if (VAR_2 <= 5000)
  VAR_7 = 2;
 else
  VAR_7 = 1;

 VAR_8 = FUNC_1(VAR_4->palmas, VAR_6->tstep_addr, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->palmas->dev, "TSTEP write failed: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_4->ramp_delay[VAR_3] = VAR_0[VAR_7];
 return VAR_8;
}
