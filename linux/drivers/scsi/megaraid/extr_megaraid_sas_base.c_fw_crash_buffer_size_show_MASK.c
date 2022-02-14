
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int fw_crash_buffer_size; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,unsigned long,char*,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct megasas_instance *VAR_5 =
  (struct megasas_instance *) VAR_4->hostdata;

 return FUNC_1(VAR_3, VAR_0, "%ld\n", (unsigned long)
  ((VAR_5->fw_crash_buffer_size) * 1024 * 1024)/VAR_0);
}
