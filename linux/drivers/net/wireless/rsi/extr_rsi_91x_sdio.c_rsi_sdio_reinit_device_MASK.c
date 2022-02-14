
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct rsi_hw {TYPE_1__* priv; struct rsi_91x_sdiodev* rsi_dev; } ;
struct rsi_91x_sdiodev {struct sdio_func* pfunction; } ;
struct TYPE_2__ {int * tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsi_hw*) ;
 int VAR_1 ;
 int FUNC_1 (struct rsi_hw*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct rsi_hw*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*,int ) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct rsi_hw *VAR_2)
{
 struct rsi_91x_sdiodev *VAR_3 = VAR_2->rsi_dev;
 struct sdio_func *VAR_4 = VAR_3->pfunction;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_9(&VAR_2->priv->tx_queue[VAR_5]);


 FUNC_4(VAR_4);

 FUNC_8(VAR_4);
 FUNC_2(VAR_4);

 FUNC_6(VAR_4);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_5(VAR_4, VAR_1);
 FUNC_0(VAR_2);

 FUNC_7(VAR_4);

 return 0;
}
