
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct arcfb_par* par; } ;
struct arcfb_par {int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1, int VAR_2)
{
 struct arcfb_par *VAR_3 = VAR_1->par;
 int VAR_4 = FUNC_1(&VAR_3->ref_count);

 if (!VAR_4)
  return -VAR_0;
 FUNC_0(&VAR_3->ref_count);
 return 0;
}
