
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mx3fb_info {int mutex; int pseudo_palette; scalar_t__ cur_ipu_buf; int cookie; } ;
struct fb_ops {int dummy; } ;
struct TYPE_2__ {int activate; } ;
struct fb_info {int cmap; int pseudo_palette; int flags; struct fb_ops* fbops; TYPE_1__ var; struct mx3fb_info* par; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 struct fb_info* FUNC_1 (int,struct device*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct fb_info *FUNC_4(struct device *VAR_3, struct fb_ops *VAR_4)
{
 struct fb_info *VAR_5;
 struct mx3fb_info *VAR_6;
 int VAR_7;


 VAR_5 = FUNC_1(sizeof(struct mx3fb_info), VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = VAR_5->par;
 VAR_6->cookie = -VAR_0;
 VAR_6->cur_ipu_buf = 0;

 VAR_5->var.activate = VAR_2;

 VAR_5->fbops = VAR_4;
 VAR_5->flags = VAR_1;
 VAR_5->pseudo_palette = VAR_6->pseudo_palette;

 FUNC_3(&VAR_6->mutex);


 VAR_7 = FUNC_0(&VAR_5->cmap, 16, 0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
