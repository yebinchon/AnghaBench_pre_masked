
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int serial_number; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,int) ;
 struct myrs_hba* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct myrs_hba *VAR_4 = FUNC_2(VAR_3);
 char VAR_5[17];

 FUNC_1(VAR_5, VAR_4->ctlr_info->serial_number, 16);
 VAR_5[16] = '\0';
 return FUNC_3(VAR_2, 16, "%s\n", VAR_5);
}
