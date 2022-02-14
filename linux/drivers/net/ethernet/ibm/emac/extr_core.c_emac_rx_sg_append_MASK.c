
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rx_dropped_mtu; } ;
struct emac_instance {scalar_t__ rx_skb_size; TYPE_4__* rx_sg_skb; TYPE_3__** rx_skb; TYPE_2__ estats; TYPE_1__* rx_desc; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_7__ {int data_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct emac_instance*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct emac_instance *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_1->rx_sg_skb != ((void*)0))) {
  int VAR_3 = VAR_1->rx_desc[VAR_2].data_len;
  int VAR_4 = VAR_1->rx_sg_skb->len + VAR_3;

  if (FUNC_6(VAR_4 + VAR_0 > VAR_1->rx_skb_size)) {
   ++VAR_1->estats.rx_dropped_mtu;
   FUNC_0(VAR_1->rx_sg_skb);
   VAR_1->rx_sg_skb = ((void*)0);
  } else {
   FUNC_3(FUNC_5(VAR_1->rx_sg_skb),
      VAR_1->rx_skb[VAR_2]->data, VAR_3);
   FUNC_4(VAR_1->rx_sg_skb, VAR_3);
   FUNC_1(VAR_1, VAR_2, VAR_3);
   return 0;
  }
 }
 FUNC_1(VAR_1, VAR_2, 0);
 return -1;
}
