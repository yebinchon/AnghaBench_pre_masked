
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int (* putcs ) (struct vc_data*,struct fb_info*,unsigned short const*,int,int ,int,int ,int ) ;} ;
struct fbcon_display {int dummy; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 size_t* VAR_0 ;
 struct fbcon_display* VAR_1 ;
 int FUNC_0 (struct vc_data*,struct fb_info*) ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int ,int) ;
 int FUNC_2 (struct fbcon_display*,int) ;
 struct fb_info** VAR_2 ;
 int FUNC_3 (unsigned short const*) ;
 int FUNC_4 (struct vc_data*,struct fb_info*,unsigned short const*,int,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_3, const unsigned short *VAR_4,
   int VAR_5, int VAR_6, int VAR_7)
{
 struct fb_info *VAR_8 = VAR_2[VAR_0[VAR_3->vc_num]];
 struct fbcon_display *VAR_9 = &VAR_1[VAR_3->vc_num];
 struct fbcon_ops *VAR_10 = VAR_8->fbcon_par;

 if (!FUNC_0(VAR_3, VAR_8))
  VAR_10->putcs(VAR_3, VAR_8, VAR_4, VAR_5, FUNC_2(VAR_9, VAR_6), VAR_7,
      FUNC_1(VAR_3, VAR_8, FUNC_3(VAR_4), 1),
      FUNC_1(VAR_3, VAR_8, FUNC_3(VAR_4), 0));
}
