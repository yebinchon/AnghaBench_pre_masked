
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {short freq; int active; int jiffies; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(u_short VAR_2)
{
 static const short VAR_3[] = {
  350, 370, 392, 414, 440, 466, 491, 523, 554, 587, 619, 659
 };
 short VAR_4;
 int VAR_5 = VAR_0;

 VAR_4 = VAR_3[VAR_2 % 12];
 if (VAR_2 > 11)
  VAR_4 *= (1 << (VAR_2 / 12));
 VAR_1.freq = VAR_4;
 VAR_1.jiffies = FUNC_0(VAR_5);
 VAR_1.active = 1;

}
