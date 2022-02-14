
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; int allow_restart; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 struct scsi_disk* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_5, struct device_attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 bool VAR_9;
 struct scsi_disk *VAR_10 = FUNC_2(VAR_5);
 struct scsi_device *VAR_11 = VAR_10->device;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_11->type != VAR_3 && VAR_11->type != VAR_4)
  return -VAR_2;

 if (FUNC_1(VAR_7, &VAR_9))
  return -VAR_2;

 VAR_11->allow_restart = VAR_9;

 return VAR_8;
}
