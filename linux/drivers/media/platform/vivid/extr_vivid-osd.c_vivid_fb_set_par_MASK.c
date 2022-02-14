
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int dummy; } ;
struct fb_info {int fix; int var; scalar_t__ par; } ;


 int FUNC_0 (struct vivid_dev*,int,char*) ;
 int FUNC_1 (struct vivid_dev*,int *) ;
 int FUNC_2 (struct vivid_dev*,int *) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_0)
{
 int VAR_1 = 0;
 struct vivid_dev *VAR_2 = (struct vivid_dev *) VAR_0->par;

 FUNC_0(VAR_2, 1, "vivid_fb_set_par\n");

 VAR_1 = FUNC_2(VAR_2, &VAR_0->var);
 FUNC_1(VAR_2, &VAR_0->fix);
 return VAR_1;
}
