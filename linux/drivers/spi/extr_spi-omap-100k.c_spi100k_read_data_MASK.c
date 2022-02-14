
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct omap1_spi100k {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct spi_master*) ;
 struct omap1_spi100k* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct omap1_spi100k *VAR_10 = FUNC_5(VAR_6);


 if (VAR_7 <= 8)
  VAR_7 = 16;

 FUNC_4(VAR_6);
 FUNC_7(FUNC_0(0) |
        FUNC_1(VAR_7) |
        VAR_1,
        VAR_10->base + VAR_0);

 while ((FUNC_2(VAR_10->base + VAR_4) & VAR_5) != VAR_5)
  ;
 FUNC_6(1000);

 VAR_9 = FUNC_2(VAR_10->base + VAR_2);
 VAR_8 = FUNC_2(VAR_10->base + VAR_3);
 FUNC_3(VAR_6);

 return VAR_9;
}
