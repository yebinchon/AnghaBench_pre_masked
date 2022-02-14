
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int (* bmove ) (struct vc_data*,struct fb_info*,int ,int,int ,int,int,int) ;} ;
struct fbcon_display {int dummy; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct fbcon_display*,int) ;
 struct fb_info** VAR_1 ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int ,int,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2, struct fbcon_display *VAR_3, int VAR_4, int VAR_5,
       int VAR_6, int VAR_7, int VAR_8, int VAR_9, u_int VAR_10)
{
 struct fb_info *VAR_11 = VAR_1[VAR_0[VAR_2->vc_num]];
 struct fbcon_ops *VAR_12 = VAR_11->fbcon_par;
 u_int VAR_13;

 if (VAR_4 < VAR_10 && VAR_4 + VAR_8 > VAR_10) {
  VAR_13 = VAR_10 - VAR_4;
  if (VAR_6 < VAR_4) {
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_13, VAR_9,
     VAR_10);
   FUNC_2(VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5, VAR_6 + VAR_13, VAR_7,
     VAR_8 - VAR_13, VAR_9, VAR_10);
  } else {
   FUNC_2(VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5, VAR_6 + VAR_13, VAR_7,
     VAR_8 - VAR_13, VAR_9, VAR_10);
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_13, VAR_9,
     VAR_10);
  }
  return;
 }

 if (VAR_6 < VAR_10 && VAR_6 + VAR_8 > VAR_10) {
  VAR_13 = VAR_10 - VAR_6;
  if (VAR_6 < VAR_4) {
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_13, VAR_9,
     VAR_10);
   FUNC_2(VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5, VAR_6 + VAR_13, VAR_7,
     VAR_8 - VAR_13, VAR_9, VAR_10);
  } else {
   FUNC_2(VAR_2, VAR_3, VAR_4 + VAR_13, VAR_5, VAR_6 + VAR_13, VAR_7,
     VAR_8 - VAR_13, VAR_9, VAR_10);
   FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_13, VAR_9,
     VAR_10);
  }
  return;
 }
 VAR_12->bmove(VAR_2, VAR_11, FUNC_0(VAR_3, VAR_4), VAR_5, FUNC_0(VAR_3, VAR_6), VAR_7,
     VAR_8, VAR_9);
}
