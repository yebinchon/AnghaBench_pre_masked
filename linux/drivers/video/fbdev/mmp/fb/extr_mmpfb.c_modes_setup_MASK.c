
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmpfb_info {int path; int mode; int output_fmt; int dev; struct fb_info* fb_info; } ;
struct mmp_mode {int pix_fmt_out; } ;
struct fb_videomode {int dummy; } ;
struct fb_info {int var; int modelist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fb_videomode*,int,int *) ;
 int FUNC_2 (int *,int *) ;
 struct fb_videomode* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct fb_videomode*) ;
 int FUNC_5 (int *,struct fb_videomode*,int) ;
 int FUNC_6 (int ,struct mmp_mode**) ;
 int FUNC_7 (int ,struct mmp_mode*) ;
 int FUNC_8 (struct fb_videomode*,struct mmp_mode*) ;

__attribute__((used)) static int FUNC_9(struct mmpfb_info *VAR_2)
{
 struct fb_videomode *VAR_3;
 struct mmp_mode *VAR_4;
 struct fb_info *VAR_5 = VAR_2->fb_info;
 int VAR_6, VAR_7;


 VAR_6 = FUNC_6(VAR_2->path, &VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_2->dev, "can't get videomode num\n");
  return 0;
 }

 VAR_3 = FUNC_3(VAR_6, sizeof(struct fb_videomode),
        VAR_1);
 if (!VAR_3)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_8(&VAR_3[VAR_7], &VAR_4[VAR_7]);
 FUNC_1(VAR_3, VAR_6, &VAR_5->modelist);


 FUNC_5(&VAR_2->mode, &VAR_3[0], sizeof(struct fb_videomode));
 VAR_2->output_fmt = VAR_4[0].pix_fmt_out;
 FUNC_2(&VAR_5->var, &VAR_2->mode);
 FUNC_7(VAR_2->path, &VAR_4[0]);

 FUNC_4(VAR_3);
 return VAR_6;
}
