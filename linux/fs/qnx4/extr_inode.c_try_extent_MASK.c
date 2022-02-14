
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int xtnt_blk; int xtnt_size; } ;
typedef TYPE_1__ qnx4_xtnt_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(qnx4_xtnt_t *VAR_0, u32 *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->xtnt_size);
 if (*VAR_1 < VAR_2)
  return FUNC_0(VAR_0->xtnt_blk) + *VAR_1 - 1;
 *VAR_1 -= VAR_2;
 return 0;
}
