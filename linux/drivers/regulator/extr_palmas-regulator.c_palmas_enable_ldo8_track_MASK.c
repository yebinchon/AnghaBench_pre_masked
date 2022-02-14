
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_regs_info {unsigned int ctrl_addr; unsigned int vsel_addr; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas {int dev; struct palmas_pmic_driver_data* pmic_ddata; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct palmas*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct palmas*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct palmas *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;
 struct palmas_pmic_driver_data *VAR_7 = VAR_3->pmic_ddata;
 struct palmas_regs_info *VAR_8;

 VAR_8 = &VAR_7->palmas_regs_info[VAR_2];
 VAR_5 = VAR_8->ctrl_addr;

 VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "Error in reading ldo8 control reg\n");
  return;
 }

 VAR_4 |= VAR_0;
 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "Error in enabling tracking mode\n");
  return;
 }





 VAR_5 = VAR_8->vsel_addr;
 VAR_6 = FUNC_1(VAR_3, VAR_5, &VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "Error in reading ldo8 voltage reg\n");
  return;
 }

 VAR_4 = (VAR_4 << 1) & VAR_1;
 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4);
 if (VAR_6 < 0)
  FUNC_0(VAR_3->dev, "Error in setting ldo8 voltage reg\n");

 return;
}
