
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int master; } ;
struct mtk_spi_slave {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct mtk_spi_slave*) ;
 int FUNC_1 (struct mtk_spi_slave*) ;
 struct mtk_spi_slave* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_10)
{
 struct mtk_spi_slave *VAR_11 = FUNC_2(VAR_10->master);
 u32 VAR_12;

 VAR_12 = VAR_4 | VAR_2 |
    VAR_6 | VAR_0;
 FUNC_3(VAR_12, VAR_11->base + VAR_8);

 VAR_12 = VAR_5 | VAR_3 |
    VAR_7 | VAR_1;
 FUNC_3(VAR_12, VAR_11->base + VAR_9);

 FUNC_0(VAR_11);
 FUNC_1(VAR_11);

 return 0;
}
