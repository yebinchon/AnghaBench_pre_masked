
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_regs_info {unsigned int ctrl_addr; unsigned int vsel_addr; } ;
struct palmas_reg_init {unsigned int mode_sleep; unsigned int vsel; scalar_t__ roof_floor; int warm_reset; } ;
struct palmas_pmic_driver_data {struct palmas_regs_info* palmas_regs_info; } ;
struct palmas {struct palmas_pmic_driver_data* pmic_ddata; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct palmas*,int,struct palmas_reg_init*) ;
 int FUNC_1 (struct palmas*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct palmas*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct palmas *VAR_8, int VAR_9,
  struct palmas_reg_init *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 struct palmas_pmic_driver_data *VAR_13 = VAR_8->pmic_ddata;
 struct palmas_regs_info *VAR_14 = &VAR_13->palmas_regs_info[VAR_9];
 unsigned int VAR_15 = VAR_14->ctrl_addr;

 VAR_12 = FUNC_1(VAR_8, VAR_15, &VAR_11);
 if (VAR_12)
  return VAR_12;

 switch (VAR_9) {
 case 129:
 case 128:
  VAR_11 &= ~VAR_0;
  if (VAR_10->mode_sleep)
   VAR_11 |= VAR_10->mode_sleep <<
     VAR_1;
  break;
 default:
  if (VAR_10->warm_reset)
   VAR_11 |= VAR_6;
  else
   VAR_11 &= ~VAR_6;

  if (VAR_10->roof_floor)
   VAR_11 |= VAR_5;
  else
   VAR_11 &= ~VAR_5;

  VAR_11 &= ~VAR_3;
  if (VAR_10->mode_sleep)
   VAR_11 |= VAR_10->mode_sleep <<
     VAR_4;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_15, VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_14->vsel_addr && VAR_10->vsel) {

  VAR_11 = VAR_10->vsel;

  VAR_12 = FUNC_2(VAR_8, VAR_14->vsel_addr, VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_10->roof_floor && (VAR_9 != 129) &&
   (VAR_9 != 128)) {

  VAR_12 = FUNC_1(VAR_8, VAR_15, &VAR_11);
  if (VAR_12 < 0)
   return VAR_12;

  if (!(VAR_11 & VAR_2)) {
   VAR_11 |= VAR_7;
   VAR_12 = FUNC_2(VAR_8, VAR_15, VAR_11);
   if (VAR_12 < 0)
    return VAR_12;
  }
  return FUNC_0(VAR_8, VAR_9, VAR_10);
 }
 return 0;
}
