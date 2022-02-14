
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * SCMD; int * SASR; } ;
typedef TYPE_1__ wd33c93_regs ;
typedef int uint ;
typedef int uchar ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(const wd33c93_regs VAR_1, uint VAR_2, uchar VAR_3[])
{
 int VAR_4;

 *VAR_1.SASR = VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  *VAR_1.SCMD = VAR_3[VAR_4];
}
