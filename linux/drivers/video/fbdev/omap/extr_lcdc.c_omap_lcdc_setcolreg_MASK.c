
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ color_mode; scalar_t__ palette_virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(u_int VAR_4, u16 VAR_5, u16 VAR_6, u16 VAR_7,
          u16 VAR_8, int VAR_9)
{
 u16 *VAR_10;

 if (VAR_3.color_mode != VAR_1 || VAR_4 > 255)
  return -VAR_0;

 VAR_10 = (u16 *)VAR_3.palette_virt;

 VAR_10[VAR_4] &= ~0x0fff;
 VAR_10[VAR_4] |= ((VAR_5 >> 12) << 8) | ((VAR_6 >> 12) << 4 ) |
      (VAR_7 >> 12);

 if (VAR_9) {
  FUNC_0();
  FUNC_3();
  FUNC_2();
  FUNC_5();
  FUNC_4(VAR_2);
  FUNC_1();
 }

 return 0;
}
