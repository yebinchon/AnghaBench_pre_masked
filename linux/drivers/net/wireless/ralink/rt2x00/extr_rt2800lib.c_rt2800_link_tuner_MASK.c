
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {int curr_band; TYPE_1__ chip; } ;
struct link_qual {int rssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,struct link_qual*,int) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ,int ) ;

void FUNC_3(struct rt2x00_dev *VAR_3, struct link_qual *VAR_4,
         const u32 VAR_5)
{
 u8 VAR_6;

 if (FUNC_2(VAR_3, VAR_2, VAR_1))
  return;






 VAR_6 = FUNC_0(VAR_3);

 switch (VAR_3->chip.rt) {
 case 131:
 case 130:
  if (VAR_4->rssi > -65) {
   if (VAR_3->curr_band == VAR_0)
    VAR_6 += 0x20;
   else
    VAR_6 += 0x10;
  }
  break;

 case 129:
  if (VAR_4->rssi > -65)
   VAR_6 += 0x10;
  break;

 case 128:
  if (VAR_4->rssi > -65)
   VAR_6 += 0x20;
  break;

 default:
  if (VAR_4->rssi > -80)
   VAR_6 += 0x10;
  break;
 }

 FUNC_1(VAR_3, VAR_4, VAR_6);
}
