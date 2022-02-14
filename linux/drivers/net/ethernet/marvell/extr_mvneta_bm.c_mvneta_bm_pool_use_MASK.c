
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct skb_shared_info {int dummy; } ;
struct hwbm_pool {int size; int buf_lock; struct mvneta_bm_pool* priv; int construct; scalar_t__ frag_size; } ;
struct mvneta_bm_pool {scalar_t__ type; int port_map; int pkt_size; int buf_size; int id; struct mvneta_bm* priv; struct hwbm_pool hwbm_pool; } ;
struct mvneta_bm {TYPE_1__* pdev; struct mvneta_bm_pool* bm_pools; } ;
typedef enum mvneta_bm_type { ____Placeholder_mvneta_bm_type } mvneta_bm_type ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct hwbm_pool*,int) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct mvneta_bm*,struct mvneta_bm_pool*) ;

struct mvneta_bm_pool *FUNC_7(struct mvneta_bm *VAR_4, u8 VAR_5,
       enum mvneta_bm_type VAR_6, u8 VAR_7,
       int VAR_8)
{
 struct mvneta_bm_pool *VAR_9 = &VAR_4->bm_pools[VAR_5];
 int VAR_10, VAR_11;

 if (VAR_9->type == VAR_1 &&
     VAR_9->port_map != 1 << VAR_7) {
  FUNC_3(&VAR_4->pdev->dev,
   "long pool cannot be shared by the ports\n");
  return ((void*)0);
 }

 if (VAR_9->type == VAR_2 && VAR_9->type != VAR_6) {
  FUNC_3(&VAR_4->pdev->dev,
   "mixing pools' types between the ports is forbidden\n");
  return ((void*)0);
 }

 if (VAR_9->pkt_size == 0 || VAR_6 != VAR_2)
  VAR_9->pkt_size = VAR_8;


 if (VAR_9->type == VAR_0) {
  struct hwbm_pool *VAR_12 = &VAR_9->hwbm_pool;

  VAR_9->priv = VAR_4;
  VAR_9->type = VAR_6;
  VAR_9->buf_size = FUNC_0(VAR_9->pkt_size);
  VAR_12->frag_size =
   FUNC_1(FUNC_0(VAR_9->pkt_size)) +
   FUNC_1(sizeof(struct skb_shared_info));
  VAR_12->construct = VAR_3;
  VAR_12->priv = VAR_9;
  FUNC_5(&VAR_12->buf_lock);


  VAR_11 = FUNC_6(VAR_4, VAR_9);
  if (VAR_11) {
   FUNC_3(&VAR_4->pdev->dev, "fail to create pool %d\n",
    VAR_9->id);
   return ((void*)0);
  }


  VAR_10 = FUNC_4(VAR_12, VAR_12->size);
  if (VAR_10 != VAR_12->size) {
   FUNC_2(1, "pool %d: %d of %d allocated\n",
        VAR_9->id, VAR_10, VAR_12->size);
   return ((void*)0);
  }
 }

 return VAR_9;
}
