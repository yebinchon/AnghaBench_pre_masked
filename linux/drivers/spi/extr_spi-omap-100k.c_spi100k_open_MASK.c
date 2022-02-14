
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct omap1_spi100k {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct omap1_spi100k* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_master *VAR_7)
{

 struct omap1_spi100k *VAR_8 = FUNC_1(VAR_7);

 FUNC_2(VAR_1 |
        VAR_2 |
        FUNC_0(0), VAR_8->base + VAR_0);


 FUNC_2(VAR_4 |
        VAR_6 |
        VAR_5, VAR_8->base + VAR_3);
}
