
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {int * desc_tab; int desc_tab_phys; int ** tx_buff_tab; TYPE_1__* netdev; int ** rx_buff_tab; } ;
struct desc {scalar_t__ data; } ;
typedef int buffer_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (struct port*,struct desc*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 struct desc* FUNC_5 (struct port*,int) ;
 struct desc* FUNC_6 (struct port*,int) ;

__attribute__((used)) static void FUNC_7(struct port *VAR_7)
{
 int VAR_8;

 if (VAR_7->desc_tab) {
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   struct desc *VAR_9 = FUNC_5(VAR_7, VAR_8);
   buffer_t *VAR_10 = VAR_7->rx_buff_tab[VAR_8];
   if (VAR_10) {
    FUNC_2(&VAR_7->netdev->dev,
       VAR_9->data - VAR_1,
       VAR_2, VAR_0);
    FUNC_4(VAR_10);
   }
  }
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   struct desc *VAR_11 = FUNC_6(VAR_7, VAR_8);
   buffer_t *VAR_12 = VAR_7->tx_buff_tab[VAR_8];
   if (VAR_12) {
    FUNC_3(VAR_7, VAR_11);
    FUNC_4(VAR_12);
   }
  }
  FUNC_1(VAR_5, VAR_7->desc_tab, VAR_7->desc_tab_phys);
  VAR_7->desc_tab = ((void*)0);
 }

 if (!VAR_6 && VAR_5) {
  FUNC_0(VAR_5);
  VAR_5 = ((void*)0);
 }
}
