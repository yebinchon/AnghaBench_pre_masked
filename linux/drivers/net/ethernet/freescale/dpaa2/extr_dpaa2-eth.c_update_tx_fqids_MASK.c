
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpni_queue_id {scalar_t__ fqid; int member_0; } ;
struct dpni_queue {int dummy; } ;
struct dpaa2_eth_priv {int num_fqs; int enqueue; int net_dev; int mc_token; int mc_io; struct dpaa2_eth_fq* fq; } ;
struct dpaa2_eth_fq {scalar_t__ type; scalar_t__* tx_fqid; int flowid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dpaa2_eth_priv*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,struct dpni_queue*,struct dpni_queue_id*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct dpaa2_eth_priv *VAR_6)
{
 struct dpni_queue_id VAR_7 = {0};
 struct dpaa2_eth_fq *VAR_8;
 struct dpni_queue VAR_9;
 int VAR_10, VAR_11, VAR_12;




 if (FUNC_0(VAR_6, VAR_1,
       VAR_2) < 0)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_6->num_fqs; VAR_10++) {
  VAR_8 = &VAR_6->fq[VAR_10];
  if (VAR_8->type != VAR_0)
   continue;
  for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6); VAR_11++) {
   VAR_12 = FUNC_2(VAR_6->mc_io, 0, VAR_6->mc_token,
          VAR_3, VAR_11, VAR_8->flowid,
          &VAR_9, &VAR_7);
   if (VAR_12)
    goto out_err;

   VAR_8->tx_fqid[VAR_11] = VAR_7.fqid;
   if (VAR_8->tx_fqid[VAR_11] == 0)
    goto out_err;
  }
 }

 VAR_6->enqueue = VAR_4;

 return;

out_err:
 FUNC_3(VAR_6->net_dev,
      "Error reading Tx FQID, fallback to QDID-based enqueue\n");
 VAR_6->enqueue = VAR_5;
}
