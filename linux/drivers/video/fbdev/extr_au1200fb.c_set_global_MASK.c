
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct au1200_lcd_global_regs_t {int flags; int brightness; int mask; int colorkey; int backcolor; } ;
struct TYPE_2__ {int pwmdiv; int pwmhi; int colorkeymsk; int colorkey; int backcolor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(u_int VAR_5, struct au1200_lcd_global_regs_t *VAR_6)
{

 unsigned int VAR_7, VAR_8;



 if (VAR_6->flags & VAR_0)
  VAR_4->backcolor = VAR_6->backcolor;

 if (VAR_6->flags & VAR_1) {


  if (VAR_6->brightness < 30) {
   VAR_6->brightness = 30;
  }
  VAR_8 = (VAR_4->pwmdiv & 0x3FFFF) + 1;
  VAR_7 = (((VAR_6->brightness & 0xFF)+1) * VAR_8 >> 8);
  VAR_4->pwmhi &= 0xFFFF;
  VAR_4->pwmhi |= (VAR_7 << 16);
 }

 if (VAR_6->flags & VAR_2)
  VAR_4->colorkey = VAR_6->colorkey;

 if (VAR_6->flags & VAR_3)
  VAR_4->colorkeymsk = VAR_6->mask;
 FUNC_0();
}
