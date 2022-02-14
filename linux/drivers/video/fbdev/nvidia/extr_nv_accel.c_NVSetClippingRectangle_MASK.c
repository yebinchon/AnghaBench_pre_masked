
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int dummy; } ;
struct fb_info {struct nvidia_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvidia_par*,int) ;
 int FUNC_1 (struct fb_info*,struct nvidia_par*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1, int VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 struct nvidia_par *VAR_6 = VAR_1->par;
 int VAR_7 = VAR_5 - VAR_3 + 1;
 int VAR_8 = VAR_4 - VAR_2 + 1;

 FUNC_1(VAR_1, VAR_6, VAR_0, 2);
 FUNC_0(VAR_6, (VAR_3 << 16) | VAR_2);
 FUNC_0(VAR_6, (VAR_7 << 16) | VAR_8);
}
