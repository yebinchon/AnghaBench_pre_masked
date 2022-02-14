
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
 int VAR_1 ;
 int VAR_2 ;
 struct pch_phub_reg* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (struct pch_phub_reg*,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 u8 VAR_7[VAR_2];
 ssize_t VAR_8;
 struct pch_phub_reg *VAR_9 = FUNC_0(VAR_3);
 int VAR_10;

 if (!FUNC_1(VAR_5, VAR_7))
  return -VAR_0;

 VAR_9->pch_phub_extrom_base_address = FUNC_3(VAR_9->pdev, &VAR_8);
 if (!VAR_9->pch_phub_extrom_base_address)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_9, VAR_7);
 FUNC_4(VAR_9->pdev, VAR_9->pch_phub_extrom_base_address);
 if (VAR_10)
  return VAR_10;

 return VAR_6;
}
