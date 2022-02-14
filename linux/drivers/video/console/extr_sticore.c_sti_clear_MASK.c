
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_struct {int font_width; int font_height; int lock; int glob_cfg; int block_move; TYPE_1__* sti_data; } ;
struct sti_blkmv_outptr {int dummy; } ;
struct sti_blkmv_inptr {int src_x; int src_y; int dest_x; int dest_y; int width; int height; int bg_color; int fg_color; } ;
typedef int s32 ;
struct TYPE_2__ {struct sti_blkmv_outptr blkmv_outptr; struct sti_blkmv_inptr blkmv_inptr; } ;


 int FUNC_0 (struct sti_struct*,int) ;
 int FUNC_1 (struct sti_struct*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sti_struct*,int ,int *,struct sti_blkmv_inptr*,struct sti_blkmv_outptr*,int ) ;

void
FUNC_5(struct sti_struct *VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int VAR_5, int VAR_6)
{
 struct sti_blkmv_inptr *VAR_7 = &VAR_1->sti_data->blkmv_inptr;
 struct sti_blkmv_inptr VAR_8 = {
  .fg_color = FUNC_1(VAR_1, VAR_6),
  .bg_color = FUNC_0(VAR_1, VAR_6),
  .src_x = VAR_3 * VAR_1->font_width,
  .src_y = VAR_2 * VAR_1->font_height,
  .dest_x = VAR_3 * VAR_1->font_width,
  .dest_y = VAR_2 * VAR_1->font_height,
  .width = VAR_5 * VAR_1->font_width,
  .height = VAR_4* VAR_1->font_height,
 };
 struct sti_blkmv_outptr *VAR_9 = &VAR_1->sti_data->blkmv_outptr;
 s32 VAR_10;
 unsigned long VAR_11;

 do {
  FUNC_2(&VAR_1->lock, VAR_11);
  *VAR_7 = VAR_8;
  VAR_10 = FUNC_4(VAR_1, VAR_1->block_move, &VAR_0,
   VAR_7, VAR_9, VAR_1->glob_cfg);
  FUNC_3(&VAR_1->lock, VAR_11);
 } while (VAR_10 == 1);
}
