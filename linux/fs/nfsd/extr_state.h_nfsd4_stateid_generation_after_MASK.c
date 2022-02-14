
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ si_generation; } ;
typedef TYPE_1__ stateid_t ;
typedef scalar_t__ s32 ;



__attribute__((used)) static inline bool FUNC_0(stateid_t *VAR_0, stateid_t *VAR_1)
{
 return (s32)(VAR_0->si_generation - VAR_1->si_generation) > 0;
}
