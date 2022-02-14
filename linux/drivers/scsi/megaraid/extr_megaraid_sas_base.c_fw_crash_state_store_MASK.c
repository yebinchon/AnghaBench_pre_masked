
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int fw_crash_state; TYPE_1__* pdev; int crashdump_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (struct megasas_instance*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_4,
 struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_4);
 struct megasas_instance *VAR_9 =
  (struct megasas_instance *) VAR_8->hostdata;
 int VAR_10 = 0;
 unsigned long VAR_11;

 if (FUNC_3(VAR_6, 0, &VAR_10) != 0)
  return -VAR_3;

 if ((VAR_10 <= VAR_0 || VAR_10 > VAR_2)) {
  FUNC_1(&VAR_9->pdev->dev, "application updates invalid "
   "firmware crash state\n");
  return -VAR_3;
 }

 VAR_9->fw_crash_state = VAR_10;

 if ((VAR_10 == VAR_1) || (VAR_10 == VAR_2)) {
  FUNC_5(&VAR_9->crashdump_lock, VAR_11);
  FUNC_4(VAR_9);
  FUNC_6(&VAR_9->crashdump_lock, VAR_11);
  if (VAR_10 == VAR_2)
   FUNC_2(&VAR_9->pdev->dev, "application failed to "
    "copy Firmware crash dump\n");
  else
   FUNC_2(&VAR_9->pdev->dev, "Firmware crash dump "
    "copied successfully\n");
 }
 return FUNC_7(VAR_6);
}
