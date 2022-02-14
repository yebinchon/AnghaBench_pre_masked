
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_tx_info {int dummy; } ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {void (* set_txdesc ) (struct ath_hw*,void*,struct ath_tx_info*) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 void FUNC_1 (struct ath_hw*,void*,struct ath_tx_info*) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0, void *VAR_1,
           struct ath_tx_info *VAR_2)
{
 return FUNC_0(VAR_0)->set_txdesc(VAR_0, VAR_1, VAR_2);
}
