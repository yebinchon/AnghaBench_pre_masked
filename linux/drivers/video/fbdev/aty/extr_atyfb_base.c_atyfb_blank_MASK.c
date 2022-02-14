
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {scalar_t__ lcd_table; scalar_t__ asleep; scalar_t__ lock_blank; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int ,struct atyfb_par*) ;
 int FUNC_2 (int ,int,struct atyfb_par*) ;
 int FUNC_3 (int ,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_4(int VAR_5, struct fb_info *VAR_6)
{
 struct atyfb_par *VAR_7 = (struct atyfb_par *) VAR_6->par;
 u32 VAR_8;

 if (VAR_7->lock_blank || VAR_7->asleep)
  return 0;
 VAR_8 = FUNC_1(VAR_0, VAR_7);
 VAR_8 &= ~0x400004c;
 switch (VAR_5) {
 case 129:
  break;
 case 131:
  VAR_8 |= 0x4000040;
  break;
 case 128:
  VAR_8 |= 0x4000048;
  break;
 case 132:
  VAR_8 |= 0x4000044;
  break;
 case 130:
  VAR_8 |= 0x400004c;
  break;
 }
 FUNC_3(VAR_0, VAR_8, VAR_7);
 return 0;
}
