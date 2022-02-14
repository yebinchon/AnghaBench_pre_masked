
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_port_template {int dma_boundary; scalar_t__ local_priv_sz; int max_dif_sgl_segments; int max_sgl_segments; int max_hw_queues; int fcp_abort; int ls_abort; int fcp_io; int ls_req; int remoteport_delete; int localport_delete; } ;
struct nvme_fc_port_info {int port_id; int port_role; int port_name; int node_name; } ;
struct nvme_fc_local_port {int port_num; int port_state; int port_id; int port_role; int port_name; int node_name; struct nvme_fc_lport* private; } ;
struct nvme_fc_lport {struct nvme_fc_local_port localport; int port_list; int endp_cnt; struct device* dev; struct nvme_fc_port_template* ops; int act_rport_cnt; int ref; int endp_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nvme_fc_lport*) ;
 int FUNC_2 (struct nvme_fc_lport*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct nvme_fc_lport*) ;
 struct nvme_fc_lport* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 struct nvme_fc_lport* FUNC_13 (struct nvme_fc_port_info*,struct nvme_fc_port_template*,struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

int
FUNC_16(struct nvme_fc_port_info *VAR_9,
   struct nvme_fc_port_template *VAR_10,
   struct device *VAR_11,
   struct nvme_fc_local_port **VAR_12)
{
 struct nvme_fc_lport *VAR_13;
 unsigned long VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_10->localport_delete || !VAR_10->remoteport_delete ||
     !VAR_10->ls_req || !VAR_10->fcp_io ||
     !VAR_10->ls_abort || !VAR_10->fcp_abort ||
     !VAR_10->max_hw_queues || !VAR_10->max_sgl_segments ||
     !VAR_10->max_dif_sgl_segments || !VAR_10->dma_boundary) {
  VAR_15 = -VAR_0;
  goto out_reghost_failed;
 }
 VAR_13 = FUNC_13(VAR_9, VAR_10, VAR_11);


 if (FUNC_1(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out_reghost_failed;


 } else if (VAR_13) {
  *VAR_12 = &VAR_13->localport;
  return 0;
 }



 VAR_13 = FUNC_10((sizeof(*VAR_13) + VAR_10->local_priv_sz),
    VAR_5);
 if (!VAR_13) {
  VAR_15 = -VAR_2;
  goto out_reghost_failed;
 }

 VAR_16 = FUNC_7(&VAR_6, 0, 0, VAR_5);
 if (VAR_16 < 0) {
  VAR_15 = -VAR_3;
  goto out_fail_kfree;
 }

 if (!FUNC_5(VAR_11) && VAR_11) {
  VAR_15 = -VAR_1;
  goto out_ida_put;
 }

 FUNC_0(&VAR_13->port_list);
 FUNC_0(&VAR_13->endp_list);
 FUNC_11(&VAR_13->ref);
 FUNC_3(&VAR_13->act_rport_cnt, 0);
 VAR_13->ops = VAR_10;
 VAR_13->dev = VAR_11;
 FUNC_6(&VAR_13->endp_cnt);
 VAR_13->localport.private = &VAR_13[1];
 VAR_13->localport.node_name = VAR_9->node_name;
 VAR_13->localport.port_name = VAR_9->port_name;
 VAR_13->localport.port_role = VAR_9->port_role;
 VAR_13->localport.port_id = VAR_9->port_id;
 VAR_13->localport.port_state = VAR_4;
 VAR_13->localport.port_num = VAR_16;

 FUNC_14(&VAR_7, VAR_14);
 FUNC_12(&VAR_13->port_list, &VAR_8);
 FUNC_15(&VAR_7, VAR_14);

 if (VAR_11)
  FUNC_4(VAR_11, VAR_10->dma_boundary);

 *VAR_12 = &VAR_13->localport;
 return 0;

out_ida_put:
 FUNC_8(&VAR_6, VAR_16);
out_fail_kfree:
 FUNC_9(VAR_13);
out_reghost_failed:
 *VAR_12 = ((void*)0);

 return VAR_15;
}
