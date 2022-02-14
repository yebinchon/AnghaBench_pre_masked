
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int reg_set; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct megasas_instance *VAR_4 =
   (struct megasas_instance *)VAR_3->hostdata;

 return FUNC_1(VAR_4->reg_set, VAR_2);
}
