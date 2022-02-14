
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int powered_on; int gamma; int spi; int vmirror; int hmirror; int mode; int nreset_gpio; int vcc_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct panel_drv_data *VAR_2)
{
 int VAR_3;

 if (VAR_2->powered_on)
  return 0;

 VAR_3 = FUNC_4(VAR_2->vcc_reg);
 if (VAR_3 != 0)
  return VAR_3;


 FUNC_3(160);

 if (FUNC_1(VAR_2->nreset_gpio))
  FUNC_2(VAR_2->nreset_gpio, 1);

 FUNC_5(VAR_2->spi, 2,
   FUNC_0(VAR_2->mode) | VAR_0);
 FUNC_5(VAR_2->spi, 3, VAR_1);
 FUNC_5(VAR_2->spi, 0x20, 0xf0);
 FUNC_5(VAR_2->spi, 0x21, 0xf0);
 FUNC_7(VAR_2->spi, VAR_2->hmirror,
   VAR_2->vmirror);
 FUNC_6(VAR_2->spi, VAR_2->gamma);

 VAR_2->powered_on = 1;
 return 0;
}
