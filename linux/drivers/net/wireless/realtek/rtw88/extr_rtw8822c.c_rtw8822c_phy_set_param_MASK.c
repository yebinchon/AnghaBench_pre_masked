
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtw_hal {int antenna_rx; int antenna_tx; } ;
struct rtw_dm_info {int cck_gi_u_bnd; int cck_gi_l_bnd; } ;
struct TYPE_2__ {int crystal_cap; } ;
struct rtw_dev {TYPE_1__ efuse; struct rtw_hal hal; struct rtw_dm_info dm_info; } ;


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
 int FUNC_0 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*) ;
 scalar_t__ FUNC_5 (struct rtw_dev*,int,int) ;
 int FUNC_6 (struct rtw_dev*,int ,int,int) ;
 int FUNC_7 (struct rtw_dev*,int ,int ) ;
 int FUNC_8 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct rtw_dev *VAR_13)
{
 struct rtw_dm_info *VAR_14 = &VAR_13->dm_info;
 struct rtw_hal *VAR_15 = &VAR_13->hal;
 u8 VAR_16;
 u8 VAR_17 = 0;
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 bool VAR_21;


 FUNC_8(VAR_13, VAR_11,
         VAR_0 | VAR_1);
 FUNC_8(VAR_13, VAR_10,
         VAR_2 | VAR_3 | VAR_4);
 FUNC_7(VAR_13, VAR_12, VAR_5);


 FUNC_6(VAR_13, VAR_9, VAR_6, VAR_7);


 FUNC_1(VAR_13, 1);

 FUNC_4(VAR_13);

 VAR_16 = VAR_13->efuse.crystal_cap & 0x7f;
 FUNC_6(VAR_13, VAR_8, 0xfffc00,
    VAR_16 | (VAR_16 << 7));


 FUNC_1(VAR_13, 0);

 VAR_21 = 0;
 FUNC_0(VAR_13, VAR_15->antenna_tx, VAR_15->antenna_rx,
     VAR_21);
 FUNC_3(VAR_13);

 VAR_17 = (u8)FUNC_5(VAR_13, 0x1a98, 0xc000);
 VAR_18 = (u8)FUNC_5(VAR_13, 0x1aa8, 0xf0000);
 VAR_19 = (u8)FUNC_5(VAR_13, 0x1a98, 0xc0);
 VAR_20 = (u8)FUNC_5(VAR_13, 0x1a70, 0x0f000000);

 VAR_14->cck_gi_u_bnd = ((VAR_17 << 4) | (VAR_18));
 VAR_14->cck_gi_l_bnd = ((VAR_19 << 4) | (VAR_20));

 FUNC_2(VAR_13);
}
