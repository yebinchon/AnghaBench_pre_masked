
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct TYPE_2__ {int (* detect_bb_hang ) (struct ath_hw*) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;

__attribute__((used)) static inline bool FUNC_2(struct ath_hw *VAR_0)
{
 return FUNC_0(VAR_0)->detect_bb_hang(VAR_0);
}
