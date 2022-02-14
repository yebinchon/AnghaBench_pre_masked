
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int beacon_int; } ;
struct mt76x02_dev {int tbtt_count; TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int) ;

void
FUNC_1(struct mt76x02_dev *VAR_2)
{
 u32 VAR_3 = VAR_2->mt76.beacon_int << 4;

 VAR_2->tbtt_count++;





 if (VAR_2->tbtt_count < 63)
  return;






 if (VAR_2->tbtt_count == 63)
  VAR_3 -= 1;

 FUNC_0(VAR_2, VAR_0,
         VAR_1, VAR_3);

 if (VAR_2->tbtt_count >= 64)
  VAR_2->tbtt_count = 0;
}
