
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ktime_t ;
struct TYPE_2__ {int duty_cycle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_5, ktime_t VAR_6)
{
 long VAR_7;
 int VAR_8;
 unsigned char VAR_9;
 unsigned char VAR_10, VAR_11;


 VAR_7 = VAR_5 * 1152 / 10000;
 if (VAR_4.duty_cycle > 50)
  VAR_10 = 3;
 else
  VAR_10 = 1;
 for (VAR_8 = 0, VAR_9 = 0x7f; VAR_7 > 0; VAR_7 -= 3) {
  VAR_11 = VAR_10 << (VAR_8 * 3);
  VAR_11 >>= 1;
  VAR_9 &= (~VAR_11);
  VAR_8++;
  if (VAR_8 == 3) {
   FUNC_1(VAR_3, VAR_9);
   while (!(FUNC_0(VAR_0) & VAR_2))
    ;
   VAR_9 = 0x7f;
   VAR_8 = 0;
  }
 }
 if (VAR_8 != 0) {
  FUNC_1(VAR_3, VAR_9);
  while (!(FUNC_0(VAR_0) & VAR_1))
   ;
 }
}
