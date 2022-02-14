
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt7603_dev*,int,int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int,int ,int) ;
 int FUNC_4 (struct mt7603_dev*,int ,int) ;

void FUNC_5(struct mt7603_dev *VAR_9, int VAR_10, bool VAR_11)
{
 int VAR_12, VAR_13, VAR_14;

 if (VAR_11) {
  VAR_13 = 3;
  VAR_14 = 8;
 } else {
  VAR_13 = 0;
  VAR_14 = 1;
 }

 FUNC_2(VAR_9, VAR_10, 1);

 FUNC_4(VAR_9, VAR_6, VAR_7 |
   FUNC_0(VAR_8, VAR_10));

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  FUNC_4(VAR_9, VAR_0, VAR_1 |
   FUNC_0(VAR_5, VAR_10) |
   FUNC_0(VAR_4, VAR_12) |
   FUNC_0(VAR_2, VAR_13) |
   FUNC_0(VAR_3, VAR_14));

  FUNC_1(!FUNC_3(VAR_9, VAR_0, VAR_1,
     0, 5000));
 }

 FUNC_4(VAR_9, VAR_6, 0);

 FUNC_2(VAR_9, VAR_10, 0);
}
