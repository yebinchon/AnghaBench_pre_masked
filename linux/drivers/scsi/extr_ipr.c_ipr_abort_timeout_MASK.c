
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ipr_ioa_cfg {TYPE_4__* host; scalar_t__ in_reset_reload; } ;
struct ipr_cmd_pkt {int* cdb; int request_type; } ;
struct TYPE_7__ {struct ipr_cmd_pkt cmd_pkt; int res_handle; } ;
struct TYPE_6__ {int sdev; } ;
struct TYPE_5__ {scalar_t__ done; } ;
struct ipr_cmnd {TYPE_3__ ioarcb; struct ipr_cmnd* sibling; TYPE_2__ u; TYPE_1__ completion; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_8__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ipr_cmnd* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_8 ;
 struct ipr_cmnd* VAR_9 ;
 int FUNC_1 (struct ipr_cmnd*,int ,int ,int ) ;
 struct ipr_cmnd* FUNC_2 (struct ipr_ioa_cfg*) ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_12)
{
 struct ipr_cmnd *VAR_13 = FUNC_0(VAR_13, VAR_12, VAR_11);
 struct ipr_cmnd *VAR_14;
 struct ipr_ioa_cfg *VAR_15 = VAR_13->ioa_cfg;
 struct ipr_cmd_pkt *VAR_16;
 unsigned long VAR_17 = 0;

 VAR_0;
 FUNC_4(VAR_15->host->host_lock, VAR_17);
 if (VAR_13->completion.done || VAR_15->in_reset_reload) {
  FUNC_5(VAR_15->host->host_lock, VAR_17);
  return;
 }

 FUNC_3(VAR_6, VAR_13->u.sdev, "Abort timed out. Resetting bus.\n");
 VAR_14 = FUNC_2(VAR_15);
 VAR_13->sibling = VAR_14;
 VAR_14->sibling = VAR_13;
 VAR_14->ioarcb.res_handle = VAR_13->ioarcb.res_handle;
 VAR_16 = &VAR_14->ioarcb.cmd_pkt;
 VAR_16->request_type = VAR_5;
 VAR_16->cdb[0] = VAR_3;
 VAR_16->cdb[2] = VAR_4 | VAR_1;

 FUNC_1(VAR_14, VAR_8, VAR_10, VAR_2);
 FUNC_5(VAR_15->host->host_lock, VAR_17);
 VAR_7;
}
