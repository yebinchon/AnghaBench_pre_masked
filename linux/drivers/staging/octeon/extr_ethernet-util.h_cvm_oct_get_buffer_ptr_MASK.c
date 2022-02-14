
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int back; } ;
union cvmx_buf_ptr {TYPE_1__ s; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static inline void *FUNC_1(union cvmx_buf_ptr VAR_0)
{
 return FUNC_0(((VAR_0.s.addr >> 7) - VAR_0.s.back)
    << 7);
}
