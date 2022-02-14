
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct fbcon_ops {int cur_blink_jiffies; struct fb_info* info; } ;
struct fb_info {TYPE_1__* fbops; struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {int owner; scalar_t__ (* fb_open ) (struct fb_info*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 struct fbcon_ops* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vc_data*,struct fb_info*) ;
 scalar_t__ FUNC_3 (struct fb_info*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct vc_data *VAR_5, struct fb_info *VAR_6,
      int VAR_7, int VAR_8)
{
 struct fbcon_ops *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (!FUNC_4(VAR_6->fbops->owner))
  VAR_10 = -VAR_0;

 if (!VAR_10 && VAR_6->fbops->fb_open &&
     VAR_6->fbops->fb_open(VAR_6, 0))
  VAR_10 = -VAR_0;

 if (!VAR_10) {
  VAR_9 = FUNC_0(sizeof(struct fbcon_ops), VAR_2);
  if (!VAR_9)
   VAR_10 = -VAR_1;
 }

 if (!VAR_10) {
  VAR_9->cur_blink_jiffies = VAR_3 / 5;
  VAR_9->info = VAR_6;
  VAR_6->fbcon_par = VAR_9;

  if (VAR_5)
   FUNC_2(VAR_5, VAR_6);
 }

 if (VAR_10) {
  VAR_4[VAR_7] = VAR_8;
  FUNC_1(VAR_6->fbops->owner);
 }

 return VAR_10;
}
