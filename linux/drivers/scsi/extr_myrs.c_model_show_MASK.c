
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_hba {char* model_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct myrs_hba* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct myrs_hba *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, 28, "%s\n", VAR_4->model_name);
}
