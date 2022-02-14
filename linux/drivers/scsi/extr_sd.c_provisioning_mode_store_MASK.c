
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct scsi_disk*,int) ;
 scalar_t__ FUNC_2 (struct scsi_disk*) ;
 int FUNC_3 (int ,char const*) ;
 struct scsi_disk* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_6, struct device_attribute *VAR_7,
   const char *VAR_8, size_t VAR_9)
{
 struct scsi_disk *VAR_10 = FUNC_4(VAR_6);
 struct scsi_device *VAR_11 = VAR_10->device;
 int VAR_12;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (FUNC_2(VAR_10)) {
  FUNC_1(VAR_10, VAR_3);
  return VAR_9;
 }

 if (VAR_11->type != VAR_4)
  return -VAR_2;

 VAR_12 = FUNC_3(VAR_5, VAR_8);
 if (VAR_12 < 0)
  return -VAR_2;

 FUNC_1(VAR_10, VAR_12);

 return VAR_9;
}
