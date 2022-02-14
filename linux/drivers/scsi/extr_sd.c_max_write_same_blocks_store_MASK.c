
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {unsigned long max_ws_blocks; struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; int no_write_same; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct scsi_disk*) ;
 struct scsi_disk* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_6, struct device_attribute *VAR_7,
       const char *VAR_8, size_t VAR_9)
{
 struct scsi_disk *VAR_10 = FUNC_3(VAR_6);
 struct scsi_device *VAR_11 = VAR_10->device;
 unsigned long VAR_12;
 int VAR_13;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_11->type != VAR_4 && VAR_11->type != VAR_5)
  return -VAR_2;

 VAR_13 = FUNC_1(VAR_8, 10, &VAR_12);

 if (VAR_13)
  return VAR_13;

 if (VAR_12 == 0)
  VAR_11->no_write_same = 1;
 else if (VAR_12 <= VAR_3) {
  VAR_11->no_write_same = 0;
  VAR_10->max_ws_blocks = VAR_12;
 }

 FUNC_2(VAR_10);

 return VAR_9;
}
