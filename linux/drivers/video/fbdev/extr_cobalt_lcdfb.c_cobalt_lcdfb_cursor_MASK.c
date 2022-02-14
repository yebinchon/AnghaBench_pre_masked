
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; } ;
struct TYPE_4__ {int dx; int dy; } ;
struct fb_cursor {int set; scalar_t__ enable; TYPE_2__ image; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_5, struct fb_cursor *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;

 switch (VAR_6->set) {
 case 128:
  VAR_7 = VAR_6->image.dx;
  VAR_8 = VAR_6->image.dy;
  if (VAR_7 >= VAR_3 || VAR_8 >= VAR_4)
   return -VAR_0;

  VAR_9 = FUNC_1(VAR_5);
  if (VAR_9 < 0)
   return VAR_9;

  FUNC_2(VAR_5,
      FUNC_0(VAR_5->fix.line_length * VAR_8 + VAR_7));
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6->enable)
  FUNC_2(VAR_5, VAR_2);
 else
  FUNC_2(VAR_5, VAR_1);

 return 0;
}
