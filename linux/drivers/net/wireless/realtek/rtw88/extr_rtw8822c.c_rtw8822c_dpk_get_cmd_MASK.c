
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ dpk_bw; } ;
struct TYPE_4__ {TYPE_1__ dpk_info; } ;
struct rtw_dev {TYPE_2__ dm_info; } ;


 scalar_t__ VAR_0 ;





__attribute__((used)) static u16 FUNC_0(struct rtw_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u16 VAR_4;
 u8 VAR_5 = VAR_1->dm_info.dpk_info.dpk_bw == VAR_0 ? 2 : 0;

 switch (VAR_2) {
 case 128:
  VAR_4 = 0x14 + VAR_3;
  break;
 case 130:
  VAR_4 = 0x16 + VAR_3 + VAR_5;
  break;
 case 129:
  VAR_4 = 0x1a + VAR_3;
  break;
 case 131:
  VAR_4 = 0x1c + VAR_3 + VAR_5;
  break;
 default:
  return 0;
 }

 return (VAR_4 << 8) | 0x48;
}
