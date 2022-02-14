
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int dummy; } ;
struct ath5k_hw {struct ath_common common; } ;



__attribute__((used)) static inline struct ath_common *FUNC_0(struct ath5k_hw *VAR_0)
{
 return &VAR_0->common;
}
