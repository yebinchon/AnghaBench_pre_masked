
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int bpairwise_key_installed; scalar_t__ keep_alive_trycnt; scalar_t__ under_exist_checking; scalar_t__ ht_20mhz_set; scalar_t__ no_ht_set; scalar_t__ no_ht_gf_set; scalar_t__ no_short_preamble_set; scalar_t__ no_short_slot_time_set; scalar_t__ nonerp_set; scalar_t__ capability; scalar_t__ flags; scalar_t__ expire_to; int auth_list; int asoc_list; int sta_recvpriv; int sta_xmitpriv; scalar_t__ sleepq_len; int sleep_q; int hash_list; int list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sta_info *VAR_0)
{
 FUNC_4((u8 *)VAR_0, 0, sizeof(struct sta_info));

 FUNC_5(&VAR_0->lock);
 FUNC_0(&VAR_0->list);
 FUNC_0(&VAR_0->hash_list);
 FUNC_1(&VAR_0->sleep_q);
 VAR_0->sleepq_len = 0;

 FUNC_3(&VAR_0->sta_xmitpriv);
 FUNC_2(&VAR_0->sta_recvpriv);
}
