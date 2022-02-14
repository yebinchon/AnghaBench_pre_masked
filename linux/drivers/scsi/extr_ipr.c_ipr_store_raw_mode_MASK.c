
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {scalar_t__ raw_mode; scalar_t__ sdev; } ;
struct ipr_ioa_cfg {TYPE_2__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipr_resource_entry*) ;
 int FUNC_1 (int ,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (char const*) ;
 struct scsi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct scsi_device *VAR_7 = FUNC_6(VAR_3);
 struct ipr_ioa_cfg *VAR_8 = (struct ipr_ioa_cfg *)VAR_7->host->hostdata;
 struct ipr_resource_entry *VAR_9;
 unsigned long VAR_10 = 0;
 ssize_t VAR_11;

 FUNC_3(VAR_8->host->host_lock, VAR_10);
 VAR_9 = (struct ipr_resource_entry *)VAR_7->hostdata;
 if (VAR_9) {
  if (FUNC_0(VAR_9)) {
   VAR_9->raw_mode = FUNC_2(VAR_5, ((void*)0), 10);
   VAR_11 = FUNC_5(VAR_5);
   if (VAR_9->sdev)
    FUNC_1(VAR_2, VAR_9->sdev, "raw mode is %s\n",
     VAR_9->raw_mode ? "enabled" : "disabled");
  } else
   VAR_11 = -VAR_0;
 } else
  VAR_11 = -VAR_1;
 FUNC_4(VAR_8->host->host_lock, VAR_10);
 return VAR_11;
}
