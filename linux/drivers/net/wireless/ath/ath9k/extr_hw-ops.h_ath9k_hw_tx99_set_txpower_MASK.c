
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* tx99_set_txpower ) (struct ath_hw*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0, u8 VAR_1)
{
 if (FUNC_0(VAR_0)->tx99_set_txpower)
  FUNC_0(VAR_0)->tx99_set_txpower(VAR_0, VAR_1);
}
