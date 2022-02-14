
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {int manage_start_stop; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 struct scsi_disk* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct scsi_disk *VAR_7 = FUNC_2(VAR_3);
 struct scsi_device *VAR_8 = VAR_7->device;
 bool VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (FUNC_1(VAR_5, &VAR_9))
  return -VAR_2;

 VAR_8->manage_start_stop = VAR_9;

 return VAR_6;
}
