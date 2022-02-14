
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int dev; TYPE_1__* priv; } ;
struct mvpp2_bm_pool {scalar_t__ pkt_size; scalar_t__ buf_num; scalar_t__ size; int id; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ percpu_pools; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mvpp2_port*,int ,int ,int ) ;
 void* FUNC_3 (struct mvpp2_port*,struct mvpp2_bm_pool*,int *,int *,int ) ;
 int FUNC_4 (int ,char*,int ,int,int,...) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct mvpp2_port *VAR_2,
        struct mvpp2_bm_pool *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 dma_addr_t VAR_8;
 phys_addr_t VAR_9;
 void *VAR_10;

 if (VAR_2->priv->percpu_pools &&
     VAR_3->pkt_size > VAR_1) {
  FUNC_5(VAR_2->dev,
      "attempted to use jumbo frames with per-cpu pools");
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3->pkt_size);
 VAR_7 = FUNC_1(VAR_6);

 if (VAR_4 < 0 ||
     (VAR_4 + VAR_3->buf_num > VAR_3->size)) {
  FUNC_5(VAR_2->dev,
      "cannot allocate %d buffers for pool %d\n",
      VAR_4, VAR_3->id);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_10 = FUNC_3(VAR_2, VAR_3, &VAR_8,
          &VAR_9, VAR_0);
  if (!VAR_10)
   break;

  FUNC_2(VAR_2, VAR_3->id, VAR_8,
      VAR_9);
 }


 VAR_3->buf_num += VAR_5;

 FUNC_4(VAR_2->dev,
     "pool %d: pkt_size=%4d, buf_size=%4d, total_size=%4d\n",
     VAR_3->id, VAR_3->pkt_size, VAR_6, VAR_7);

 FUNC_4(VAR_2->dev,
     "pool %d: %d of %d buffers added\n",
     VAR_3->id, VAR_5, VAR_4);
 return VAR_5;
}
