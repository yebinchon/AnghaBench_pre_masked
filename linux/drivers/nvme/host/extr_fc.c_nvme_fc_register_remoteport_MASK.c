
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_remote_port {int port_num; int port_state; int port_id; int port_name; int node_name; int port_role; struct nvme_fc_rport* private; int * localport; } ;
struct nvme_fc_rport {struct nvme_fc_remote_port remoteport; int endp_list; struct nvme_fc_lport* lport; int dev; int lock; int act_ctrl_cnt; int ref; int disc_list; int ls_req_list; int ctrl_list; } ;
struct nvme_fc_port_info {int port_id; int port_name; int node_name; int port_role; } ;
struct nvme_fc_lport {int endp_list; int dev; int localport; int endp_cnt; TYPE_1__* ops; } ;
struct nvme_fc_local_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ remote_priv_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nvme_fc_rport*) ;
 int FUNC_2 (struct nvme_fc_rport*) ;
 int FUNC_3 (struct nvme_fc_rport*,struct nvme_fc_port_info*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct nvme_fc_rport*) ;
 struct nvme_fc_rport* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 struct nvme_fc_lport* FUNC_10 (struct nvme_fc_local_port*) ;
 struct nvme_fc_rport* FUNC_11 (struct nvme_fc_lport*,struct nvme_fc_port_info*) ;
 int VAR_5 ;
 int FUNC_12 (struct nvme_fc_lport*) ;
 int FUNC_13 (struct nvme_fc_lport*) ;
 int FUNC_14 (struct nvme_fc_lport*,struct nvme_fc_rport*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

int
FUNC_18(struct nvme_fc_local_port *VAR_6,
    struct nvme_fc_port_info *VAR_7,
    struct nvme_fc_remote_port **VAR_8)
{
 struct nvme_fc_lport *VAR_9 = FUNC_10(VAR_6);
 struct nvme_fc_rport *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_12(VAR_9)) {
  VAR_12 = -VAR_2;
  goto out_reghost_failed;
 }






 VAR_10 = FUNC_11(VAR_9, VAR_7);


 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto out_lport_put;


 } else if (VAR_10) {
  FUNC_13(VAR_9);
  FUNC_3(VAR_10, VAR_7);
  FUNC_14(VAR_9, VAR_10);
  *VAR_8 = &VAR_10->remoteport;
  return 0;
 }



 VAR_10 = FUNC_7((sizeof(*VAR_10) + VAR_9->ops->remote_priv_sz),
    VAR_4);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto out_lport_put;
 }

 VAR_13 = FUNC_5(&VAR_9->endp_cnt, 0, 0, VAR_4);
 if (VAR_13 < 0) {
  VAR_12 = -VAR_1;
  goto out_kfree_rport;
 }

 FUNC_0(&VAR_10->endp_list);
 FUNC_0(&VAR_10->ctrl_list);
 FUNC_0(&VAR_10->ls_req_list);
 FUNC_0(&VAR_10->disc_list);
 FUNC_8(&VAR_10->ref);
 FUNC_4(&VAR_10->act_ctrl_cnt, 0);
 FUNC_15(&VAR_10->lock);
 VAR_10->remoteport.localport = &VAR_9->localport;
 VAR_10->dev = VAR_9->dev;
 VAR_10->lport = VAR_9;
 VAR_10->remoteport.private = &VAR_10[1];
 VAR_10->remoteport.port_role = VAR_7->port_role;
 VAR_10->remoteport.node_name = VAR_7->node_name;
 VAR_10->remoteport.port_name = VAR_7->port_name;
 VAR_10->remoteport.port_id = VAR_7->port_id;
 VAR_10->remoteport.port_state = VAR_3;
 VAR_10->remoteport.port_num = VAR_13;
 FUNC_3(VAR_10, VAR_7);

 FUNC_16(&VAR_5, VAR_11);
 FUNC_9(&VAR_10->endp_list, &VAR_9->endp_list);
 FUNC_17(&VAR_5, VAR_11);

 FUNC_14(VAR_9, VAR_10);

 *VAR_8 = &VAR_10->remoteport;
 return 0;

out_kfree_rport:
 FUNC_6(VAR_10);
out_lport_put:
 FUNC_13(VAR_9);
out_reghost_failed:
 *VAR_8 = ((void*)0);
 return VAR_12;
}
