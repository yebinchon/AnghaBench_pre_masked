
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int hrrq_num; int in_reset_reload; int reset_wait_q; TYPE_2__* host; scalar_t__ in_ioa_bringdown; scalar_t__ reset_retries; TYPE_1__* hrrq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int _lock; scalar_t__ ioa_is_dead; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4,
           struct device_attribute *VAR_5,
           const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_1(VAR_4);
 struct ipr_ioa_cfg *VAR_9 = (struct ipr_ioa_cfg *)VAR_8->hostdata;
 unsigned long VAR_10;
 int VAR_11 = VAR_7, VAR_12;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_4(VAR_9->host->host_lock, VAR_10);
 if (VAR_9->hrrq[VAR_2].ioa_is_dead &&
     !FUNC_7(VAR_6, "online", 6)) {
  for (VAR_12 = 0; VAR_12 < VAR_9->hrrq_num; VAR_12++) {
   FUNC_3(&VAR_9->hrrq[VAR_12]._lock);
   VAR_9->hrrq[VAR_12].ioa_is_dead = 0;
   FUNC_5(&VAR_9->hrrq[VAR_12]._lock);
  }
  FUNC_9();
  VAR_9->reset_retries = 0;
  VAR_9->in_ioa_bringdown = 0;
  FUNC_2(VAR_9, VAR_3);
 }
 FUNC_6(VAR_9->host->host_lock, VAR_10);
 FUNC_8(VAR_9->reset_wait_q, !VAR_9->in_reset_reload);

 return VAR_11;
}
