
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** SCMD; void** SASR; } ;
typedef TYPE_1__ wd33c93_regs ;
typedef void* uchar ;


 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(const wd33c93_regs VAR_0, uchar VAR_1, uchar VAR_2)
{
 *VAR_0.SASR = VAR_1;
 FUNC_0();
 *VAR_0.SCMD = VAR_2;
 FUNC_0();
}
