
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtw_dpk_info {scalar_t__ dpk_bw; int* dpk_gs; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_10 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 scalar_t__ FUNC_3 (struct rtw_dev*,int ,int ) ;
 int FUNC_4 (struct rtw_dev*,int ,int) ;
 int FUNC_5 (struct rtw_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_26, u8 VAR_27)
{
 struct rtw_dpk_info *VAR_28 = &VAR_26->dm_info.dpk_info;
 u32 VAR_29 = 0;

 FUNC_5(VAR_26, VAR_20, VAR_8, 0x8 | (VAR_27 << 1));
 FUNC_5(VAR_26, VAR_19, VAR_0, 0x0);
 FUNC_5(VAR_26, VAR_19, VAR_9, 0x0);
 FUNC_5(VAR_26, VAR_22, VAR_5, 0x9);
 FUNC_5(VAR_26, VAR_22, VAR_4, 0x1);
 FUNC_5(VAR_26, VAR_20, VAR_8, 0xc);
 FUNC_5(VAR_26, VAR_21, VAR_1, 0xf);

 if (VAR_27 == VAR_24) {
  FUNC_5(VAR_26, VAR_13, VAR_3,
     0x1066680);
  FUNC_5(VAR_26, VAR_17, VAR_2, 0x1);
 } else {
  FUNC_5(VAR_26, VAR_14, VAR_3,
     0x1066680);
  FUNC_5(VAR_26, VAR_18, VAR_2, 0x1);
 }

 if (VAR_28->dpk_bw == VAR_10) {
  FUNC_4(VAR_26, VAR_16, 0x80001310);
  FUNC_4(VAR_26, VAR_16, 0x00001310);
  FUNC_4(VAR_26, VAR_16, 0x810000db);
  FUNC_4(VAR_26, VAR_16, 0x010000db);
  FUNC_4(VAR_26, VAR_16, 0x0000b428);
  FUNC_4(VAR_26, VAR_15,
       0x05020000 | (FUNC_0(VAR_27) << 28));
 } else {
  FUNC_4(VAR_26, VAR_16, 0x8200190c);
  FUNC_4(VAR_26, VAR_16, 0x0200190c);
  FUNC_4(VAR_26, VAR_16, 0x8301ee14);
  FUNC_4(VAR_26, VAR_16, 0x0301ee14);
  FUNC_4(VAR_26, VAR_16, 0x0000b428);
  FUNC_4(VAR_26, VAR_15,
       0x05020008 | (FUNC_0(VAR_27) << 28));
 }

 FUNC_5(VAR_26, VAR_12, VAR_11, 0x8 | VAR_27);

 FUNC_2(VAR_26, VAR_27, VAR_25);

 FUNC_5(VAR_26, VAR_15, VAR_11, 0x0);
 FUNC_5(VAR_26, VAR_20, VAR_8, 0x8 | (VAR_27 << 1));
 FUNC_5(VAR_26, VAR_22, VAR_5, 0x0);
 FUNC_5(VAR_26, VAR_22, VAR_4, 0x0);
 FUNC_5(VAR_26, VAR_20, VAR_8, 0xc);

 if (VAR_27 == VAR_24)
  FUNC_5(VAR_26, VAR_13, VAR_3, 0x5b);
 else
  FUNC_5(VAR_26, VAR_14, VAR_3, 0x5b);

 FUNC_5(VAR_26, VAR_21, VAR_7, 0x0);

 VAR_29 = (u16)FUNC_3(VAR_26, VAR_23, VAR_6);
 VAR_29 = (VAR_29 * 910) >> 10;
 VAR_29 = FUNC_1(VAR_29, 10);

 if (VAR_27 == VAR_24)
  FUNC_5(VAR_26, VAR_13, VAR_3, VAR_29);
 else
  FUNC_5(VAR_26, VAR_14, VAR_3, VAR_29);

 VAR_28->dpk_gs[VAR_27] = VAR_29;
}
