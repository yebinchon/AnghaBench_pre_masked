
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct fb_info {int flags; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fb_info*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_3)
{
 const bool VAR_4 = VAR_3->flags & VAR_2;

 VAR_3->flags &= ~VAR_2;




 VAR_3->flags |= VAR_4 ? VAR_1 : 0;


 if (VAR_3->flags & VAR_1 && !FUNC_0(VAR_3)) {
  FUNC_1("%s: enable CONFIG_FB_BIG_ENDIAN to "
         "support this framebuffer\n", VAR_3->fix.id);
  return -VAR_0;
 } else if (!(VAR_3->flags & VAR_1) && FUNC_0(VAR_3)) {
  FUNC_1("%s: enable CONFIG_FB_LITTLE_ENDIAN to "
         "support this framebuffer\n", VAR_3->fix.id);
  return -VAR_0;
 }

 return 0;
}
