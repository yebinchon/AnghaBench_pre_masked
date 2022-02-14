
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct iwl_trans *VAR_4,
          unsigned int VAR_5)
{
 if (VAR_4->trans_cfg->use_tfh) {
  FUNC_0(VAR_5 >= 64);
  return VAR_3 + 8 * VAR_5;
 }
 if (VAR_5 < 16)
  return VAR_0 + 4 * VAR_5;
 if (VAR_5 < 20)
  return VAR_1 + 4 * (VAR_5 - 16);
 FUNC_0(VAR_5 >= 32);
 return VAR_2 + 4 * (VAR_5 - 20);
}
