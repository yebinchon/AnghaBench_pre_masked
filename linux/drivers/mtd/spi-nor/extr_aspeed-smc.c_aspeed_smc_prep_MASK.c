
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_nor {struct aspeed_smc_chip* priv; } ;
struct aspeed_smc_chip {TYPE_1__* controller; } ;
typedef enum spi_nor_ops { ____Placeholder_spi_nor_ops } spi_nor_ops ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_0, enum spi_nor_ops VAR_1)
{
 struct aspeed_smc_chip *VAR_2 = VAR_0->priv;

 FUNC_0(&VAR_2->controller->mutex);
 return 0;
}
