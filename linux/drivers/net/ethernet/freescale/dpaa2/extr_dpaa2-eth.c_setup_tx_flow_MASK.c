
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dpni_queue_id {int fqid; int qdbin; } ;
struct TYPE_8__ {scalar_t__ priority; int type; int id; } ;
struct dpni_queue {scalar_t__ user_context; TYPE_4__ destination; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; TYPE_2__* net_dev; } ;
struct dpaa2_eth_fq {int flowid; TYPE_3__* channel; int fqid; int tx_qdbin; int * tx_fqid; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int dpcon_id; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,struct dpni_queue*,struct dpni_queue_id*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int,struct dpni_queue*) ;

__attribute__((used)) static int FUNC_4(struct dpaa2_eth_priv *VAR_5,
    struct dpaa2_eth_fq *VAR_6)
{
 struct device *VAR_7 = VAR_5->net_dev->dev.parent;
 struct dpni_queue VAR_8;
 struct dpni_queue_id VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_5); VAR_10++) {
  VAR_11 = FUNC_2(VAR_5->mc_io, 0, VAR_5->mc_token,
         VAR_3, VAR_10, VAR_6->flowid,
         &VAR_8, &VAR_9);
  if (VAR_11) {
   FUNC_0(VAR_7, "dpni_get_queue(TX) failed\n");
   return VAR_11;
  }
  VAR_6->tx_fqid[VAR_10] = VAR_9.fqid;
 }


 VAR_6->tx_qdbin = VAR_9.qdbin;

 VAR_11 = FUNC_2(VAR_5->mc_io, 0, VAR_5->mc_token,
        VAR_4, 0, VAR_6->flowid,
        &VAR_8, &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_7, "dpni_get_queue(TX_CONF) failed\n");
  return VAR_11;
 }

 VAR_6->fqid = VAR_9.fqid;

 VAR_8.destination.id = VAR_6->channel->dpcon_id;
 VAR_8.destination.type = VAR_0;
 VAR_8.destination.priority = 0;
 VAR_8.user_context = (u64)(uintptr_t)VAR_6;
 VAR_11 = FUNC_3(VAR_5->mc_io, 0, VAR_5->mc_token,
        VAR_4, 0, VAR_6->flowid,
        VAR_2 | VAR_1,
        &VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_7, "dpni_set_queue(TX_CONF) failed\n");
  return VAR_11;
 }

 return 0;
}
