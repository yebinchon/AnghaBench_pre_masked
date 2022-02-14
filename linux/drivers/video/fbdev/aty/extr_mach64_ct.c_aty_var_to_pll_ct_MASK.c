
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aty_pll {int ct; } ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info const*,int ,int *) ;
 int FUNC_2 (struct fb_info const*,int ,int *) ;

__attribute__((used)) static int FUNC_3(const struct fb_info *VAR_1, u32 VAR_2, u32 VAR_3, union aty_pll *VAR_4)
{
 struct atyfb_par *VAR_5 = (struct atyfb_par *) VAR_1->par;
 int VAR_6;

 if ((VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_4->ct)))
  return VAR_6;
 if (FUNC_0(VAR_0) && (VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_4->ct)))
  return VAR_6;

 return 0;
}
