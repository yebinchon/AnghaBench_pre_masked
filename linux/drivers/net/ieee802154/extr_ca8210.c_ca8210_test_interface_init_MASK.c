
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ca8210_test {int up_fifo; int readq; int ca8210_dfs_spi_int; } ;
struct ca8210_priv {TYPE_2__* spi; struct ca8210_test test; } ;
typedef int node_name ;
struct TYPE_4__ {int chip_select; TYPE_1__* master; } ;
struct TYPE_3__ {int bus_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int *,struct ca8210_priv*,int *) ;
 int FUNC_1 (char*,int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,int,char*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct ca8210_priv *VAR_3)
{
 struct ca8210_test *VAR_4 = &VAR_3->test;
 char VAR_5[32];

 FUNC_4(
  VAR_5,
  sizeof(VAR_5),
  "ca8210@%d_%d",
  VAR_3->spi->master->bus_num,
  VAR_3->spi->chip_select
 );

 VAR_4->ca8210_dfs_spi_int = FUNC_0(
  VAR_5,
  0600,
  ((void*)0),
  VAR_3,
  &VAR_2
 );

 FUNC_1("ca8210", ((void*)0), VAR_5);
 FUNC_2(&VAR_4->readq);
 return FUNC_3(
  &VAR_4->up_fifo,
  VAR_0,
  VAR_1
 );
}
