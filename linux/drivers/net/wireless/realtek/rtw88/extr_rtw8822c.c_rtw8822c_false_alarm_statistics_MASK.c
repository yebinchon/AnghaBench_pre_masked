
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtw_dm_info {int cck_fa_cnt; int ofdm_fa_cnt; int total_fa_cnt; int cck_ok_cnt; int cck_err_cnt; int ofdm_ok_cnt; int ofdm_err_cnt; int ht_ok_cnt; int ht_err_cnt; int vht_ok_cnt; int vht_err_cnt; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
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
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;
 int FUNC_5 (struct rtw_dev*,int ,int ,int) ;
 int FUNC_6 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rtw_dev *VAR_15)
{
 struct rtw_dm_info *VAR_16 = &VAR_15->dm_info;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30,
     VAR_31, VAR_32, VAR_33;

 VAR_17 = FUNC_3(VAR_15, VAR_8) & VAR_1;
 VAR_18 = FUNC_2(VAR_15, VAR_6);

 VAR_21 = FUNC_3(VAR_15, VAR_9);
 VAR_22 = FUNC_3(VAR_15, VAR_10);
 VAR_23 = FUNC_3(VAR_15, VAR_11);
 VAR_24 = FUNC_3(VAR_15, VAR_12);
 VAR_25 = FUNC_3(VAR_15, VAR_13);

 VAR_26 = FUNC_0(FUNC_1(31, 16), VAR_21);
 VAR_27 = FUNC_0(FUNC_1(15, 0), VAR_22);
 VAR_28 = FUNC_0(FUNC_1(31, 16), VAR_22);
 VAR_32 = FUNC_0(FUNC_1(15, 0), VAR_23);
 VAR_29 = FUNC_0(FUNC_1(15, 0), VAR_24);
 VAR_33 = FUNC_0(FUNC_1(31, 16), VAR_24);
 VAR_31 = FUNC_0(FUNC_1(15, 0), VAR_25);
 VAR_30 = FUNC_0(FUNC_1(31, 16), VAR_25);

 VAR_20 = VAR_26 + VAR_27 + VAR_28 + VAR_32 +
        VAR_29 + VAR_33 + VAR_31 + VAR_30;

 VAR_16->cck_fa_cnt = VAR_18;
 VAR_16->ofdm_fa_cnt = VAR_20;
 VAR_16->total_fa_cnt = VAR_20;
 VAR_16->total_fa_cnt += VAR_17 ? VAR_18 : 0;

 VAR_19 = FUNC_3(VAR_15, 0x2c04);
 VAR_16->cck_ok_cnt = VAR_19 & 0xffff;
 VAR_16->cck_err_cnt = (VAR_19 & 0xffff0000) >> 16;
 VAR_19 = FUNC_3(VAR_15, 0x2c14);
 VAR_16->ofdm_ok_cnt = VAR_19 & 0xffff;
 VAR_16->ofdm_err_cnt = (VAR_19 & 0xffff0000) >> 16;
 VAR_19 = FUNC_3(VAR_15, 0x2c10);
 VAR_16->ht_ok_cnt = VAR_19 & 0xffff;
 VAR_16->ht_err_cnt = (VAR_19 & 0xffff0000) >> 16;
 VAR_19 = FUNC_3(VAR_15, 0x2c0c);
 VAR_16->vht_ok_cnt = VAR_19 & 0xffff;
 VAR_16->vht_err_cnt = (VAR_19 & 0xffff0000) >> 16;

 FUNC_5(VAR_15, VAR_5, VAR_2, 0);
 FUNC_5(VAR_15, VAR_5, VAR_2, 2);
 FUNC_5(VAR_15, VAR_5, VAR_4, 0);
 FUNC_5(VAR_15, VAR_5, VAR_4, 2);


 FUNC_4(VAR_15, VAR_14, VAR_3);
 FUNC_6(VAR_15, VAR_7, VAR_0);
 FUNC_4(VAR_15, VAR_7, VAR_0);
 FUNC_6(VAR_15, VAR_14, VAR_3);
}
