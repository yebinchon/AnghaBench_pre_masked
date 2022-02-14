
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_load_source; } ;
struct scsi_qla_host {TYPE_1__ fw_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 struct scsi_qla_host* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct scsi_qla_host *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 char *VAR_5 = ((void*)0);

 switch (VAR_4->fw_info.fw_load_source) {
 case 1:
  VAR_5 = "Flash Primary";
  break;
 case 2:
  VAR_5 = "Flash Secondary";
  break;
 case 3:
  VAR_5 = "Host Download";
  break;
 }

 return FUNC_1(VAR_3, VAR_0, "%s\n", VAR_5);
}
