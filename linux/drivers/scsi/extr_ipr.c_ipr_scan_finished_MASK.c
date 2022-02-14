
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {int transop_timeout; scalar_t__ scan_done; TYPE_1__* hrrq; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_2__ {scalar_t__ ioa_is_dead; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct ipr_ioa_cfg *VAR_5 = (struct ipr_ioa_cfg *) VAR_2->hostdata;
 int VAR_6 = 0;

 FUNC_0(VAR_2->host_lock, VAR_4);
 if (VAR_5->hrrq[VAR_1].ioa_is_dead || VAR_5->scan_done)
  VAR_6 = 1;
 if ((VAR_3/VAR_0) > (VAR_5->transop_timeout * 2))
  VAR_6 = 1;
 FUNC_1(VAR_2->host_lock, VAR_4);
 return VAR_6;
}
