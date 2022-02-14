
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int commands_outstanding; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 struct ctlr_info* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_0);
 struct ctlr_info *VAR_4 = FUNC_2(VAR_3);

 return FUNC_3(VAR_2, 20, "%d\n",
   FUNC_0(&VAR_4->commands_outstanding));
}
