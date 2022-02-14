
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ca8210_test {int up_fifo; int ca8210_dfs_spi_int; } ;
struct ca8210_priv {TYPE_1__* spi; struct ca8210_test test; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ca8210_priv *VAR_0)
{
 struct ca8210_test *VAR_1 = &VAR_0->test;

 FUNC_0(VAR_1->ca8210_dfs_spi_int);
 FUNC_2(&VAR_1->up_fifo);
 FUNC_1(&VAR_0->spi->dev, "Test interface removed\n");
}
