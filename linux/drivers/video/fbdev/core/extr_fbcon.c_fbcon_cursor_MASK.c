
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {size_t vc_num; int vc_deccm; int vc_cursor_type; int vc_cur_blink_ms; scalar_t__ vc_pos; } ;
struct fbcon_ops {int cursor_flash; int (* cursor ) (struct vc_data*,struct fb_info*,int,int,int ,int ) ;int cur_blink_jiffies; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*) ;
 scalar_t__ FUNC_2 (struct vc_data*,struct fb_info*) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,struct fb_info*,int,int) ;
 int FUNC_5 (int ) ;
 struct fb_info** VAR_3 ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (struct vc_data*,struct fb_info*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct vc_data *VAR_5, int VAR_6)
{
 struct fb_info *VAR_7 = VAR_3[VAR_2[VAR_5->vc_num]];
 struct fbcon_ops *VAR_8 = VAR_7->fbcon_par;
 int VAR_9;
  int VAR_10 = FUNC_6((u16 *) VAR_5->vc_pos);

 VAR_8->cur_blink_jiffies = FUNC_5(VAR_5->vc_cur_blink_ms);

 if (FUNC_2(VAR_5, VAR_7) || VAR_5->vc_deccm != 1)
  return;

 if (VAR_5->vc_cursor_type & 0x10)
  FUNC_1(VAR_7);
 else
  FUNC_0(VAR_7);

 VAR_8->cursor_flash = (VAR_6 == VAR_0) ? 0 : 1;
 if (VAR_6 & VAR_1) {
  VAR_6 &= ~VAR_1;
  VAR_9 = VAR_4;
 } else {
  if (VAR_4)
   FUNC_3(VAR_5);
  VAR_9 = 0;
 }

 VAR_8->cursor(VAR_5, VAR_7, VAR_6, VAR_9, FUNC_4(VAR_5, VAR_7, VAR_10, 1),
      FUNC_4(VAR_5, VAR_7, VAR_10, 0));
}
