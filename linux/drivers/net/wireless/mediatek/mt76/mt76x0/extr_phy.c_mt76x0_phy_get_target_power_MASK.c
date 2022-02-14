
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * ht; int * vht; int * ofdm; int * cck; } ;
struct TYPE_4__ {TYPE_1__ rate_power; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct mt76x02_dev *VAR_3, u8 VAR_4,
       u8 *VAR_5, s8 *VAR_6,
       s8 *VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_1) & VAR_2;
 switch (VAR_4) {
 case 0:

  VAR_8 = (VAR_5[0] & 0x60) >> 5;
  if (VAR_8 > 3)
   return -VAR_0;

  *VAR_6 = VAR_9 + VAR_3->mt76.rate_power.cck[VAR_8];
  *VAR_7 = FUNC_1(VAR_3, 0, VAR_8);
  break;
 case 1: {
  u8 VAR_10;


  VAR_8 = (VAR_5[0] & 0xf0) >> 4;
  switch (VAR_8) {
  case 0xb:
   VAR_10 = 0;
   break;
  case 0xf:
   VAR_10 = 1;
   break;
  case 0xa:
   VAR_10 = 2;
   break;
  case 0xe:
   VAR_10 = 3;
   break;
  case 0x9:
   VAR_10 = 4;
   break;
  case 0xd:
   VAR_10 = 5;
   break;
  case 0x8:
   VAR_10 = 6;
   break;
  case 0xc:
   VAR_10 = 7;
   break;
  default:
   return -VAR_0;
  }

  *VAR_6 = VAR_9 + VAR_3->mt76.rate_power.ofdm[VAR_10];
  *VAR_7 = FUNC_1(VAR_3, 0, VAR_10 + 4);
  break;
 }
 case 4:

  VAR_8 = VAR_5[1] & 0xf;
  if (VAR_8 > 9)
   return -VAR_0;

  *VAR_6 = VAR_9 + VAR_3->mt76.rate_power.vht[VAR_8];
  *VAR_7 = FUNC_1(VAR_3, 1, VAR_8);
  break;
 default:

  VAR_8 = VAR_5[1] & 0x7f;
  if (VAR_8 > 9)
   return -VAR_0;

  *VAR_6 = VAR_9 + VAR_3->mt76.rate_power.ht[VAR_8];
  *VAR_7 = FUNC_1(VAR_3, 1, VAR_8);
  break;
 }

 return 0;
}
