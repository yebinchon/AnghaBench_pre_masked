
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_adapter {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 struct esas2r_adapter* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_sas_nvram*) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_0, struct kobject *VAR_1,
      struct bin_attribute *VAR_2,
      char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct esas2r_adapter *VAR_6 = FUNC_0(VAR_1);

 FUNC_1(VAR_6, (struct esas2r_sas_nvram *)VAR_3);

 return sizeof(struct esas2r_sas_nvram);
}
