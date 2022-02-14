
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_tfh_tfd {struct iwl_tfh_tb* tbs; } ;
struct iwl_tfh_tb {int tb_len; } ;
struct iwl_tfd_tb {int hi_n_len; } ;
struct iwl_tfd {struct iwl_tfd_tb* tbs; } ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct iwl_trans *VAR_0, void *VAR_1,
       u8 VAR_2)
{
 if (VAR_0->trans_cfg->use_tfh) {
  struct iwl_tfh_tfd *VAR_3 = VAR_1;
  struct iwl_tfh_tb *VAR_4 = &VAR_3->tbs[VAR_2];

  return FUNC_0(VAR_4->tb_len);
 } else {
  struct iwl_tfd *VAR_5 = VAR_1;
  struct iwl_tfd_tb *VAR_6 = &VAR_5->tbs[VAR_2];

  return FUNC_0(VAR_6->hi_n_len) >> 4;
 }
}
