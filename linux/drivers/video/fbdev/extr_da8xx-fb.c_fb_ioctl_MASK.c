
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_sync_arg {int front_porch; int pulse_width; int back_porch; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lcd_sync_arg*,char*,int) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3, unsigned int VAR_4,
     unsigned long VAR_5)
{
 struct lcd_sync_arg VAR_6;

 switch (VAR_4) {
 case 134:
 case 133:
 case 136:
 case 131:
 case 135:
 case 130:
  return -VAR_2;
 case 129:
  if (FUNC_0(&VAR_6, (char *)VAR_5,
    sizeof(struct lcd_sync_arg)))
   return -VAR_0;
  FUNC_2(VAR_6.back_porch,
     VAR_6.pulse_width,
     VAR_6.front_porch);
  break;
 case 128:
  if (FUNC_0(&VAR_6, (char *)VAR_5,
    sizeof(struct lcd_sync_arg)))
   return -VAR_0;
  FUNC_3(VAR_6.back_porch,
     VAR_6.pulse_width,
     VAR_6.front_porch);
  break;
 case 132:
  return FUNC_1(VAR_3);
 default:
  return -VAR_1;
 }
 return 0;
}
