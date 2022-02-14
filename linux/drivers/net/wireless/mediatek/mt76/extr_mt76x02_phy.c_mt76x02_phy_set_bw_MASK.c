
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76x02_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ,int) ;

void FUNC_2(struct mt76x02_dev *VAR_7, int VAR_8, u8 VAR_9)
{
 int VAR_10, VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_10 = 3;
  VAR_11 = 7;
  break;
 case 129:
  VAR_10 = 2;
  VAR_11 = 3;
  break;
 default:
  VAR_10 = 0;
  VAR_11 = 1;
  break;
 }

 FUNC_1(VAR_7, FUNC_0(VAR_1, 1), VAR_4, VAR_10);
 FUNC_1(VAR_7, FUNC_0(VAR_0, 0), VAR_2, VAR_11);
 FUNC_1(VAR_7, FUNC_0(VAR_0, 0), VAR_3, VAR_9);
 FUNC_1(VAR_7, FUNC_0(VAR_6, 0), VAR_5, VAR_9);
}
