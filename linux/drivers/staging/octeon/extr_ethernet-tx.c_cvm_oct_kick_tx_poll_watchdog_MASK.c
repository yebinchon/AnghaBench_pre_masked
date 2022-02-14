
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int one_shot; int len; } ;
union cvmx_ciu_timx {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 union cvmx_ciu_timx VAR_1;

 VAR_1.u64 = 0;
 VAR_1.s.one_shot = 1;
 VAR_1.s.len = VAR_0;
 FUNC_1(FUNC_0(1), VAR_1.u64);
}
