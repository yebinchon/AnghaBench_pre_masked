
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex_stat {int wl_tx_limit_en; int wl_ampdu_limit_en; int darfrc; int darfrch; int retry_limit; int ampdu_max_time; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int scbd_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 void* FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (struct rtw_dev*,int ,int) ;
 int FUNC_5 (struct rtw_dev*,int ,int) ;
 int FUNC_6 (struct rtw_dev*,int ,int) ;
 int FUNC_7 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rtw_dev *VAR_7,
    bool VAR_8, bool VAR_9)
{
 struct rtw_chip_info *VAR_10 = VAR_7->chip;
 struct rtw_coex *VAR_11 = &VAR_7->coex;
 struct rtw_coex_stat *VAR_12 = &VAR_11->stat;
 bool VAR_13 = 0;

 if (!VAR_10->scbd_support)
  return;


 if (VAR_12->wl_tx_limit_en == VAR_8 &&
     VAR_12->wl_ampdu_limit_en == VAR_9)
  return;

 if (!VAR_12->wl_tx_limit_en) {
  VAR_12->darfrc = FUNC_1(VAR_7, VAR_2);
  VAR_12->darfrch = FUNC_1(VAR_7, VAR_3);
  VAR_12->retry_limit = FUNC_0(VAR_7, VAR_5);
 }

 if (!VAR_12->wl_ampdu_limit_en)
  VAR_12->ampdu_max_time =
    FUNC_2(VAR_7, VAR_1);

 VAR_12->wl_tx_limit_en = VAR_8;
 VAR_12->wl_ampdu_limit_en = VAR_9;

 if (VAR_8) {



  FUNC_7(VAR_7, VAR_6, VAR_0);




  FUNC_7(VAR_7, VAR_4, 0xf);
  FUNC_3(VAR_7, VAR_5, 0x0808);


  if (VAR_13) {
   FUNC_4(VAR_7, VAR_2, 0x1000000);
   FUNC_4(VAR_7, VAR_3, 0x1010101);
  } else {
   FUNC_4(VAR_7, VAR_2, 0x1000000);
   FUNC_4(VAR_7, VAR_3, 0x4030201);
  }
 } else {
  FUNC_6(VAR_7, VAR_6, VAR_0);
  FUNC_6(VAR_7, VAR_4, 0xf);

  FUNC_3(VAR_7, VAR_5, VAR_12->retry_limit);
  FUNC_4(VAR_7, VAR_2, VAR_12->darfrc);
  FUNC_4(VAR_7, VAR_3, VAR_12->darfrch);
 }

 if (VAR_9)
  FUNC_5(VAR_7, VAR_1, 0x20);
 else
  FUNC_5(VAR_7, VAR_1,
      VAR_12->ampdu_max_time);
}
