
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct rsi_hw {TYPE_1__* priv; scalar_t__ rsi_dev; } ;
struct rsi_91x_sdiodev {int write_fail; int rx_thread; } ;
struct TYPE_4__ {int (* detach ) (int *) ;} ;
struct TYPE_3__ {int coex_mode; int * bt_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rsi_hw*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rsi_hw*) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct rsi_hw*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 struct rsi_hw* FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*) ;
 int FUNC_12 (struct sdio_func*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct sdio_func *VAR_3)
{
 struct rsi_hw *VAR_4 = FUNC_10(VAR_3);
 struct rsi_91x_sdiodev *VAR_5;

 if (!VAR_4)
  return;

 VAR_5 = (struct rsi_91x_sdiodev *)VAR_4->rsi_dev;

 FUNC_4(&VAR_5->rx_thread);
 FUNC_8(VAR_3);
 FUNC_12(VAR_3);
 FUNC_11(VAR_3);
 FUNC_1(10);

 FUNC_5(VAR_4);
 FUNC_1(10);

 if (FUNC_0(VAR_0) && VAR_4->priv->coex_mode > 1 &&
     VAR_4->priv->bt_adapter) {
  VAR_2.detach(VAR_4->priv->bt_adapter);
  VAR_4->priv->bt_adapter = ((void*)0);
 }


 FUNC_7(VAR_4);


 FUNC_8(VAR_3);
 FUNC_6(VAR_3);
 FUNC_9(VAR_3);
 FUNC_11(VAR_3);
 VAR_5->write_fail = 2;
 FUNC_2(VAR_4);
 FUNC_3(VAR_1, "##### RSI SDIO device disconnected #####\n");

}
