
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xgene_enet_raw_desc {int m0; } ;
struct xgene_enet_pdata {int* txc_level; TYPE_1__* ring_ops; } ;
struct xgene_enet_desc_ring {size_t head; size_t slots; size_t index; struct xgene_enet_raw_desc* raw_desc; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* wr_cmd ) (struct xgene_enet_desc_ring*,int) ;} ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*,size_t) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct xgene_enet_raw_desc*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct xgene_enet_pdata* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,size_t) ;
 int FUNC_8 (struct xgene_enet_desc_ring*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct xgene_enet_raw_desc*) ;
 int FUNC_11 (struct xgene_enet_raw_desc*) ;
 int FUNC_12 (struct xgene_enet_desc_ring*,struct xgene_enet_raw_desc*,struct xgene_enet_raw_desc*) ;
 int FUNC_13 (struct xgene_enet_desc_ring*,struct xgene_enet_raw_desc*) ;

__attribute__((used)) static int FUNC_14(struct xgene_enet_desc_ring *VAR_1,
       int VAR_2)
{
 struct net_device *VAR_3 = VAR_1->ndev;
 struct xgene_enet_pdata *VAR_4 = FUNC_6(VAR_3);
 struct xgene_enet_raw_desc *VAR_5, *VAR_6;
 u16 VAR_7 = VAR_1->head;
 u16 VAR_8 = VAR_1->slots - 1;
 int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
 bool VAR_13;

 do {
  VAR_5 = &VAR_1->raw_desc[VAR_7];
  VAR_10 = 0;
  VAR_13 = 0;
  VAR_6 = ((void*)0);
  if (FUNC_9(FUNC_10(VAR_5)))
   break;


  FUNC_2();
  if (FUNC_0(VAR_0, FUNC_4(VAR_5->m0))) {
   VAR_7 = (VAR_7 + 1) & VAR_8;
   VAR_6 = &VAR_1->raw_desc[VAR_7];

   if (FUNC_9(FUNC_10(VAR_6))) {
    VAR_7 = (VAR_7 - 1) & VAR_8;
    break;
   }
   FUNC_2();
   VAR_11++;
   VAR_10++;
  }
  if (FUNC_3(VAR_5)) {
   VAR_9 = FUNC_12(VAR_1, VAR_5, VAR_6);
  } else {
   VAR_9 = FUNC_13(VAR_1, VAR_5);
   VAR_13 = 1;
  }
  FUNC_11(VAR_5);
  if (VAR_6)
   FUNC_11(VAR_6);

  VAR_7 = (VAR_7 + 1) & VAR_8;
  VAR_11++;
  VAR_10++;
  VAR_12++;
  if (VAR_13)
   VAR_4->txc_level[VAR_1->index] += VAR_10;

  if (VAR_9)
   break;
 } while (--VAR_2);

 if (FUNC_5(VAR_11)) {
  VAR_4->ring_ops->wr_cmd(VAR_1, -VAR_11);
  VAR_1->head = VAR_7;

  if (FUNC_1(VAR_3, VAR_1->index))
   FUNC_7(VAR_3, VAR_1->index);
 }

 return VAR_12;
}
