
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct palmas_regs_info {int ctrl_addr; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas_pmic {unsigned int* current_reg_mode; TYPE_1__* desc; TYPE_2__* palmas; } ;
struct TYPE_5__ {struct palmas_pmic_driver_data* pmic_ddata; } ;
struct TYPE_4__ {unsigned int enable_val; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned int*) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned int) ;
 struct palmas_pmic* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = FUNC_3(VAR_6);
 int VAR_9;
 struct palmas_pmic *VAR_10 = FUNC_2(VAR_6);
 struct palmas_pmic_driver_data *VAR_11 = VAR_10->palmas->pmic_ddata;
 struct palmas_regs_info *VAR_12 = &VAR_11->palmas_regs_info[VAR_8];
 unsigned int VAR_13;
 bool VAR_14 = 1;

 VAR_9 = FUNC_0(VAR_10->palmas, VAR_12->ctrl_addr, &VAR_13);
 if (VAR_9)
  return VAR_9;

 VAR_13 &= ~VAR_1;

 if (VAR_13 == VAR_3)
  VAR_14 = 0;

 switch (VAR_7) {
 case 128:
  VAR_13 |= VAR_4;
  break;
 case 129:
  VAR_13 |= VAR_2;
  break;
 case 130:
  VAR_13 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_10->current_reg_mode[VAR_8] = VAR_13 & VAR_1;
 if (VAR_14)
  FUNC_1(VAR_10->palmas, VAR_12->ctrl_addr, VAR_13);


 VAR_10->desc[VAR_8].enable_val = VAR_10->current_reg_mode[VAR_8];

 return 0;
}
