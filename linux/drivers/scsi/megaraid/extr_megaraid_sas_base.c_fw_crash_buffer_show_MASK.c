
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct megasas_instance {unsigned long fw_crash_buffer_offset; scalar_t__ fw_crash_state; unsigned long fw_crash_buffer_size; int crashdump_lock; scalar_t__* crash_buf; TYPE_1__* pdev; int crash_dump_buf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef unsigned long ssize_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,void*,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_5,
 struct device_attribute *VAR_6, char *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_5);
 struct megasas_instance *VAR_9 =
  (struct megasas_instance *) VAR_8->hostdata;
 u32 VAR_10;
 unsigned long VAR_11 = VAR_2;
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;

 FUNC_3(&VAR_9->crashdump_lock, VAR_14);
 VAR_15 = VAR_9->fw_crash_buffer_offset;
 if (!VAR_9->crash_dump_buf &&
  !((VAR_9->fw_crash_state == VAR_0) ||
  (VAR_9->fw_crash_state == VAR_1))) {
  FUNC_1(&VAR_9->pdev->dev,
   "Firmware crash dump is not available\n");
  FUNC_4(&VAR_9->crashdump_lock, VAR_14);
  return -VAR_3;
 }

 if (VAR_15 > (VAR_9->fw_crash_buffer_size * VAR_11)) {
  FUNC_1(&VAR_9->pdev->dev,
   "Firmware crash dump offset is out of range\n");
  FUNC_4(&VAR_9->crashdump_lock, VAR_14);
  return 0;
 }

 VAR_10 = (VAR_9->fw_crash_buffer_size * VAR_11) - VAR_15;
 VAR_12 = VAR_11 - (VAR_15 % VAR_11);
 VAR_10 = (VAR_10 > VAR_12) ? VAR_12 : VAR_10;
 VAR_10 = (VAR_10 >= VAR_4) ? (VAR_4 - 1) : VAR_10;

 VAR_13 = (unsigned long)VAR_9->crash_buf[VAR_15 / VAR_11] +
  (VAR_15 % VAR_11);
 FUNC_2(VAR_7, (void *)VAR_13, VAR_10);
 FUNC_4(&VAR_9->crashdump_lock, VAR_14);

 return VAR_10;
}
