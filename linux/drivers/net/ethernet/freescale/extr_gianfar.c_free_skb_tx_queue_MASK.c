
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txbd8 {int length; int bufPtr; scalar_t__ lstatus; } ;
struct gfar_private {int dev; } ;
struct gfar_priv_tx_q {int tx_ring_size; int ** tx_skbuff; struct txbd8* tx_bd_base; int dev; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int **) ;
 struct gfar_private* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct gfar_priv_tx_q *VAR_1)
{
 struct txbd8 *VAR_2;
 struct gfar_private *VAR_3 = FUNC_6(VAR_1->dev);
 int VAR_4, VAR_5;

 VAR_2 = VAR_1->tx_bd_base;

 for (VAR_4 = 0; VAR_4 < VAR_1->tx_ring_size; VAR_4++) {
  if (!VAR_1->tx_skbuff[VAR_4])
   continue;

  FUNC_4(VAR_3->dev, FUNC_1(VAR_2->bufPtr),
     FUNC_0(VAR_2->length), VAR_0);
  VAR_2->lstatus = 0;
  for (VAR_5 = 0; VAR_5 < FUNC_7(VAR_1->tx_skbuff[VAR_4])->nr_frags;
       VAR_5++) {
   VAR_2++;
   FUNC_3(VAR_3->dev, FUNC_1(VAR_2->bufPtr),
           FUNC_0(VAR_2->length),
           VAR_0);
  }
  VAR_2++;
  FUNC_2(VAR_1->tx_skbuff[VAR_4]);
  VAR_1->tx_skbuff[VAR_4] = ((void*)0);
 }
 FUNC_5(VAR_1->tx_skbuff);
 VAR_1->tx_skbuff = ((void*)0);
}
