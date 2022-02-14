
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_controller {int dummy; } ;
struct bcm2835_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bcm2835_spi*,int ) ;
 int FUNC_1 (struct bcm2835_spi*,int ,int) ;
 struct bcm2835_spi* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static void FUNC_3(struct spi_controller *VAR_9)
{
 struct bcm2835_spi *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_0(VAR_10, VAR_0);


 VAR_11 &= ~(VAR_6 |
  VAR_5 |
  VAR_3 |
  VAR_7);






 VAR_11 |= VAR_4;

 VAR_11 |= VAR_1 | VAR_2;


 FUNC_1(VAR_10, VAR_0, VAR_11);

 FUNC_1(VAR_10, VAR_8, 0);
}
