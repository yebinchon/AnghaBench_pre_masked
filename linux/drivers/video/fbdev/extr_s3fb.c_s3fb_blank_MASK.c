
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vgabase; } ;
struct s3fb_info {TYPE_1__ state; } ;
struct fb_info {struct s3fb_info* par; } ;







 int FUNC_0 (struct fb_info*,char*) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 struct s3fb_info *VAR_2 = VAR_1->par;

 switch (VAR_0) {
 case 129:
  FUNC_0(VAR_1, "unblank\n");
  FUNC_1(VAR_2->state.vgabase, 0x56, 0x00, 0x06);
  FUNC_2(VAR_2->state.vgabase, 0x01, 0x00, 0x20);
  break;
 case 131:
  FUNC_0(VAR_1, "blank\n");
  FUNC_1(VAR_2->state.vgabase, 0x56, 0x00, 0x06);
  FUNC_2(VAR_2->state.vgabase, 0x01, 0x20, 0x20);
  break;
 case 132:
  FUNC_0(VAR_1, "hsync\n");
  FUNC_1(VAR_2->state.vgabase, 0x56, 0x02, 0x06);
  FUNC_2(VAR_2->state.vgabase, 0x01, 0x20, 0x20);
  break;
 case 128:
  FUNC_0(VAR_1, "vsync\n");
  FUNC_1(VAR_2->state.vgabase, 0x56, 0x04, 0x06);
  FUNC_2(VAR_2->state.vgabase, 0x01, 0x20, 0x20);
  break;
 case 130:
  FUNC_0(VAR_1, "sync down\n");
  FUNC_1(VAR_2->state.vgabase, 0x56, 0x06, 0x06);
  FUNC_2(VAR_2->state.vgabase, 0x01, 0x20, 0x20);
  break;
 }

 return 0;
}
