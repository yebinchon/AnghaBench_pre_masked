
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mt76x02_dev*,int,int) ;
 int FUNC_6 (struct mt76x02_dev*,int,int ,int ,int) ;
 int FUNC_7 (struct mt76x02_dev*,int) ;
 int FUNC_8 (struct mt76x02_dev*,int,int) ;
 int FUNC_9 (struct mt76x02_dev*,int,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int) ;

int FUNC_12(struct mt76x02_dev *VAR_20)
{
 int VAR_21, VAR_22 = 0, VAR_23;
 bool VAR_24 = 0;
 u32 VAR_25;

 if (FUNC_10(VAR_4, &VAR_20->mt76.state))
  return -VAR_2;

 VAR_25 = FUNC_7(VAR_20, VAR_15);
 FUNC_9(VAR_20, VAR_15, VAR_25 & ~VAR_16);

 FUNC_5(VAR_20, VAR_11, VAR_12);
 FUNC_5(VAR_20, VAR_13, VAR_14);


 for (VAR_21 = 0; VAR_21 < 2000; VAR_21++) {
  VAR_23 = FUNC_7(VAR_20, FUNC_2(VAR_0, VAR_19));
  if (!(VAR_23 & VAR_18) && VAR_21 > 10)
   break;
  FUNC_11(50, 100);
 }


 for (VAR_21 = 0; VAR_21 < 200; VAR_21++) {
  if (!(FUNC_7(VAR_20, 0x0438) & 0xffffffff) &&
      !(FUNC_7(VAR_20, 0x0a30) & 0x000000ff) &&
      !(FUNC_7(VAR_20, 0x0a34) & 0xff00ff00))
   break;
  FUNC_11(10, 20);
 }


 FUNC_5(VAR_20, VAR_8,
     VAR_9 |
     VAR_10);


 for (VAR_21 = 0; VAR_21 < 1000; VAR_21++) {
  if (!(FUNC_7(VAR_20, VAR_5) & VAR_7) &&
      !FUNC_7(VAR_20, FUNC_1(VAR_3, 12))) {
   VAR_24 = 1;
   break;
  }
  FUNC_11(10, 20);
 }

 if (!VAR_24) {
  FUNC_8(VAR_20, FUNC_1(VAR_1, 4), FUNC_0(1));
  FUNC_5(VAR_20, FUNC_1(VAR_1, 4), FUNC_0(1));

  FUNC_8(VAR_20, FUNC_1(VAR_1, 4), FUNC_0(0));
  FUNC_5(VAR_20, FUNC_1(VAR_1, 4), FUNC_0(0));
 }


 for (VAR_21 = 0; VAR_21 < 200; VAR_21++) {
  if (!(FUNC_7(VAR_20, 0x0430) & 0x00ff0000) &&
      !(FUNC_7(VAR_20, 0x0a30) & 0xffffffff) &&
      !(FUNC_7(VAR_20, 0x0a34) & 0xffffffff) &&
      ++VAR_22 > 10)
   break;
  FUNC_4(50);
 }

 if (!FUNC_6(VAR_20, VAR_5, VAR_6, 0, 2000))
  FUNC_3(VAR_20->mt76.dev, "MAC RX failed to stop\n");


 for (VAR_21 = 0; VAR_21 < 2000; VAR_21++) {
  VAR_23 = FUNC_7(VAR_20, FUNC_2(VAR_0, VAR_19));
  if (!(VAR_23 & VAR_17) && VAR_21 > 10)
   break;
  FUNC_11(50, 100);
 }

 FUNC_9(VAR_20, VAR_15, VAR_25);

 return 0;
}
