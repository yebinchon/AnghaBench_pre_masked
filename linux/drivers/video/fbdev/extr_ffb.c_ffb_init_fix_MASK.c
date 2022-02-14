
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffb_par {int flags; int board_type; } ;
struct TYPE_2__ {int line_length; int accel; int visual; int type; int id; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_4)
{
 struct ffb_par *VAR_5 = (struct ffb_par *)VAR_4->par;
 const char *VAR_6;

 if (!(VAR_5->flags & VAR_3)) {
  if ((VAR_5->board_type & 0x7) == 0x3)
   VAR_6 = "Creator 3D";
  else
   VAR_6 = "Creator";
 } else
  VAR_6 = "Elite 3D";

 FUNC_0(VAR_4->fix.id, VAR_6, sizeof(VAR_4->fix.id));

 VAR_4->fix.type = VAR_1;
 VAR_4->fix.visual = VAR_2;


 VAR_4->fix.line_length = 8192;

 VAR_4->fix.accel = VAR_0;
}
