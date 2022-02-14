
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int yres; int xres_virtual; int yres_virtual; } ;
struct device_node {int dummy; } ;


 char* FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static void FUNC_2(struct fb_var_screeninfo *VAR_0,
        struct device_node *VAR_1)
{
 const char *VAR_2;
 char *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_0(VAR_1, "params", ((void*)0));
 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_2, &VAR_3, 10);
  if (VAR_4 && *VAR_3 == 'x') {
   VAR_5 = FUNC_1(VAR_3 + 1, &VAR_3, 10);
   if (VAR_5 && *VAR_3 == '-') {
    if (VAR_0->xres != VAR_4 ||
        VAR_0->yres != VAR_5) {
     VAR_0->xres = VAR_0->xres_virtual = VAR_4;
     VAR_0->yres = VAR_0->yres_virtual = VAR_5;
    }
   }
  }
 }
}
