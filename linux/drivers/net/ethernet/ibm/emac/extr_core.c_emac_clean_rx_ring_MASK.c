
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emac_instance {int * rx_sg_skb; TYPE_1__* rx_desc; int ** rx_skb; } ;
struct TYPE_2__ {scalar_t__ data_ptr; scalar_t__ ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct emac_instance *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  if (VAR_1->rx_skb[VAR_2]) {
   VAR_1->rx_desc[VAR_2].ctrl = 0;
   FUNC_0(VAR_1->rx_skb[VAR_2]);
   VAR_1->rx_skb[VAR_2] = ((void*)0);
   VAR_1->rx_desc[VAR_2].data_ptr = 0;
  }

 if (VAR_1->rx_sg_skb) {
  FUNC_0(VAR_1->rx_sg_skb);
  VAR_1->rx_sg_skb = ((void*)0);
 }
}
