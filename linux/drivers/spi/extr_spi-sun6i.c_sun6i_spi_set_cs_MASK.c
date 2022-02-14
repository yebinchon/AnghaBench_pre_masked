
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_spi {int dummy; } ;
struct spi_device {int chip_select; int master; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sun6i_spi* FUNC_1 (int ) ;
 int FUNC_2 (struct sun6i_spi*,int ) ;
 int FUNC_3 (struct sun6i_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, bool VAR_4)
{
 struct sun6i_spi *VAR_5 = FUNC_1(VAR_3->master);
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 VAR_6 &= ~VAR_1;
 VAR_6 |= FUNC_0(VAR_3->chip_select);

 if (VAR_4)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_3(VAR_5, VAR_2, VAR_6);
}
