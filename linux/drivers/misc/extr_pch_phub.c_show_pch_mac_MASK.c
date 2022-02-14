
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pch_phub_reg {int pch_phub_extrom_base_address; int pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pch_phub_reg* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pch_phub_reg*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 u8 VAR_4[8];
 struct pch_phub_reg *VAR_5 = FUNC_0(VAR_1);
 ssize_t VAR_6;

 VAR_5->pch_phub_extrom_base_address = FUNC_2(VAR_5->pdev, &VAR_6);
 if (!VAR_5->pch_phub_extrom_base_address)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_4);
 FUNC_3(VAR_5->pdev, VAR_5->pch_phub_extrom_base_address);

 return FUNC_4(VAR_3, "%pM\n", VAR_4);
}
