
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* u64; } ;
typedef TYPE_1__ ef4_oword_t ;



__attribute__((used)) static bool FUNC_0(const ef4_oword_t *VAR_0, const ef4_oword_t *VAR_1,
         const ef4_oword_t *VAR_2)
{
 return ((VAR_0->u64[0] ^ VAR_1->u64[0]) & VAR_2->u64[0]) ||
  ((VAR_0->u64[1] ^ VAR_1->u64[1]) & VAR_2->u64[1]);
}
