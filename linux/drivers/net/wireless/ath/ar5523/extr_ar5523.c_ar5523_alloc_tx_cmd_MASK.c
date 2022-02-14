
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ar5523_tx_cmd {TYPE_1__* urb_tx; int buf_tx; int done; struct ar5523* ar; } ;
struct ar5523 {int dev; struct ar5523_tx_cmd tx_cmd; } ;
struct TYPE_3__ {int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_3)
{
 struct ar5523_tx_cmd *VAR_4 = &VAR_3->tx_cmd;

 VAR_4->ar = VAR_3;
 FUNC_0(&VAR_4->done);

 VAR_4->urb_tx = FUNC_2(0, VAR_2);
 if (!VAR_4->urb_tx)
  return -VAR_1;
 VAR_4->buf_tx = FUNC_1(VAR_3->dev, VAR_0,
      VAR_2,
      &VAR_4->urb_tx->transfer_dma);
 if (!VAR_4->buf_tx) {
  FUNC_3(VAR_4->urb_tx);
  return -VAR_1;
 }
 return 0;
}
