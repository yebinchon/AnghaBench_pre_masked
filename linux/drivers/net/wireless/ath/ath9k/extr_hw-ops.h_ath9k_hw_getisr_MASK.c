
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
struct TYPE_2__ {int (* get_isr ) (struct ath_hw*,int*,int *) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int*,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct ath_hw *VAR_0, enum ath9k_int *VAR_1,
       u32 *VAR_2)
{
 return FUNC_0(VAR_0)->get_isr(VAR_0, VAR_1, VAR_2);
}
