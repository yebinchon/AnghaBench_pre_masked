
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;
struct fb_info {int fix; int var; scalar_t__ par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ivtv*,char*) ;
 int FUNC_2 (struct ivtv*,int *) ;
 int FUNC_3 (int *,struct fb_info*) ;
 int FUNC_4 (struct ivtv*,int *) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_0)
{
 int VAR_1 = 0;
 struct ivtv *VAR_2 = (struct ivtv *) VAR_0->par;

 FUNC_0("ivtvfb_set_par\n");

 VAR_1 = FUNC_4(VAR_2, &VAR_0->var);
 FUNC_3(&VAR_0->var, VAR_0);
 FUNC_2(VAR_2, &VAR_0->fix);
 FUNC_1(VAR_2, "ivtvfb_set_par");
 return VAR_1;
}
