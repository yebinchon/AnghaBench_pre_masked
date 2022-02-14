
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int tagged_supported; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_device*,char*) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct scsi_device *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_6->tagged_supported)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_6,
      "ignoring write to deprecated queue_type attribute");
 return VAR_5;
}
