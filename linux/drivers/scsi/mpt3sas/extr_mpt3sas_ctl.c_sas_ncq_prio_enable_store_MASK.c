
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct MPT3SAS_DEVICE* hostdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct MPT3SAS_DEVICE {int ncq_prio_enable; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char const*) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_3(VAR_1);
 struct MPT3SAS_DEVICE *VAR_6 = VAR_5->hostdata;
 bool VAR_7 = 0;

 if (FUNC_0(VAR_3, &VAR_7))
  return -VAR_0;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6->ncq_prio_enable = VAR_7;
 return FUNC_2(VAR_3);
}
