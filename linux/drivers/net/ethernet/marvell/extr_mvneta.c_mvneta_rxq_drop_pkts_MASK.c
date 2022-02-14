
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct mvneta_rx_queue {int size; void** buf_virt_addr; struct mvneta_rx_desc* descs; } ;
struct mvneta_rx_desc {int buf_phys_addr; } ;
struct mvneta_port {TYPE_2__* dev; TYPE_3__* bm_priv; } ;
struct mvneta_bm_pool {int dummy; } ;
struct TYPE_6__ {struct mvneta_bm_pool* bm_pools; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct mvneta_rx_desc*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,struct mvneta_bm_pool*,int ) ;
 int FUNC_4 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_5 (struct mvneta_port*,struct mvneta_rx_queue*,int,int) ;
 struct mvneta_rx_desc* FUNC_6 (struct mvneta_rx_queue*) ;

__attribute__((used)) static void FUNC_7(struct mvneta_port *VAR_2,
     struct mvneta_rx_queue *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_4);

 if (VAR_2->bm_priv) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
   struct mvneta_rx_desc *VAR_6 =
        FUNC_6(VAR_3);
   u8 VAR_7 = FUNC_0(VAR_6);
   struct mvneta_bm_pool *VAR_8;

   VAR_8 = &VAR_2->bm_priv->bm_pools[VAR_7];

   FUNC_3(VAR_2->bm_priv, VAR_8,
           VAR_6->buf_phys_addr);
  }
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->size; VAR_5++) {
  struct mvneta_rx_desc *VAR_9 = VAR_3->descs + VAR_5;
  void *VAR_10 = VAR_3->buf_virt_addr[VAR_5];
  if (!VAR_10 || !(VAR_9->buf_phys_addr))
   continue;

  FUNC_2(VAR_2->dev->dev.parent, VAR_9->buf_phys_addr,
          VAR_1, VAR_0);
  FUNC_1(VAR_10);
 }
}
