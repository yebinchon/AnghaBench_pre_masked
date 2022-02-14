
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {int max_bit_rate; unsigned int num_lanes; scalar_t__ sd_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cdns_dp_phy *VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;


 FUNC_0(0x0000, VAR_3->sd_base + VAR_1);

 switch (VAR_3->max_bit_rate) {
 case 1620:
  VAR_4 = 0x0f01;
  VAR_5 = 2;
  break;
 case 2160:
 case 2430:
 case 2700:
  VAR_4 = 0x0701;
   VAR_5 = 1;
  break;
 case 3240:
  VAR_4 = 0x0b00;
  VAR_5 = 2;
  break;
 case 4320:
 case 5400:
  VAR_4 = 0x0301;
  VAR_5 = 0;
  break;
 case 8100:
  VAR_4 = 0x0200;
  VAR_5 = 0;
  break;
 }

 FUNC_0(VAR_4, VAR_3->sd_base + VAR_0);


 for (VAR_6 = 0; VAR_6 < VAR_3->num_lanes; VAR_6++) {
  FUNC_0(VAR_5,
         VAR_3->sd_base + (VAR_2 | (VAR_6<<11)));
 }
}
