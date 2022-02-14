
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
 int FUNC_0 (char*,int ,char*,int) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_1(VAR_1);
 struct MPT3SAS_DEVICE *VAR_5 = VAR_4->hostdata;

 return FUNC_0(VAR_3, VAR_0, "%d\n",
   VAR_5->ncq_prio_enable);
}
