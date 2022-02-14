
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct mt76x02_dev *VAR_12, bool VAR_13)
{
 bool VAR_14 = 0;
 u32 VAR_15;
 int VAR_16;

 FUNC_2(VAR_12, VAR_6, VAR_7);
 FUNC_2(VAR_12, VAR_8, VAR_9);

 FUNC_5(VAR_12, VAR_5, 0);

 VAR_15 = FUNC_3(VAR_12, VAR_10);
 FUNC_5(VAR_12, VAR_10, VAR_15 & ~VAR_11);


 for (VAR_16 = 0; VAR_16 < 300; VAR_16++) {
  if ((FUNC_3(VAR_12, VAR_2) &
       (VAR_3 | VAR_4)) ||
      FUNC_3(VAR_12, FUNC_1(VAR_1, 12))) {
   FUNC_6(1);
   continue;
  }

  VAR_14 = 1;
  break;
 }

 if (VAR_13 && !VAR_14) {
  FUNC_4(VAR_12, FUNC_1(VAR_0, 4), FUNC_0(1));
  FUNC_2(VAR_12, FUNC_1(VAR_0, 4), FUNC_0(1));

  FUNC_4(VAR_12, FUNC_1(VAR_0, 4), FUNC_0(0));
  FUNC_2(VAR_12, FUNC_1(VAR_0, 4), FUNC_0(0));
 }

 FUNC_5(VAR_12, VAR_10, VAR_15);
}
