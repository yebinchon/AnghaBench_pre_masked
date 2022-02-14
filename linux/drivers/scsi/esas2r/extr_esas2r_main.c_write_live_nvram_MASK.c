
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_request {int dummy; } ;
struct esas2r_adapter {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct esas2r_adapter* FUNC_0 (struct kobject*) ;
 struct esas2r_request* FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_3 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sas_nvram*) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_2, struct kobject *VAR_3,
    struct bin_attribute *VAR_4,
    char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct esas2r_adapter *VAR_8 = FUNC_0(VAR_3);
 struct esas2r_request *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (FUNC_3(VAR_8, VAR_9, (struct esas2r_sas_nvram *)VAR_5))
  VAR_10 = VAR_7;

 FUNC_2(VAR_8, VAR_9);

 return VAR_10;
}
