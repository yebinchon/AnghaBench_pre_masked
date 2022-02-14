
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int fw_crash_buffer_offset; int crashdump_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct megasas_instance *VAR_6 =
  (struct megasas_instance *) VAR_5->hostdata;
 int VAR_7 = 0;
 unsigned long VAR_8;

 if (FUNC_1(VAR_3, 0, &VAR_7) != 0)
  return -VAR_0;

 FUNC_2(&VAR_6->crashdump_lock, VAR_8);
 VAR_6->fw_crash_buffer_offset = VAR_7;
 FUNC_3(&VAR_6->crashdump_lock, VAR_8);
 return FUNC_4(VAR_3);
}
