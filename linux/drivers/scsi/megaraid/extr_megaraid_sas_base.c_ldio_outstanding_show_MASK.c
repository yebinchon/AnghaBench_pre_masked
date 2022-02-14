
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int ldio_outstanding; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
 char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct megasas_instance *VAR_5 = (struct megasas_instance *)VAR_4->hostdata;

 return FUNC_2(VAR_3, VAR_0, "%d\n", FUNC_0(&VAR_5->ldio_outstanding));
}
