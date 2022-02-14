
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmcraid_instance {int current_log_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct device *VAR_1,
 struct device_attribute *VAR_2,
 const char *VAR_3,
 size_t VAR_4
)
{
 struct Scsi_Host *VAR_5;
 struct pmcraid_instance *VAR_6;
 u8 VAR_7;

 if (FUNC_1(VAR_3, 10, &VAR_7))
  return -VAR_0;

 if (VAR_7 > 2)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = (struct pmcraid_instance *)VAR_5->hostdata;
 VAR_6->current_log_level = VAR_7;

 return FUNC_2(VAR_3);
}
