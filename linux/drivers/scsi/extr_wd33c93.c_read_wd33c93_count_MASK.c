
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* SCMD; int * SASR; } ;
typedef TYPE_1__ wd33c93_regs ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned long
FUNC_1(const wd33c93_regs VAR_1)
{
 unsigned long VAR_2;

 *VAR_1.SASR = VAR_0;
 FUNC_0();
 VAR_2 = *VAR_1.SCMD << 16;
 VAR_2 |= *VAR_1.SCMD << 8;
 VAR_2 |= *VAR_1.SCMD;
 FUNC_0();
 return VAR_2;
}
