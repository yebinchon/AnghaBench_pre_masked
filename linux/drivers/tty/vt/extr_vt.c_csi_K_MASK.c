
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_cols; unsigned int vc_x; scalar_t__ vc_need_wrap; int vc_video_erase_char; scalar_t__ vc_pos; } ;


 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*,unsigned long,unsigned int) ;
 int FUNC_2 (unsigned short*,int ,int) ;
 int FUNC_3 (struct vc_data*,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 unsigned short *VAR_3 = (unsigned short *)VAR_0->vc_pos;
 int VAR_4;

 switch (VAR_1) {
  case 0:
   VAR_4 = 0;
   VAR_2 = VAR_0->vc_cols - VAR_0->vc_x;
   break;
  case 1:
   VAR_4 = -VAR_0->vc_x;
   VAR_2 = VAR_0->vc_x + 1;
   break;
  case 2:
   VAR_4 = -VAR_0->vc_x;
   VAR_2 = VAR_0->vc_cols;
   break;
  default:
   return;
 }
 FUNC_3(VAR_0, VAR_0->vc_x + VAR_4, VAR_2);
 FUNC_2(VAR_3 + VAR_4, VAR_0->vc_video_erase_char, 2 * VAR_2);
 VAR_0->vc_need_wrap = 0;
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, (unsigned long)(VAR_3 + VAR_4), VAR_2);
}
