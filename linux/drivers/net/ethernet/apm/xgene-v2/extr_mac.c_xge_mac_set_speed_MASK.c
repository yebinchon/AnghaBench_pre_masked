
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xge_pdata {int phy_speed; } ;


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
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int ,int) ;


 int FUNC_2 (struct xge_pdata*,int ) ;
 int FUNC_3 (struct xge_pdata*,int ,int) ;

void FUNC_4(struct xge_pdata *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 VAR_17 = FUNC_2(VAR_16, VAR_9);
 VAR_18 = FUNC_2(VAR_16, VAR_10);
 VAR_19 = FUNC_2(VAR_16, VAR_6);
 VAR_22 = FUNC_2(VAR_16, VAR_15);
 VAR_20 = FUNC_2(VAR_16, VAR_13);
 VAR_21 = FUNC_2(VAR_16, VAR_11);
 VAR_18 |= VAR_3;

 switch (VAR_16->phy_speed) {
 case 129:
  FUNC_1(&VAR_20, VAR_12, 1);
  FUNC_1(&VAR_21, VAR_8, 0);
  FUNC_1(&VAR_17, VAR_0, 0);
  FUNC_1(&VAR_18, VAR_2, 500);
  FUNC_0(&VAR_22, VAR_1, 0);
  break;
 case 128:
  FUNC_1(&VAR_20, VAR_12, 1);
  FUNC_1(&VAR_21, VAR_8, 1);
  FUNC_1(&VAR_17, VAR_0, 1);
  FUNC_1(&VAR_18, VAR_2, 80);
  FUNC_0(&VAR_22, VAR_1, 0);
  break;
 default:
  FUNC_1(&VAR_20, VAR_12, 2);
  FUNC_1(&VAR_21, VAR_8, 2);
  FUNC_1(&VAR_17, VAR_0, 2);
  FUNC_1(&VAR_18, VAR_2, 16);
  FUNC_0(&VAR_22, VAR_1, 1);
  break;
 }

 VAR_20 |= VAR_7 | VAR_5 | VAR_14;
 FUNC_1(&VAR_19, VAR_4, 0x32);

 FUNC_3(VAR_16, VAR_13, VAR_20);
 FUNC_3(VAR_16, VAR_11, VAR_21);
 FUNC_3(VAR_16, VAR_15, VAR_22);
 FUNC_3(VAR_16, VAR_9, VAR_17);
 FUNC_3(VAR_16, VAR_10, VAR_18);
 FUNC_3(VAR_16, VAR_6, VAR_19);
}
