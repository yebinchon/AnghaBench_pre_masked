
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {scalar_t__ powered_on; int vcc_reg; int spi; int nreset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct panel_drv_data *VAR_2)
{
 if (!VAR_2->powered_on)
  return;

 FUNC_4(VAR_2->spi, 3,
   VAR_1 | VAR_0);

 if (FUNC_0(VAR_2->nreset_gpio))
  FUNC_1(VAR_2->nreset_gpio, 0);


 FUNC_2(50);

 FUNC_4(VAR_2->spi, 3, VAR_1);

 FUNC_3(VAR_2->vcc_reg);

 VAR_2->powered_on = 0;
}
