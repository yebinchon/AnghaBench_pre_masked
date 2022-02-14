
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {struct cqspi_flash_pdata* priv; } ;
struct cqspi_st {int bus_mutex; } ;
struct cqspi_flash_pdata {struct cqspi_st* cqspi; } ;
typedef enum spi_nor_ops { ____Placeholder_spi_nor_ops } spi_nor_ops ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_0, enum spi_nor_ops VAR_1)
{
 struct cqspi_flash_pdata *VAR_2 = VAR_0->priv;
 struct cqspi_st *VAR_3 = VAR_2->cqspi;

 FUNC_0(&VAR_3->bus_mutex);

 return 0;
}
