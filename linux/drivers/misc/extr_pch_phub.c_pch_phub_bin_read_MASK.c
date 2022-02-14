
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_phub_reg {int pch_phub_extrom_base_address; int pdev; scalar_t__ pch_opt_rom_start_address; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef unsigned int ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pch_phub_reg* FUNC_0 (int ) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct pch_phub_reg*,scalar_t__,...) ;
 int FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_3, struct kobject *VAR_4,
     struct bin_attribute *VAR_5, char *VAR_6,
     loff_t VAR_7, size_t VAR_8)
{
 unsigned int VAR_9;
 unsigned char VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;
 ssize_t VAR_16;

 struct pch_phub_reg *VAR_17 = FUNC_0(FUNC_1(VAR_4));

 VAR_14 = FUNC_2(&VAR_2);
 if (VAR_14) {
  VAR_15 = -VAR_1;
  goto return_err_nomutex;
 }


 VAR_17->pch_phub_extrom_base_address = FUNC_5(VAR_17->pdev, &VAR_16);
 if (!VAR_17->pch_phub_extrom_base_address) {
  VAR_15 = -VAR_0;
  goto exrom_map_err;
 }

 FUNC_4(VAR_17, VAR_17->pch_opt_rom_start_address,
    (unsigned char *)&VAR_9);
 VAR_9 &= 0xff;
 FUNC_4(VAR_17, VAR_17->pch_opt_rom_start_address + 1,
    (unsigned char *)&VAR_11);
 VAR_9 |= (VAR_11 & 0xff) << 8;
 if (VAR_9 == 0xAA55) {
  FUNC_4(VAR_17,
      VAR_17->pch_opt_rom_start_address + 2,
      &VAR_10);
  VAR_13 = VAR_10 * 512;
  if (VAR_13 < VAR_7) {
   VAR_12 = 0;
   goto return_ok;
  }
  if (VAR_13 < VAR_8) {
   VAR_12 = 0;
   goto return_ok;
  }

  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   FUNC_4(VAR_17,
       VAR_17->pch_opt_rom_start_address + VAR_12 + VAR_7,
       &VAR_6[VAR_12]);
  }
 } else {
  VAR_15 = -VAR_0;
  goto return_err;
 }
return_ok:
 FUNC_6(VAR_17->pdev, VAR_17->pch_phub_extrom_base_address);
 FUNC_3(&VAR_2);
 return VAR_12;

return_err:
 FUNC_6(VAR_17->pdev, VAR_17->pch_phub_extrom_base_address);
exrom_map_err:
 FUNC_3(&VAR_2);
return_err_nomutex:
 return VAR_15;
}
