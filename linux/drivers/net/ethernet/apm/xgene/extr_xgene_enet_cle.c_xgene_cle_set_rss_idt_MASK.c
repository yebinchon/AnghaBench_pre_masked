
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int rxq_cnt; int cle; TYPE_3__** rx_ring; } ;
struct TYPE_6__ {TYPE_2__* page_pool; TYPE_1__* buf_pool; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t*,int,int,int ,int ) ;
 int FUNC_1 (struct xgene_enet_pdata*,size_t,size_t,size_t,size_t*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct xgene_enet_pdata *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10 = 0;
 u16 VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = VAR_9 % VAR_3->rxq_cnt;
  VAR_11 = VAR_3->rx_ring[VAR_8]->buf_pool->id;
  VAR_4 = FUNC_4(VAR_11);
  VAR_5 = FUNC_3(VAR_3->rx_ring[VAR_8]);
  VAR_6 = 0;
  if (VAR_3->rx_ring[VAR_8]->page_pool) {
   VAR_11 = VAR_3->rx_ring[VAR_8]->page_pool->id;
   VAR_6 = FUNC_4(VAR_11);
  }

  VAR_7 = 0;
  FUNC_1(VAR_3, VAR_5, VAR_4, VAR_6, &VAR_7);
  VAR_10 = FUNC_0(&VAR_3->cle, &VAR_7, 1, VAR_9,
     VAR_1, VAR_0);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_2(&VAR_3->cle);
 if (VAR_10)
  return VAR_10;

 return 0;
}
