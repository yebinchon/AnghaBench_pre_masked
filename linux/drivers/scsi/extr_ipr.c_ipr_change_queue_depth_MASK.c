
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int queue_depth; scalar_t__ hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {int dummy; } ;
struct ipr_ioa_cfg {TYPE_2__* host; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipr_resource_entry*) ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_1, int VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = (struct ipr_ioa_cfg *)VAR_1->host->hostdata;
 struct ipr_resource_entry *VAR_4;
 unsigned long VAR_5 = 0;

 FUNC_2(VAR_3->host->host_lock, VAR_5);
 VAR_4 = (struct ipr_resource_entry *)VAR_1->hostdata;

 if (VAR_4 && FUNC_0(VAR_4) && VAR_2 > VAR_0)
  VAR_2 = VAR_0;
 FUNC_3(VAR_3->host->host_lock, VAR_5);

 FUNC_1(VAR_1, VAR_2);
 return VAR_1->queue_depth;
}
