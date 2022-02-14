
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpuid_level; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 int VAR_13;

 if (VAR_5.cpuid_level < VAR_2)
  return;

 FUNC_0(VAR_2, &VAR_7, &VAR_8, &VAR_9, &VAR_10);

 if (!(VAR_9 & VAR_0) ||
     !(VAR_9 & VAR_1))
  return;

 VAR_10 >>= VAR_4;
 for (VAR_13 = 0; VAR_13 < 7 && VAR_10; VAR_13++, VAR_10 >>= VAR_4) {
  if (VAR_10 & VAR_3) {
   VAR_11 = VAR_13;
   VAR_12 = VAR_10 & VAR_3;
  }
 }
 VAR_6 = (VAR_11 << VAR_4) |
  (VAR_12 - 1);

}
