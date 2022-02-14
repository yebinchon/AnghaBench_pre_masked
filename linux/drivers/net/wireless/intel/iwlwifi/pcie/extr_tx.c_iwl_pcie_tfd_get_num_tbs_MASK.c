
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_tfh_tfd {int num_tbs; } ;
struct iwl_tfd {int num_tbs; } ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct iwl_trans *VAR_0, void *VAR_1)
{
 if (VAR_0->trans_cfg->use_tfh) {
  struct iwl_tfh_tfd *VAR_2 = VAR_1;

  return FUNC_0(VAR_2->num_tbs) & 0x1f;
 } else {
  struct iwl_tfd *VAR_3 = VAR_1;

  return VAR_3->num_tbs & 0x1f;
 }
}
