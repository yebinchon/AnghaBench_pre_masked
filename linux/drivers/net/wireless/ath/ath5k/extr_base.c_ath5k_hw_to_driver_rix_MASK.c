
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_hw {int** rate_idx; TYPE_1__* curchan; } ;
struct TYPE_2__ {size_t band; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct ath5k_hw *VAR_1, int VAR_2)
{
 int VAR_3;


 if (FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0,
   "hw_rix out of bounds: %x\n", VAR_2))
  return 0;

 VAR_3 = VAR_1->rate_idx[VAR_1->curchan->band][VAR_2];
 if (FUNC_0(VAR_3 < 0, "invalid hw_rix: %x\n", VAR_2))
  VAR_3 = 0;

 return VAR_3;
}
