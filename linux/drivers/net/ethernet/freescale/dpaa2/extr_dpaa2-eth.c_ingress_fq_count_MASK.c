
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpaa2_eth_priv {int num_fqs; int net_dev; struct dpaa2_eth_fq* fq; } ;
struct dpaa2_eth_fq {int fqid; } ;


 int FUNC_0 (int *,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static u32 FUNC_2(struct dpaa2_eth_priv *VAR_0)
{
 struct dpaa2_eth_fq *VAR_1;
 u32 VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_fqs; VAR_5++) {
  VAR_1 = &VAR_0->fq[VAR_5];
  VAR_6 = FUNC_0(((void*)0), VAR_1->fqid, &VAR_2, &VAR_3);
  if (VAR_6) {
   FUNC_1(VAR_0->net_dev, "query_fq_count failed");
   break;
  }
  VAR_4 += VAR_2;
 }

 return VAR_4;
}
