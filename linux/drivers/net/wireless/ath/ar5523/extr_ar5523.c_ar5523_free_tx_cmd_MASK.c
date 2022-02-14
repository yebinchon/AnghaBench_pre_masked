
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar5523_tx_cmd {TYPE_1__* urb_tx; int buf_tx; } ;
struct ar5523 {int dev; struct ar5523_tx_cmd tx_cmd; } ;
struct TYPE_2__ {int transfer_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ar5523 *VAR_1)
{
 struct ar5523_tx_cmd *VAR_2 = &VAR_1->tx_cmd;

 FUNC_0(VAR_1->dev, VAR_0, VAR_2->buf_tx,
     VAR_2->urb_tx->transfer_dma);
 FUNC_1(VAR_2->urb_tx);
}
