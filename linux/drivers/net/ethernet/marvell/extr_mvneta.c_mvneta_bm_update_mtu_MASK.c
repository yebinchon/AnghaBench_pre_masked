
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct mvneta_port {int id; int dev; int * bm_priv; struct mvneta_bm_pool* pool_short; struct mvneta_bm_pool* pool_long; } ;
struct hwbm_pool {int size; scalar_t__ frag_size; scalar_t__ buf_num; } ;
struct mvneta_bm_pool {int buf_size; int id; int pkt_size; struct hwbm_pool hwbm_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,...) ;
 int FUNC_4 (struct hwbm_pool*,int) ;
 int FUNC_5 (int *,struct mvneta_bm_pool*,int) ;
 int FUNC_6 (struct mvneta_port*,int,int ) ;
 int FUNC_7 (int *,struct mvneta_bm_pool*,int) ;
 int FUNC_8 (struct mvneta_port*,int ,int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(struct mvneta_port *VAR_2, int VAR_3)
{
 struct mvneta_bm_pool *VAR_4 = VAR_2->pool_long;
 struct hwbm_pool *VAR_5 = &VAR_4->hwbm_pool;
 int VAR_6;


 FUNC_5(VAR_2->bm_priv, VAR_4, 1 << VAR_2->id);
 if (VAR_5->buf_num) {
  FUNC_3(1, "cannot free all buffers in pool %d\n",
       VAR_4->id);
  goto bm_mtu_err;
 }

 VAR_4->pkt_size = FUNC_1(VAR_3);
 VAR_4->buf_size = FUNC_0(VAR_4->pkt_size);
 VAR_5->frag_size = FUNC_2(sizeof(struct skb_shared_info)) +
   FUNC_2(FUNC_0(VAR_4->pkt_size));


 VAR_6 = FUNC_4(VAR_5, VAR_5->size);
 if (VAR_6 != VAR_5->size) {
  FUNC_3(1, "pool %d: %d of %d allocated\n",
       VAR_4->id, VAR_6, VAR_5->size);
  goto bm_mtu_err;
 }
 FUNC_6(VAR_2, VAR_4->buf_size, VAR_4->id);

 return;

bm_mtu_err:
 FUNC_7(VAR_2->bm_priv, VAR_2->pool_long, 1 << VAR_2->id);
 FUNC_7(VAR_2->bm_priv, VAR_2->pool_short, 1 << VAR_2->id);

 VAR_2->bm_priv = ((void*)0);
 FUNC_8(VAR_2, VAR_0, VAR_1);
 FUNC_9(VAR_2->dev, "fail to update MTU, fall back to software BM\n");
}
