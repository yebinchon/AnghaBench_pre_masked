
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_regs_info {unsigned int ctrl_addr; } ;
struct palmas_reg_init {scalar_t__ roof_floor; scalar_t__ mode_sleep; scalar_t__ warm_reset; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (struct palmas*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct palmas*,unsigned int,unsigned int) ;
 int FUNC_3 (struct palmas*,int,struct palmas_reg_init*) ;
 int FUNC_4 (struct palmas*,int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct palmas *VAR_4, int VAR_5,
  struct palmas_reg_init *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 struct palmas_pmic_driver_data *VAR_10 = VAR_4->pmic_ddata;
 struct palmas_regs_info *VAR_11 = &VAR_10->palmas_regs_info[VAR_5];

 VAR_8 = VAR_11->ctrl_addr;

 VAR_9 = FUNC_1(VAR_4, VAR_8, &VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->warm_reset)
  VAR_7 |= VAR_2;
 else
  VAR_7 &= ~VAR_2;

 if (VAR_6->mode_sleep)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;

 VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->roof_floor) {

  VAR_9 = FUNC_4(VAR_4, VAR_3,
    VAR_8, VAR_0,
    VAR_0);
  if (VAR_9 < 0) {
   FUNC_0(VAR_4->dev,
    "LDO Register 0x%02x update failed %d\n",
    VAR_8, VAR_9);
   return VAR_9;
  }
  return FUNC_3(VAR_4, VAR_5, VAR_6);
 }
 return 0;
}
