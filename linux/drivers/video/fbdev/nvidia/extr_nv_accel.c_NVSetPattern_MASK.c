
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int dummy; } ;
struct fb_info {struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,int ) ;
 int FUNC_1 (struct fb_info*,struct nvidia_par*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1, u32 VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 struct nvidia_par *VAR_6 = VAR_1->par;

 FUNC_1(VAR_1, VAR_6, VAR_0, 4);
 FUNC_0(VAR_6, VAR_2);
 FUNC_0(VAR_6, VAR_3);
 FUNC_0(VAR_6, VAR_4);
 FUNC_0(VAR_6, VAR_5);
}
