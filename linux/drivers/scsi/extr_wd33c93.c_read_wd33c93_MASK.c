
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * SCMD; int * SASR; } ;
typedef TYPE_1__ wd33c93_regs ;
typedef int uchar ;


 int FUNC_0 () ;

__attribute__((used)) static inline uchar
FUNC_1(const wd33c93_regs VAR_0, uchar VAR_1)
{
 *VAR_0.SASR = VAR_1;
 FUNC_0();
 return (*VAR_0.SCMD);
}
