
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_ioa_cfg {scalar_t__ dual_raid; TYPE_2__* hrrq; } ;
struct TYPE_7__ {int* cdb; int request_type; } ;
struct TYPE_8__ {TYPE_3__ cmd_pkt; int res_handle; } ;
struct TYPE_5__ {int shutdown_type; } ;
struct ipr_cmnd {int job_step; TYPE_4__ ioarcb; TYPE_1__ u; struct ipr_ioa_cfg* ioa_cfg; } ;
typedef enum ipr_shutdown_type { ____Placeholder_ipr_shutdown_type } ipr_shutdown_type ;
struct TYPE_6__ {int ioa_is_dead; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_cmnd*,int ,int ,unsigned long) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_22)
{
 struct ipr_ioa_cfg *VAR_23 = VAR_22->ioa_cfg;
 enum ipr_shutdown_type VAR_24 = VAR_22->u.shutdown_type;
 unsigned long VAR_25;
 int VAR_26 = VAR_7;

 VAR_0;
 if (VAR_24 == VAR_13)
  VAR_22->job_step = VAR_18;
 else if (VAR_24 != VAR_10 &&
   !VAR_23->hrrq[VAR_3].ioa_is_dead) {
  VAR_22->ioarcb.res_handle = FUNC_0(VAR_5);
  VAR_22->ioarcb.cmd_pkt.request_type = VAR_9;
  VAR_22->ioarcb.cmd_pkt.cdb[0] = VAR_6;
  VAR_22->ioarcb.cmd_pkt.cdb[1] = VAR_24;

  if (VAR_24 == VAR_11)
   VAR_25 = VAR_14;
  else if (VAR_24 == VAR_12)
   VAR_25 = VAR_4;
  else if (VAR_23->dual_raid && VAR_16)
   VAR_25 = VAR_2;
  else
   VAR_25 = VAR_1;

  FUNC_1(VAR_22, VAR_19, VAR_21, VAR_25);

  VAR_26 = VAR_8;
  VAR_22->job_step = VAR_20;
 } else
  VAR_22->job_step = VAR_17;

 VAR_15;
 return VAR_26;
}
