
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dpni_queue_id {int fqid; } ;
struct TYPE_6__ {int priority; int type; int id; } ;
struct dpni_queue {scalar_t__ user_context; TYPE_2__ destination; } ;
struct dpaa2_eth_priv {TYPE_4__* net_dev; int mc_token; int mc_io; } ;
struct dpaa2_eth_fq {TYPE_3__* channel; int flowid; int fqid; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct TYPE_7__ {int xdp_rxq; int dpcon_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,struct dpni_queue*,struct dpni_queue_id*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int,struct dpni_queue*) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct dpaa2_eth_priv *VAR_5,
    struct dpaa2_eth_fq *VAR_6)
{
 struct device *VAR_7 = VAR_5->net_dev->dev.parent;
 struct dpni_queue VAR_8;
 struct dpni_queue_id VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5->mc_io, 0, VAR_5->mc_token,
        VAR_3, 0, VAR_6->flowid, &VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_7, "dpni_get_queue(RX) failed\n");
  return VAR_10;
 }

 VAR_6->fqid = VAR_9.fqid;

 VAR_8.destination.id = VAR_6->channel->dpcon_id;
 VAR_8.destination.type = VAR_0;
 VAR_8.destination.priority = 1;
 VAR_8.user_context = (u64)(uintptr_t)VAR_6;
 VAR_10 = FUNC_2(VAR_5->mc_io, 0, VAR_5->mc_token,
        VAR_3, 0, VAR_6->flowid,
        VAR_2 | VAR_1,
        &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_7, "dpni_set_queue(RX) failed\n");
  return VAR_10;
 }


 VAR_10 = FUNC_3(&VAR_6->channel->xdp_rxq, VAR_5->net_dev,
          VAR_6->flowid);
 if (VAR_10) {
  FUNC_0(VAR_7, "xdp_rxq_info_reg failed\n");
  return VAR_10;
 }

 VAR_10 = FUNC_4(&VAR_6->channel->xdp_rxq,
      VAR_4, ((void*)0));
 if (VAR_10) {
  FUNC_0(VAR_7, "xdp_rxq_info_reg_mem_model failed\n");
  return VAR_10;
 }

 return 0;
}
