
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynxfb_output {int (* proc_setBLANK ) (struct lynxfb_output*,int) ;} ;
struct lynxfb_par {struct lynxfb_output output; } ;
struct fb_info {struct lynxfb_par* par; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lynxfb_output*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct fb_info *VAR_1)
{
 struct lynxfb_par *VAR_2;
 struct lynxfb_output *VAR_3;

 FUNC_0("blank = %d.\n", VAR_0);
 VAR_2 = VAR_1->par;
 VAR_3 = &VAR_2->output;
 return VAR_3->proc_setBLANK(VAR_3, VAR_0);
}
