
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_info {int fix; int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static inline int FUNC_4(struct fb_info *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_3(&VAR_3->var, &VAR_3->fix) == 1) {
  if (FUNC_2(VAR_4))
   VAR_5 |= VAR_2;
  if (FUNC_1(VAR_4))
   VAR_5 |= VAR_1;
  if (FUNC_0(VAR_4))
   VAR_5 |= VAR_0;
 }

 return VAR_5;
}
