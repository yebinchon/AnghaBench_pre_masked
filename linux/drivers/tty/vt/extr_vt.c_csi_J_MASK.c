
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_x; unsigned int vc_cols; unsigned int vc_y; unsigned int vc_rows; int vc_scr_end; int vc_pos; int vc_origin; scalar_t__ vc_need_wrap; int vc_video_erase_char; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*,unsigned long,unsigned int) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (unsigned short*,int ,int) ;
 int FUNC_4 (struct vc_data*,unsigned int,unsigned int) ;
 int FUNC_5 (struct vc_data*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 unsigned short * VAR_3;

 switch (VAR_1) {
  case 0:
   FUNC_4(VAR_0, VAR_0->vc_x,
          VAR_0->vc_cols - VAR_0->vc_x);
   FUNC_5(VAR_0, VAR_0->vc_y + 1,
           VAR_0->vc_rows - VAR_0->vc_y - 1);
   VAR_2 = (VAR_0->vc_scr_end - VAR_0->vc_pos) >> 1;
   VAR_3 = (unsigned short *)VAR_0->vc_pos;
   break;
  case 1:
   FUNC_4(VAR_0, 0, VAR_0->vc_x + 1);
   FUNC_5(VAR_0, 0, VAR_0->vc_y);
   VAR_2 = ((VAR_0->vc_pos - VAR_0->vc_origin) >> 1) + 1;
   VAR_3 = (unsigned short *)VAR_0->vc_origin;
   break;
  case 3:
   FUNC_2(VAR_0);

  case 2:
   FUNC_5(VAR_0, 0, VAR_0->vc_rows);
   VAR_2 = VAR_0->vc_cols * VAR_0->vc_rows;
   VAR_3 = (unsigned short *)VAR_0->vc_origin;
   break;
  default:
   return;
 }
 FUNC_3(VAR_3, VAR_0->vc_video_erase_char, 2 * VAR_2);
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, (unsigned long) VAR_3, VAR_2);
 VAR_0->vc_need_wrap = 0;
}
