
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw_antcomb_conf {int dummy; } ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* antdiv_comb_conf_get ) (struct ath_hw*,struct ath_hw_antcomb_conf*) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,struct ath_hw_antcomb_conf*) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0,
  struct ath_hw_antcomb_conf *VAR_1)
{
 FUNC_0(VAR_0)->antdiv_comb_conf_get(VAR_0, VAR_1);
}
