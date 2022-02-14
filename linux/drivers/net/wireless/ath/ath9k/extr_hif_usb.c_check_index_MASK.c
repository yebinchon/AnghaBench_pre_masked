
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ath9k_htc_tx_ctl {scalar_t__ type; scalar_t__ sta_idx; } ;


 scalar_t__ VAR_0 ;
 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_1(struct sk_buff *VAR_1, u8 VAR_2)
{
 struct ath9k_htc_tx_ctl *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 if ((VAR_3->type == VAR_0) &&
     (VAR_3->sta_idx == VAR_2))
  return 1;

 return 0;
}
