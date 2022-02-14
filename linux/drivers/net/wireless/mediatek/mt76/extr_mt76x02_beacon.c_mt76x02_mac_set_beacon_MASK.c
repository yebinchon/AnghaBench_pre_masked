
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mt76x02_dev {int beacon_data_mask; struct sk_buff** beacons; } ;


 int FUNC_0 (struct sk_buff**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mt76x02_dev*,int,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ,int) ;

int FUNC_5(struct mt76x02_dev *VAR_2, u8 VAR_3,
      struct sk_buff *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->beacons); VAR_7++) {
  if (VAR_3 == VAR_7) {
   VAR_5 = !!VAR_2->beacons[VAR_7] ^ !!VAR_4;

   if (VAR_2->beacons[VAR_7])
    FUNC_3(VAR_2->beacons[VAR_7]);

   VAR_2->beacons[VAR_7] = VAR_4;
   FUNC_2(VAR_2, VAR_6, VAR_4);
  } else if (VAR_5 && VAR_2->beacons[VAR_7]) {
   FUNC_2(VAR_2, VAR_6,
       VAR_2->beacons[VAR_7]);
  }

  VAR_6 += !!VAR_2->beacons[VAR_7];
 }

 for (VAR_7 = VAR_6; VAR_7 < FUNC_0(VAR_2->beacons); VAR_7++) {
  if (!(VAR_2->beacon_data_mask & FUNC_1(VAR_7)))
   break;

  FUNC_2(VAR_2, VAR_7, ((void*)0));
 }

 FUNC_4(VAR_2, VAR_0, VAR_1,
         VAR_6 - 1);
 return 0;
}
