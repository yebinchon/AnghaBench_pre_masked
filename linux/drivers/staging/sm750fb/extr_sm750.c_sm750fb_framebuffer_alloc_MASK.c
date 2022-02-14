
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm750_dev {int fb_count; struct fb_info** fbinfo; TYPE_1__* pdev; } ;
struct lynxfb_par {struct sm750_dev* dev; } ;
struct fb_info {struct lynxfb_par* par; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (int,int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*,int) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static int FUNC_4(struct sm750_dev *VAR_1, int VAR_2)
{
 struct fb_info *VAR_3;
 struct lynxfb_par *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(sizeof(struct lynxfb_par),
        &VAR_1->pdev->dev);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->fbinfo[VAR_2] = VAR_3;
 VAR_4 = VAR_3->par;
 VAR_4->dev = VAR_1;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5)
  goto release_fb;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0)
  goto release_fb;

 VAR_1->fb_count++;

 return 0;

release_fb:
 FUNC_1(VAR_3);
 return VAR_5;
}
