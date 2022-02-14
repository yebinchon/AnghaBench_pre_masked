
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int (* change_queue_depth ) (struct scsi_device*,int) ;} ;
struct scsi_device {int queue_depth; int max_queue_depth; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int can_queue; struct scsi_host_template* hostt; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (struct scsi_device*,int) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6;
 struct scsi_device *VAR_7 = FUNC_2(VAR_1);
 struct scsi_host_template *VAR_8 = VAR_7->host->hostt;

 if (!VAR_8->change_queue_depth)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, ((void*)0), 0);

 if (VAR_5 < 1 || VAR_5 > VAR_7->host->can_queue)
  return -VAR_0;

 VAR_6 = VAR_8->change_queue_depth(VAR_7, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7->max_queue_depth = VAR_7->queue_depth;

 return VAR_4;
}
