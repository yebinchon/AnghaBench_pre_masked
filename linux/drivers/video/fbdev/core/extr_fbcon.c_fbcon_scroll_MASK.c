
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; unsigned int vc_rows; unsigned int vc_cols; unsigned int vc_size_row; int vc_video_erase_char; int vc_origin; } ;
struct fbcon_display {int vrows; int yscroll; int scrollmode; } ;
struct fb_info {int flags; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 size_t* VAR_3 ;
 struct fbcon_display* VAR_4 ;
 int FUNC_0 (struct vc_data*,unsigned int,int ,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct vc_data*,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_2 (struct vc_data*,int ) ;
 scalar_t__ FUNC_3 (struct vc_data*,struct fb_info*) ;
 int FUNC_4 (struct vc_data*,struct fbcon_display*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct vc_data*,struct fb_info*,struct fbcon_display*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (struct vc_data*,struct fbcon_display*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_7 (struct vc_data*,unsigned int,unsigned int) ;
 int VAR_5 ;
 struct fb_info** VAR_6 ;
 int FUNC_8 (unsigned short*,int ,unsigned int) ;
 int VAR_7 ;
 int FUNC_9 (struct vc_data*,unsigned int) ;
 int FUNC_10 (struct vc_data*,unsigned int,unsigned int) ;
 int FUNC_11 (struct vc_data*,unsigned int) ;
 int FUNC_12 (struct vc_data*,unsigned int,unsigned int) ;
 int FUNC_13 (struct vc_data*,unsigned int) ;
 int FUNC_14 (struct vc_data*,unsigned int) ;

__attribute__((used)) static bool FUNC_15(struct vc_data *VAR_8, unsigned int VAR_9, unsigned int VAR_10,
  enum con_scroll VAR_11, unsigned int VAR_12)
{
 struct fb_info *VAR_13 = VAR_6[VAR_3[VAR_8->vc_num]];
 struct fbcon_display *VAR_14 = &VAR_4[VAR_8->vc_num];
 int VAR_15 = VAR_13->flags & VAR_1;

 if (FUNC_3(VAR_8, VAR_13))
  return 1;

 FUNC_2(VAR_8, VAR_0);







 switch (VAR_11) {
 case 128:
  if (VAR_12 > VAR_8->vc_rows)
   VAR_12 = VAR_8->vc_rows;
  if (VAR_7)
   FUNC_7(VAR_8, VAR_9, VAR_12);
  if (VAR_5 >= 0)
   goto redraw_up;
  switch (VAR_14->scrollmode) {
  case 134:
   FUNC_5(VAR_8, VAR_13, VAR_14, VAR_9, VAR_10 - VAR_9 - VAR_12,
         VAR_12);
   FUNC_1(VAR_8, VAR_10 - VAR_12, 0, VAR_12, VAR_8->vc_cols);
   FUNC_8((unsigned short *) (VAR_8->vc_origin +
       VAR_8->vc_size_row *
       (VAR_10 - VAR_12)),
        VAR_8->vc_video_erase_char,
        VAR_8->vc_size_row * VAR_12);
   return 1;
   break;

  case 130:
   if (VAR_10 - VAR_9 - VAR_12 > 3 * VAR_8->vc_rows >> 2) {
    if (VAR_9 > 0)
     FUNC_0(VAR_8, 0, 0, VAR_12, 0, VAR_9,
          VAR_8->vc_cols);
    FUNC_14(VAR_8, VAR_12);
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_0(VAR_8, VAR_10 - VAR_12, 0, VAR_10, 0,
          VAR_8->vc_rows - VAR_10,
          VAR_8->vc_cols);
   } else if (VAR_13->flags & VAR_2)
    FUNC_0(VAR_8, VAR_9 + VAR_12, 0, VAR_9, 0,
         VAR_10 - VAR_9 - VAR_12, VAR_8->vc_cols);
   else
    goto redraw_up;
   FUNC_1(VAR_8, VAR_10 - VAR_12, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 132:
   if ((VAR_14->yscroll + VAR_12 <=
        2 * (VAR_14->vrows - VAR_8->vc_rows))
       && ((!VAR_15 && (VAR_10 - VAR_9 == VAR_8->vc_rows))
    || (VAR_15
        && (VAR_10 - VAR_9 - VAR_12 >
     3 * VAR_8->vc_rows >> 2)))) {
    if (VAR_9 > 0)
     FUNC_6(VAR_8, VAR_14, 0, VAR_9, VAR_12);
    FUNC_12(VAR_8, VAR_9, VAR_12);
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_6(VAR_8, VAR_14, VAR_10,
         VAR_8->vc_rows - VAR_10, VAR_10);
   } else
    FUNC_6(VAR_8, VAR_14, VAR_9 + VAR_12, VAR_10 - VAR_9 - VAR_12, VAR_9);
   FUNC_1(VAR_8, VAR_10 - VAR_12, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 133:
   if ((VAR_14->yscroll + VAR_12 <=
        2 * (VAR_14->vrows - VAR_8->vc_rows))
       && ((!VAR_15 && (VAR_10 - VAR_9 == VAR_8->vc_rows))
    || (VAR_15
        && (VAR_10 - VAR_9 - VAR_12 >
     3 * VAR_8->vc_rows >> 2)))) {
    if (VAR_9 > 0)
     FUNC_0(VAR_8, 0, 0, VAR_12, 0, VAR_9,
          VAR_8->vc_cols);
    FUNC_11(VAR_8, VAR_12);
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_0(VAR_8, VAR_10 - VAR_12, 0, VAR_10, 0,
          VAR_8->vc_rows - VAR_10,
          VAR_8->vc_cols);
   } else if (VAR_13->flags & VAR_2)
    FUNC_0(VAR_8, VAR_9 + VAR_12, 0, VAR_9, 0,
         VAR_10 - VAR_9 - VAR_12, VAR_8->vc_cols);
   else
    goto redraw_up;
   FUNC_1(VAR_8, VAR_10 - VAR_12, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 131:
        redraw_up:
   FUNC_4(VAR_8, VAR_14, VAR_9, VAR_10 - VAR_9 - VAR_12,
         VAR_12 * VAR_8->vc_cols);
   FUNC_1(VAR_8, VAR_10 - VAR_12, 0, VAR_12, VAR_8->vc_cols);
   FUNC_8((unsigned short *) (VAR_8->vc_origin +
       VAR_8->vc_size_row *
       (VAR_10 - VAR_12)),
        VAR_8->vc_video_erase_char,
        VAR_8->vc_size_row * VAR_12);
   return 1;
  }
  break;

 case 129:
  if (VAR_12 > VAR_8->vc_rows)
   VAR_12 = VAR_8->vc_rows;
  if (VAR_5 >= 0)
   goto redraw_down;
  switch (VAR_14->scrollmode) {
  case 134:
   FUNC_5(VAR_8, VAR_13, VAR_14, VAR_10 - 1, VAR_10 - VAR_9 - VAR_12,
         -VAR_12);
   FUNC_1(VAR_8, VAR_9, 0, VAR_12, VAR_8->vc_cols);
   FUNC_8((unsigned short *) (VAR_8->vc_origin +
       VAR_8->vc_size_row *
       VAR_9),
        VAR_8->vc_video_erase_char,
        VAR_8->vc_size_row * VAR_12);
   return 1;
   break;

  case 130:
   if (VAR_10 - VAR_9 - VAR_12 > 3 * VAR_8->vc_rows >> 2) {
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_0(VAR_8, VAR_10, 0, VAR_10 - VAR_12, 0,
          VAR_8->vc_rows - VAR_10,
          VAR_8->vc_cols);
    FUNC_13(VAR_8, VAR_12);
    if (VAR_9 > 0)
     FUNC_0(VAR_8, VAR_12, 0, 0, 0, VAR_9,
          VAR_8->vc_cols);
   } else if (VAR_13->flags & VAR_2)
    FUNC_0(VAR_8, VAR_9, 0, VAR_9 + VAR_12, 0,
         VAR_10 - VAR_9 - VAR_12, VAR_8->vc_cols);
   else
    goto redraw_down;
   FUNC_1(VAR_8, VAR_9, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 133:
   if ((VAR_12 - VAR_14->yscroll <= VAR_14->vrows - VAR_8->vc_rows)
       && ((!VAR_15 && (VAR_10 - VAR_9 == VAR_8->vc_rows))
    || (VAR_15
        && (VAR_10 - VAR_9 - VAR_12 >
     3 * VAR_8->vc_rows >> 2)))) {
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_0(VAR_8, VAR_10, 0, VAR_10 - VAR_12, 0,
          VAR_8->vc_rows - VAR_10,
          VAR_8->vc_cols);
    FUNC_9(VAR_8, VAR_12);
    if (VAR_9 > 0)
     FUNC_0(VAR_8, VAR_12, 0, 0, 0, VAR_9,
          VAR_8->vc_cols);
   } else if (VAR_13->flags & VAR_2)
    FUNC_0(VAR_8, VAR_9, 0, VAR_9 + VAR_12, 0,
         VAR_10 - VAR_9 - VAR_12, VAR_8->vc_cols);
   else
    goto redraw_down;
   FUNC_1(VAR_8, VAR_9, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 132:
   if ((VAR_12 - VAR_14->yscroll <= VAR_14->vrows - VAR_8->vc_rows)
       && ((!VAR_15 && (VAR_10 - VAR_9 == VAR_8->vc_rows))
    || (VAR_15
        && (VAR_10 - VAR_9 - VAR_12 >
     3 * VAR_8->vc_rows >> 2)))) {
    if (VAR_8->vc_rows - VAR_10 > 0)
     FUNC_6(VAR_8, VAR_14, VAR_10, VAR_8->vc_rows - VAR_10,
         VAR_10 - VAR_12);
    FUNC_10(VAR_8, VAR_9, VAR_12);
    if (VAR_9 > 0)
     FUNC_6(VAR_8, VAR_14, VAR_12, VAR_9, 0);
   } else
    FUNC_6(VAR_8, VAR_14, VAR_9, VAR_10 - VAR_9 - VAR_12, VAR_9 + VAR_12);
   FUNC_1(VAR_8, VAR_9, 0, VAR_12, VAR_8->vc_cols);
   break;

  case 131:
        redraw_down:
   FUNC_4(VAR_8, VAR_14, VAR_10 - 1, VAR_10 - VAR_9 - VAR_12,
         -VAR_12 * VAR_8->vc_cols);
   FUNC_1(VAR_8, VAR_9, 0, VAR_12, VAR_8->vc_cols);
   FUNC_8((unsigned short *) (VAR_8->vc_origin +
       VAR_8->vc_size_row *
       VAR_9),
        VAR_8->vc_video_erase_char,
        VAR_8->vc_size_row * VAR_12);
   return 1;
  }
 }
 return 0;
}
