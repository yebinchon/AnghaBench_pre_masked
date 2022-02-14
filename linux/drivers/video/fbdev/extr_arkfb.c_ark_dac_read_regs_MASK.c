
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fb_info {struct arkfb_info* par; } ;
struct TYPE_2__ {int vgabase; } ;
struct arkfb_info {TYPE_1__ state; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct fb_info *VAR_4 = VAR_1;
 struct arkfb_info *VAR_5;
 u8 VAR_6;

 VAR_5 = VAR_4->par;
 VAR_6 = FUNC_1(VAR_5->state.vgabase, 0x1C);
 while (VAR_3 != 0)
 {
  FUNC_2(VAR_5->state.vgabase, 0x1C, VAR_6 | (VAR_2[0] & 4 ? 0x80 : 0));
  VAR_2[1] = FUNC_0(VAR_5->state.vgabase, VAR_0[VAR_2[0] & 3]);
  VAR_3--;
  VAR_2 += 2;
 }

 FUNC_2(VAR_5->state.vgabase, 0x1C, VAR_6);
}
