
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int chip_select; int controller; } ;
struct dw_spi {scalar_t__ cs_override; } ;
struct chip_data {int (* cs_control ) (int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dw_spi*,int ,int ) ;
 struct dw_spi* FUNC_2 (int ) ;
 struct chip_data* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct spi_device *VAR_1, bool VAR_2)
{
 struct dw_spi *VAR_3 = FUNC_2(VAR_1->controller);
 struct chip_data *VAR_4 = FUNC_3(VAR_1);

 if (VAR_4 && VAR_4->cs_control)
  VAR_4->cs_control(VAR_2);

 if (VAR_2)
  FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_1->chip_select));
 else if (VAR_3->cs_override)
  FUNC_1(VAR_3, VAR_0, 0);
}
