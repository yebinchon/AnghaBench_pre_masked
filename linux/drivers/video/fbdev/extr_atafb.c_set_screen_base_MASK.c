
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char bas_hi; unsigned char bas_md; unsigned char bas_lo; } ;


 unsigned long FUNC_0 (void*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 VAR_0.bas_hi = (unsigned char)((VAR_2 & 0xff0000) >> 16);
 VAR_0.bas_md = (unsigned char)((VAR_2 & 0x00ff00) >> 8);
 VAR_0.bas_lo = (unsigned char)(VAR_2 & 0x0000ff);
}
