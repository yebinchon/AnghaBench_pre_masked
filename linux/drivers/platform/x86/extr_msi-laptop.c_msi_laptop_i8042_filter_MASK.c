
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dummy; } ;
struct TYPE_2__ {int ec_delay; } ;


 double VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(unsigned char VAR_7, unsigned char VAR_8,
    struct serio *VAR_9)
{
 static bool VAR_10;

 if (VAR_8 & VAR_1)
  return 0;


 if (FUNC_3(VAR_7 == 0xe0)) {
  VAR_10 = 1;
  return 0;
 } else if (FUNC_3(VAR_10)) {
  VAR_10 = 0;
  switch (VAR_7) {
  case 0xE4:
   if (VAR_6->ec_delay) {
    FUNC_1(&VAR_4,
     FUNC_0(0.5 * VAR_0));
   } else
    FUNC_2(&VAR_5);
   break;
  case 0x54:
  case 0x62:
  case 0x76:
   if (VAR_6->ec_delay) {
    FUNC_1(&VAR_2,
     FUNC_0(0.5 * VAR_0));
   } else
    FUNC_2(&VAR_3);
   break;
  }
 }

 return 0;
}
