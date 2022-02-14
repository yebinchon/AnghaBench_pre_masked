
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct nfp_flower_priv {int stats_lock; TYPE_3__* stats; } ;
struct TYPE_5__ {int host_ctx_id; } ;
struct nfp_fl_payload {int linked_flows; TYPE_2__ meta; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {int stats; int cookie; TYPE_1__ common; } ;
struct TYPE_6__ {scalar_t__ bytes; scalar_t__ pkts; int used; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 struct nfp_fl_payload* FUNC_4 (struct nfp_app*,int ,struct net_device*) ;
 int FUNC_5 (struct nfp_app*,struct nfp_fl_payload*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct nfp_app *VAR_1, struct net_device *VAR_2,
       struct flow_cls_offload *VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_1->priv;
 struct netlink_ext_ack *VAR_5 = ((void*)0);
 struct nfp_fl_payload *VAR_6;
 u32 VAR_7;

 VAR_5 = VAR_3->common.extack;
 VAR_6 = FUNC_4(VAR_1, VAR_3->cookie, VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_5, "invalid entry: cannot dump stats for flow that does not exist");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6->meta.host_ctx_id);

 FUNC_6(&VAR_4->stats_lock);

 if (!FUNC_3(&VAR_6->linked_flows))
  FUNC_5(VAR_1, VAR_6);

 FUNC_2(&VAR_3->stats, VAR_4->stats[VAR_7].bytes,
     VAR_4->stats[VAR_7].pkts, VAR_4->stats[VAR_7].used);

 VAR_4->stats[VAR_7].pkts = 0;
 VAR_4->stats[VAR_7].bytes = 0;
 FUNC_7(&VAR_4->stats_lock);

 return 0;
}
