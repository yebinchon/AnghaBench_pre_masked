
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_2__* host; TYPE_1__* hrrq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ ioa_is_dead; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 struct ipr_ioa_cfg *VAR_6 = (struct ipr_ioa_cfg *)VAR_5->hostdata;
 unsigned long VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_6->host->host_lock, VAR_7);
 if (VAR_6->hrrq[VAR_0].ioa_is_dead)
  VAR_8 = FUNC_1(VAR_4, VAR_1, "offline\n");
 else
  VAR_8 = FUNC_1(VAR_4, VAR_1, "online\n");
 FUNC_3(VAR_6->host->host_lock, VAR_7);
 return VAR_8;
}
