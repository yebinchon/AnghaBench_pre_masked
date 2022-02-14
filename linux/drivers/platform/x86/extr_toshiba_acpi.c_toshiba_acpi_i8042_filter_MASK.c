
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {int dummy; } ;
struct TYPE_2__ {int hotkey_work; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(unsigned char VAR_3, unsigned char VAR_4,
          struct serio *VAR_5)
{
 if (VAR_4 & VAR_0)
  return 0;

 if (FUNC_1(VAR_3 == 0xe0))
  return 0;

 if ((VAR_3 & 0x7f) == VAR_1) {
  FUNC_0(&VAR_2->hotkey_work);
  return 1;
 }

 return 0;
}
