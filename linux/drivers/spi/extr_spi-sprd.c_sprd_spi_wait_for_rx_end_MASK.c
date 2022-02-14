
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_spi {scalar_t__ base; int dev; } ;
struct spi_transfer {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int ,int) ;
 int FUNC_2 (struct sprd_spi*,struct spi_transfer*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sprd_spi *VAR_4, struct spi_transfer *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 VAR_8 = FUNC_1(VAR_4->base + VAR_1, VAR_6,
      VAR_6 & VAR_3, 0, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "SPI error, spi rx timeout!\n");
  return VAR_8;
 }

 FUNC_3(VAR_2, VAR_4->base + VAR_0);

 return 0;
}
