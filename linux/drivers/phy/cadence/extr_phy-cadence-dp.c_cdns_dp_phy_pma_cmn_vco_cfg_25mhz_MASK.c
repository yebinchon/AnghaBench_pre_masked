
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {int max_bit_rate; scalar_t__ sd_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cdns_dp_phy *VAR_6)
{

 switch (VAR_6->max_bit_rate) {

 case 2700:
 case 5400:
  FUNC_0(0x01B0, VAR_6->sd_base + VAR_4);
  FUNC_0(0x0000, VAR_6->sd_base + VAR_2);
  FUNC_0(0x0002, VAR_6->sd_base + VAR_1);
  FUNC_0(0x0120, VAR_6->sd_base + VAR_3);
  break;

 case 2430:
 case 3240:
  FUNC_0(0x0184, VAR_6->sd_base + VAR_4);
  FUNC_0(0xCCCD, VAR_6->sd_base + VAR_2);
  FUNC_0(0x0002, VAR_6->sd_base + VAR_1);
  FUNC_0(0x0104, VAR_6->sd_base + VAR_3);
  break;

 case 2160:
 case 4320:
  FUNC_0(0x0159, VAR_6->sd_base + VAR_4);
  FUNC_0(0x999A, VAR_6->sd_base + VAR_2);
  FUNC_0(0x0002, VAR_6->sd_base + VAR_1);
  FUNC_0(0x00E7, VAR_6->sd_base + VAR_3);
  break;

 case 8100:
  FUNC_0(0x0144, VAR_6->sd_base + VAR_4);
  FUNC_0(0x0000, VAR_6->sd_base + VAR_2);
  FUNC_0(0x0002, VAR_6->sd_base + VAR_1);
  FUNC_0(0x00D8, VAR_6->sd_base + VAR_3);
  break;
 }

 FUNC_0(0x0002, VAR_6->sd_base + VAR_0);
 FUNC_0(0x0318, VAR_6->sd_base + VAR_5);
}
