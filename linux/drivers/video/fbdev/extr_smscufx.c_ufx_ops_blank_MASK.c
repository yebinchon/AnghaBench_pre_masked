
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufx_data {int dummy; } ;
struct fb_info {int var; struct ufx_data* par; } ;


 int FUNC_0 (struct ufx_data*,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct fb_info *VAR_1)
{
 struct ufx_data *VAR_2 = VAR_1->par;
 FUNC_0(VAR_2, &VAR_1->var);
 return 0;
}
