
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct rockchip_spi {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rockchip_spi*,int) ;
 int FUNC_2 (struct spi_master*) ;
 struct rockchip_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (struct rockchip_spi*) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct spi_master *VAR_3 = VAR_2;
 struct rockchip_spi *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_0(VAR_1, &VAR_4->state);

 if (VAR_5 & VAR_0)
  return;


 FUNC_4(VAR_4);

 FUNC_1(VAR_4, 0);
 FUNC_2(VAR_3);
}
