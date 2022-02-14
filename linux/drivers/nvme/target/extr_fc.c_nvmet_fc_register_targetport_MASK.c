
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {int port_num; int port_id; struct nvmet_fc_tgtport* private; int port_name; int node_name; } ;
struct nvmet_fc_tgtport {struct nvmet_fc_target_port fc_target_port; int tgt_list; scalar_t__ max_sg_cnt; int assoc_cnt; int ref; int assoc_list; int ls_busylist; int ls_list; int lock; struct nvmet_fc_target_template* ops; struct device* dev; } ;
struct nvmet_fc_target_template {scalar_t__ max_sgl_segments; scalar_t__ target_priv_sz; int dma_boundary; int max_dif_sgl_segments; int max_hw_queues; int targetport_delete; int fcp_req_release; int fcp_abort; int fcp_op; int xmt_ls_rsp; } ;
struct nvmet_fc_port_info {int port_id; int port_name; int node_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct nvmet_fc_tgtport*) ;
 int FUNC_6 (int *) ;
 struct nvmet_fc_tgtport* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct nvmet_fc_tgtport*) ;
 int FUNC_10 (struct nvmet_fc_tgtport*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

int
FUNC_15(struct nvmet_fc_port_info *VAR_8,
   struct nvmet_fc_target_template *VAR_9,
   struct device *VAR_10,
   struct nvmet_fc_target_port **VAR_11)
{
 struct nvmet_fc_tgtport *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_9->xmt_ls_rsp || !VAR_9->fcp_op ||
     !VAR_9->fcp_abort ||
     !VAR_9->fcp_req_release || !VAR_9->targetport_delete ||
     !VAR_9->max_hw_queues || !VAR_9->max_sgl_segments ||
     !VAR_9->max_dif_sgl_segments || !VAR_9->dma_boundary) {
  VAR_14 = -VAR_0;
  goto out_regtgt_failed;
 }

 VAR_12 = FUNC_7((sizeof(*VAR_12) + VAR_9->target_priv_sz),
    VAR_4);
 if (!VAR_12) {
  VAR_14 = -VAR_2;
  goto out_regtgt_failed;
 }

 VAR_15 = FUNC_3(&VAR_7, 0, 0, VAR_4);
 if (VAR_15 < 0) {
  VAR_14 = -VAR_3;
  goto out_fail_kfree;
 }

 if (!FUNC_1(VAR_10) && VAR_10) {
  VAR_14 = -VAR_1;
  goto out_ida_put;
 }

 VAR_12->fc_target_port.node_name = VAR_8->node_name;
 VAR_12->fc_target_port.port_name = VAR_8->port_name;
 VAR_12->fc_target_port.private = &VAR_12[1];
 VAR_12->fc_target_port.port_id = VAR_8->port_id;
 VAR_12->fc_target_port.port_num = VAR_15;
 FUNC_0(&VAR_12->tgt_list);
 VAR_12->dev = VAR_10;
 VAR_12->ops = VAR_9;
 FUNC_12(&VAR_12->lock);
 FUNC_0(&VAR_12->ls_list);
 FUNC_0(&VAR_12->ls_busylist);
 FUNC_0(&VAR_12->assoc_list);
 FUNC_6(&VAR_12->ref);
 FUNC_2(&VAR_12->assoc_cnt);
 VAR_12->max_sg_cnt = VAR_9->max_sgl_segments;

 VAR_14 = FUNC_9(VAR_12);
 if (VAR_14) {
  VAR_14 = -VAR_2;
  goto out_free_newrec;
 }

 FUNC_10(VAR_12);

 FUNC_13(&VAR_6, VAR_13);
 FUNC_8(&VAR_12->tgt_list, &VAR_5);
 FUNC_14(&VAR_6, VAR_13);

 *VAR_11 = &VAR_12->fc_target_port;
 return 0;

out_free_newrec:
 FUNC_11(VAR_10);
out_ida_put:
 FUNC_4(&VAR_7, VAR_15);
out_fail_kfree:
 FUNC_5(VAR_12);
out_regtgt_failed:
 *VAR_11 = ((void*)0);
 return VAR_14;
}
