
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_regs_info {unsigned int ctrl_addr; } ;
struct palmas_reg_init {scalar_t__ roof_floor; scalar_t__ mode_sleep; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (struct palmas*,int,struct palmas_reg_init*) ;
 int FUNC_2 (struct palmas*,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct palmas *VAR_3, int VAR_4,
  struct palmas_reg_init *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 unsigned int VAR_8 = 0;
 struct palmas_pmic_driver_data *VAR_9 = VAR_3->pmic_ddata;
 struct palmas_regs_info *VAR_10 = &VAR_9->palmas_regs_info[VAR_4];

 VAR_6 = VAR_10->ctrl_addr;

 if (VAR_5->mode_sleep)
  VAR_8 = VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_2,
   VAR_6, VAR_1, VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3->dev, "Resource reg 0x%02x update failed %d\n",
   VAR_6, VAR_7);
  return VAR_7;
 }

 if (VAR_5->roof_floor) {

  VAR_7 = FUNC_2(VAR_3, VAR_2,
    VAR_6, VAR_0,
    VAR_0);
  if (VAR_7 < 0) {
   FUNC_0(VAR_3->dev,
    "Resource Register 0x%02x update failed %d\n",
    VAR_6, VAR_7);
   return VAR_7;
  }
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }
 return 0;
}
