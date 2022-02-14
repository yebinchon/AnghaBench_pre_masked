
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_7__ {int active_fw_reqs; int max_fw_reqs; } ;
struct TYPE_8__ {TYPE_3__ fw_stats; } ;
struct TYPE_6__ {scalar_t__ map_dest; int dest_addr; } ;
struct TYPE_5__ {int flags; } ;
struct fnic {scalar_t__* wq_copy_desc_low; int * wq_copy_lock; TYPE_4__ fnic_stats; TYPE_2__ ctlr; struct fc_lport* lport; scalar_t__ data_src_addr; TYPE_1__ config; struct vnic_wq_copy* wq_copy; } ;
struct fc_lport {int host; int e_d_tov; int r_a_tov; } ;
typedef enum fcpio_flogi_reg_format_type { ____Placeholder_fcpio_flogi_reg_format_type } fcpio_flogi_reg_format_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int ,scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct vnic_wq_copy*,int ,int ,int *,scalar_t__,int ,int ) ;
 int FUNC_5 (struct vnic_wq_copy*,int ,int,int ,int *) ;
 int FUNC_6 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (struct vnic_wq_copy*) ;

int FUNC_12(struct fnic *VAR_7, u32 VAR_8)
{
 struct vnic_wq_copy *VAR_9 = &VAR_7->wq_copy[0];
 enum fcpio_flogi_reg_format_type VAR_10;
 struct fc_lport *VAR_11 = VAR_7->lport;
 u8 VAR_12[VAR_1];
 int VAR_13 = 0;
 unsigned long VAR_14;

 FUNC_9(&VAR_7->wq_copy_lock[0], VAR_14);

 if (FUNC_11(VAR_9) <= VAR_7->wq_copy_desc_low[0])
  FUNC_6(VAR_7, VAR_9);

 if (!FUNC_11(VAR_9)) {
  VAR_13 = -VAR_0;
  goto flogi_reg_ioreq_end;
 }

 if (VAR_7->ctlr.map_dest) {
  FUNC_8(VAR_12, 0xff, VAR_1);
  VAR_10 = VAR_2;
 } else {
  FUNC_7(VAR_12, VAR_7->ctlr.dest_addr, VAR_1);
  VAR_10 = VAR_3;
 }

 if ((VAR_7->config.flags & VAR_6) && !VAR_7->ctlr.map_dest) {
  FUNC_4(VAR_9, VAR_5,
      VAR_8, VAR_12,
      VAR_7->data_src_addr,
      VAR_11->r_a_tov, VAR_11->e_d_tov);
  FUNC_0(VAR_4, VAR_7->lport->host,
         "FLOGI FIP reg issued fcid %x src %pM dest %pM\n",
         VAR_8, VAR_7->data_src_addr, VAR_12);
 } else {
  FUNC_5(VAR_9, VAR_5,
        VAR_10, VAR_8, VAR_12);
  FUNC_0(VAR_4, VAR_7->lport->host,
         "FLOGI reg issued fcid %x map %d dest %pM\n",
         VAR_8, VAR_7->ctlr.map_dest, VAR_12);
 }

 FUNC_1(&VAR_7->fnic_stats.fw_stats.active_fw_reqs);
 if (FUNC_2(&VAR_7->fnic_stats.fw_stats.active_fw_reqs) >
    FUNC_2(&VAR_7->fnic_stats.fw_stats.max_fw_reqs))
  FUNC_3(&VAR_7->fnic_stats.fw_stats.max_fw_reqs,
    FUNC_2(&VAR_7->fnic_stats.fw_stats.active_fw_reqs));

flogi_reg_ioreq_end:
 FUNC_10(&VAR_7->wq_copy_lock[0], VAR_14);
 return VAR_13;
}
