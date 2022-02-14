
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; TYPE_5__* host; TYPE_4__* hrrq; int in_reset_reload; int reset_wait_q; TYPE_3__* pdev; } ;
struct TYPE_10__ {int host_lock; } ;
struct TYPE_9__ {scalar_t__ ioa_is_dead; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_9)
{
 struct ipr_ioa_cfg *VAR_10;
 unsigned long VAR_11 = 0;
 int VAR_12 = VAR_6;

 VAR_0;
 VAR_10 = (struct ipr_ioa_cfg *) VAR_9->device->host->hostdata;
 FUNC_2(VAR_10->host->host_lock, VAR_11);

 if (!VAR_10->in_reset_reload && !VAR_10->hrrq[VAR_3].ioa_is_dead) {
  FUNC_1(VAR_10, VAR_4);
  FUNC_0(&VAR_10->pdev->dev,
   "Adapter being reset as a result of error recovery.\n");

  if (VAR_7 == VAR_10->sdt_state)
   VAR_10->sdt_state = VAR_2;
 }

 FUNC_3(VAR_10->host->host_lock, VAR_11);
 FUNC_4(VAR_10->reset_wait_q, !VAR_10->in_reset_reload);
 FUNC_2(VAR_10->host->host_lock, VAR_11);



 if (VAR_10->hrrq[VAR_3].ioa_is_dead) {
  VAR_8;
  VAR_12 = VAR_1;
 }

 FUNC_3(VAR_10->host->host_lock, VAR_11);
 VAR_5;
 return VAR_12;
}
