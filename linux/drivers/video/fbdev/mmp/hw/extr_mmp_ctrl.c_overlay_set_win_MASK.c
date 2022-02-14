
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_win {int* pitch; int ysrc; int xsrc; int ydst; int xdst; int ypos; int xpos; } ;
struct mmp_overlay {int access_ok; int win; int path; } ;
struct lcd_regs {int g_start; int g_size_z; int g_size; int g_pitch; int v_start; int v_size_z; int v_size; int v_pitch_uv; int v_pitch_yc; } ;


 int FUNC_0 (struct mmp_overlay*) ;
 int FUNC_1 (int *,struct mmp_win*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mmp_overlay*) ;
 struct lcd_regs* FUNC_5 (int ) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void FUNC_7(struct mmp_overlay *VAR_0, struct mmp_win *VAR_1)
{
 struct lcd_regs *VAR_2 = FUNC_5(VAR_0->path);


 FUNC_1(&VAR_0->win, VAR_1, sizeof(struct mmp_win));

 FUNC_2(&VAR_0->access_ok);

 if (FUNC_4(VAR_0)) {
  FUNC_6(VAR_1->pitch[0], &VAR_2->v_pitch_yc);
  FUNC_6(VAR_1->pitch[2] << 16 |
    VAR_1->pitch[1], &VAR_2->v_pitch_uv);

  FUNC_6((VAR_1->ysrc << 16) | VAR_1->xsrc, &VAR_2->v_size);
  FUNC_6((VAR_1->ydst << 16) | VAR_1->xdst, &VAR_2->v_size_z);
  FUNC_6(VAR_1->ypos << 16 | VAR_1->xpos, &VAR_2->v_start);
 } else {
  FUNC_6(VAR_1->pitch[0], &VAR_2->g_pitch);

  FUNC_6((VAR_1->ysrc << 16) | VAR_1->xsrc, &VAR_2->g_size);
  FUNC_6((VAR_1->ydst << 16) | VAR_1->xdst, &VAR_2->g_size_z);
  FUNC_6(VAR_1->ypos << 16 | VAR_1->xpos, &VAR_2->g_start);
 }

 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->access_ok);
}
