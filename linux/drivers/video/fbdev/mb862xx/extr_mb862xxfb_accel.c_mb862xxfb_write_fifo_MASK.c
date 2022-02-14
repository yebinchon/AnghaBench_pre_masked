
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mb862xxfb_par {int dummy; } ;
struct fb_info {struct mb862xxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,size_t) ;

__attribute__((used)) static void FUNC_2(u32 VAR_4, u32 *VAR_5, struct fb_info *VAR_6)
{
 struct mb862xxfb_par *VAR_7 = VAR_6->par;
 static u32 VAR_8;

 u32 VAR_9 = 0;
 while (VAR_9 < VAR_4) {
  if (VAR_8) {
   FUNC_1(VAR_3, VAR_0, VAR_5[VAR_9]);
   VAR_9++;
   VAR_8--;
  } else {
   VAR_8 = (u32) FUNC_0(VAR_2, VAR_1);
  }
 }
}
