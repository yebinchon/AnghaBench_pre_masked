
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_phub_reg {size_t pch_opt_rom_start_address; int pch_phub_extrom_base_address; int pdev; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef unsigned int ssize_t ;
typedef size_t loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 struct pch_phub_reg* FUNC_0 (int ) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct pch_phub_reg*,size_t,char) ;
 int FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_4, struct kobject *VAR_5,
      struct bin_attribute *VAR_6,
      char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 ssize_t VAR_13;
 struct pch_phub_reg *VAR_14 = FUNC_0(FUNC_1(VAR_5));

 VAR_12 = FUNC_2(&VAR_3);
 if (VAR_12)
  return -VAR_1;

 if (VAR_8 > VAR_2) {
  VAR_11 = 0;
  goto return_ok;
 }
 if (VAR_9 > VAR_2) {
  VAR_11 = 0;
  goto return_ok;
 }

 VAR_14->pch_phub_extrom_base_address = FUNC_5(VAR_14->pdev, &VAR_13);
 if (!VAR_14->pch_phub_extrom_base_address) {
  VAR_10 = -VAR_0;
  goto exrom_map_err;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (VAR_2 < VAR_8 + VAR_11)
   goto return_ok;

  VAR_12 = FUNC_4(VAR_14,
       VAR_14->pch_opt_rom_start_address + VAR_11 + VAR_8,
       VAR_7[VAR_11]);
  if (VAR_12) {
   VAR_10 = VAR_12;
   goto return_err;
  }
 }

return_ok:
 FUNC_6(VAR_14->pdev, VAR_14->pch_phub_extrom_base_address);
 FUNC_3(&VAR_3);
 return VAR_11;

return_err:
 FUNC_6(VAR_14->pdev, VAR_14->pch_phub_extrom_base_address);

exrom_map_err:
 FUNC_3(&VAR_3);
 return VAR_10;
}
