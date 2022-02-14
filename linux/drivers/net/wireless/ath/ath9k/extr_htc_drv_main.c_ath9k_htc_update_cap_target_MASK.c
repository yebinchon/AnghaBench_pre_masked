
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ath9k_htc_priv {TYPE_2__* ah; } ;
struct ath9k_htc_cap_target {int ampdu_subframes; int tx_chainmask; int enable_coex; int ampdu_limit; } ;
struct TYPE_3__ {int tx_chainmask; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int FUNC_0 (int ,struct ath9k_htc_cap_target*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath9k_htc_cap_target*,int ,int) ;

int FUNC_3(struct ath9k_htc_priv *VAR_1,
    u8 VAR_2)
{
 struct ath9k_htc_cap_target VAR_3;
 int VAR_4;
 u8 VAR_5;

 FUNC_2(&VAR_3, 0, sizeof(struct ath9k_htc_cap_target));

 VAR_3.ampdu_limit = FUNC_1(0xffff);
 VAR_3.ampdu_subframes = 0xff;
 VAR_3.enable_coex = VAR_2;
 VAR_3.tx_chainmask = VAR_1->ah->caps.tx_chainmask;

 FUNC_0(VAR_0, &VAR_3);

 return VAR_4;
}
