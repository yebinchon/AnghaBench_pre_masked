
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 struct fb_info** VAR_1 ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_2)
{
 int VAR_3 = VAR_2->node;

 if (FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0 || VAR_1[VAR_3] != VAR_2))
  return;

 FUNC_1();
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_2();
}
