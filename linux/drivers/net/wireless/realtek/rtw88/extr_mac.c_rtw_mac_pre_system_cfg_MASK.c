
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;
 int FUNC_5 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct rtw_dev *VAR_21)
{
 u32 VAR_22;
 u8 VAR_23;

 FUNC_5(VAR_21, VAR_18, 0);

 switch (FUNC_0(VAR_21)) {
 case 129:
  FUNC_4(VAR_21, VAR_14, VAR_0);
  break;
 case 128:
  break;
 default:
  return -VAR_12;
 }


 VAR_22 = FUNC_1(VAR_21, VAR_16);
 VAR_22 |= VAR_6 | VAR_4;
 FUNC_3(VAR_21, VAR_16, VAR_22);

 VAR_22 = FUNC_1(VAR_21, VAR_15);
 VAR_22 &= ~(VAR_5 | VAR_3);
 FUNC_3(VAR_21, VAR_15, VAR_22);

 VAR_22 = FUNC_1(VAR_21, VAR_13);
 VAR_22 |= VAR_11;
 FUNC_3(VAR_21, VAR_13, VAR_22);


 VAR_23 = FUNC_2(VAR_21, VAR_19);
 VAR_23 &= ~(VAR_2 | VAR_1);
 FUNC_5(VAR_21, VAR_19, VAR_23);

 VAR_23 = FUNC_2(VAR_21, VAR_17);
 VAR_23 &= ~(VAR_9 | VAR_8 | VAR_7);
 FUNC_5(VAR_21, VAR_17, VAR_23);

 VAR_22 = FUNC_1(VAR_21, VAR_20);
 VAR_22 &= ~VAR_10;
 FUNC_3(VAR_21, VAR_20, VAR_22);

 return 0;
}
