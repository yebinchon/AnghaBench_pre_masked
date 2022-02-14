
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct htc_target {int dummy; } ;
struct ath9k_htc_tx_ctl {int epid; } ;


 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct htc_target*,struct sk_buff*,int ,int ,int ) ;

int FUNC_2(struct htc_target *VAR_0, struct sk_buff *VAR_1)
{
 struct ath9k_htc_tx_ctl *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 return FUNC_1(VAR_0, VAR_1, VAR_1->len, 0, VAR_2->epid);
}
