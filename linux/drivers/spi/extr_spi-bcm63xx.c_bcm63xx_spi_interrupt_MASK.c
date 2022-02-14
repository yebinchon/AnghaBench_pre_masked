
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_master {int dummy; } ;
struct bcm63xx_spi {int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm63xx_spi*,int ) ;
 int FUNC_1 (struct bcm63xx_spi*,int ,int ) ;
 int FUNC_2 (int *) ;
 struct bcm63xx_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct spi_master *VAR_7 = (struct spi_master *)VAR_6;
 struct bcm63xx_spi *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9;


 VAR_9 = FUNC_0(VAR_8, VAR_4);
 FUNC_1(VAR_8, VAR_1, VAR_4);
 FUNC_1(VAR_8, 0, VAR_3);


 if (VAR_9 & VAR_2)
  FUNC_2(&VAR_8->done);

 return VAR_0;
}
