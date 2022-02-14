
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct omap1_spi100k {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct omap1_spi100k* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_master *VAR_2)
{
 unsigned int VAR_3;
 struct omap1_spi100k *VAR_4 = FUNC_1(VAR_2);


 VAR_3 = FUNC_0(VAR_4->base + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_4->base + VAR_0);
}
