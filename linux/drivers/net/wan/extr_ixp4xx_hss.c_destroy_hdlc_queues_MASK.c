
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {int * desc_tab; int desc_tab_phys; int ** tx_buff_tab; TYPE_1__* netdev; int ** rx_buff_tab; } ;
struct desc {int data; } ;
typedef int buffer_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct port*,struct desc*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 struct desc* FUNC_5 (struct port*,int) ;
 struct desc* FUNC_6 (struct port*,int) ;

__attribute__((used)) static void FUNC_7(struct port *VAR_6)
{
 int VAR_7;

 if (VAR_6->desc_tab) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   struct desc *VAR_8 = FUNC_5(VAR_6, VAR_7);
   buffer_t *VAR_9 = VAR_6->rx_buff_tab[VAR_7];
   if (VAR_9) {
    FUNC_2(&VAR_6->netdev->dev,
       VAR_8->data, VAR_2,
       VAR_0);
    FUNC_4(VAR_9);
   }
  }
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   struct desc *VAR_10 = FUNC_6(VAR_6, VAR_7);
   buffer_t *VAR_11 = VAR_6->tx_buff_tab[VAR_7];
   if (VAR_11) {
    FUNC_3(VAR_6, VAR_10);
    FUNC_4(VAR_11);
   }
  }
  FUNC_1(VAR_4, VAR_6->desc_tab, VAR_6->desc_tab_phys);
  VAR_6->desc_tab = ((void*)0);
 }

 if (!VAR_5 && VAR_4) {
  FUNC_0(VAR_4);
  VAR_4 = ((void*)0);
 }
}
