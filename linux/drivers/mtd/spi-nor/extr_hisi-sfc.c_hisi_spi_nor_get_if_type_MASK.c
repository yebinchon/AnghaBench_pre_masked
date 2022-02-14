
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum spi_nor_protocol { ____Placeholder_spi_nor_protocol } spi_nor_protocol ;
typedef enum hifmc_iftype { ____Placeholder_hifmc_iftype } hifmc_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






__attribute__((used)) static int FUNC_0(enum spi_nor_protocol VAR_5)
{
 enum hifmc_iftype VAR_6;

 switch (VAR_5) {
 case 131:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_3;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 case 132:
 default:
  VAR_6 = VAR_4;
  break;
 }

 return VAR_6;
}
