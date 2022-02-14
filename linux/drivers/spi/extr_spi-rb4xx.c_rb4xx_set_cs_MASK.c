
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct rb4xx_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rb4xx_spi*,int ,int) ;
 struct rb4xx_spi* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_3, bool VAR_4)
{
 struct rb4xx_spi *VAR_5 = FUNC_1(VAR_3->master);






 if (VAR_4)
  FUNC_0(VAR_5, VAR_2,
       VAR_0 | VAR_1);
}
