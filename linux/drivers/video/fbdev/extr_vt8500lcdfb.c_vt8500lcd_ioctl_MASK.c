
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500lcd_info {scalar_t__ regbase; int wait; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct vt8500lcd_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3, unsigned int VAR_4,
    unsigned long VAR_5)
{
 int VAR_6 = 0;
 struct vt8500lcd_info *VAR_7 = FUNC_1(VAR_3);

 if (VAR_4 == VAR_1) {

  FUNC_3(0xffffffff ^ (1 << 3), VAR_7->regbase + 0x3c);
  VAR_6 = FUNC_2(VAR_7->wait,
   FUNC_0(VAR_7->regbase + 0x38) & (1 << 3), VAR_2 / 10);

  FUNC_3(0xffffffff, VAR_7->regbase + 0x3c);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6 == 0)
   return -VAR_0;
 }

 return VAR_6;
}
