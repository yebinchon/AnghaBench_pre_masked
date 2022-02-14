
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char bas_hi; unsigned char bas_md; unsigned char bas_lo; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (void*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 unsigned long VAR_3;
 VAR_3 = FUNC_1(VAR_2);

 VAR_1.bas_hi = (unsigned char)((VAR_3 & 0xff0000) >> 16);
 VAR_1.bas_md = (unsigned char)((VAR_3 & 0x00ff00) >> 8);
 if (FUNC_0(VAR_0))
  VAR_1.bas_lo = (unsigned char)(VAR_3 & 0x0000ff);
}
