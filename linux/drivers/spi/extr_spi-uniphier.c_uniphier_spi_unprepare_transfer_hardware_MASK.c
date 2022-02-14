
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_spi_priv {scalar_t__ base; } ;
struct spi_master {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct uniphier_spi_priv* FUNC_0 (struct spi_master*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_1)
{
 struct uniphier_spi_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(0, VAR_2->base + VAR_0);

 return 0;
}
