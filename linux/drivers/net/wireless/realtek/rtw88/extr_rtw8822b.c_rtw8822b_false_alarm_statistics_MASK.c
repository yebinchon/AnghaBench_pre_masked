
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dm_info {int cck_fa_cnt; int ofdm_fa_cnt; int total_fa_cnt; int cck_ok_cnt; int cck_err_cnt; int ofdm_ok_cnt; int ofdm_err_cnt; int ht_ok_cnt; int ht_err_cnt; int vht_ok_cnt; int vht_err_cnt; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_0)
{
 struct rtw_dm_info *VAR_1 = &VAR_0->dm_info;
 u32 VAR_2;
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_2 = FUNC_2(VAR_0, 0x808) & FUNC_0(28);
 VAR_3 = FUNC_1(VAR_0, 0xa5c);
 VAR_4 = FUNC_1(VAR_0, 0xf48);

 VAR_1->cck_fa_cnt = VAR_3;
 VAR_1->ofdm_fa_cnt = VAR_4;
 VAR_1->total_fa_cnt = VAR_4;
 VAR_1->total_fa_cnt += VAR_2 ? VAR_3 : 0;

 VAR_5 = FUNC_2(VAR_0, 0xf04);
 VAR_1->cck_ok_cnt = VAR_5 & 0xffff;
 VAR_1->cck_err_cnt = (VAR_5 & 0xffff0000) >> 16;
 VAR_5 = FUNC_2(VAR_0, 0xf14);
 VAR_1->ofdm_ok_cnt = VAR_5 & 0xffff;
 VAR_1->ofdm_err_cnt = (VAR_5 & 0xffff0000) >> 16;
 VAR_5 = FUNC_2(VAR_0, 0xf10);
 VAR_1->ht_ok_cnt = VAR_5 & 0xffff;
 VAR_1->ht_err_cnt = (VAR_5 & 0xffff0000) >> 16;
 VAR_5 = FUNC_2(VAR_0, 0xf0c);
 VAR_1->vht_ok_cnt = VAR_5 & 0xffff;
 VAR_1->vht_err_cnt = (VAR_5 & 0xffff0000) >> 16;

 FUNC_4(VAR_0, 0x9a4, FUNC_0(17));
 FUNC_3(VAR_0, 0x9a4, FUNC_0(17));
 FUNC_3(VAR_0, 0xa2c, FUNC_0(15));
 FUNC_4(VAR_0, 0xa2c, FUNC_0(15));
 FUNC_4(VAR_0, 0xb58, FUNC_0(0));
 FUNC_3(VAR_0, 0xb58, FUNC_0(0));
}
