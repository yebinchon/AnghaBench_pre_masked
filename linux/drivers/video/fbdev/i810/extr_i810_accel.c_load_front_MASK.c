
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; } ;
struct i810fb_par {int pitch; TYPE_1__ fb; } ;
struct fb_info {struct i810fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct fb_info*,scalar_t__) ;
 int FUNC_2 (struct i810fb_par*) ;

__attribute__((used)) static inline void FUNC_3(int VAR_5, struct fb_info *VAR_6)
{
 struct i810fb_par *VAR_7 = VAR_6->par;

 if (FUNC_1(VAR_6, 8 + VAR_2)) return;

 FUNC_0(VAR_4 | VAR_0);
 FUNC_0(VAR_3);

 FUNC_2(VAR_7);

 if (FUNC_1(VAR_6, 8 + VAR_2)) return;

 FUNC_0(VAR_4 | VAR_1 | ((VAR_7->pitch >> 3) << 8));
 FUNC_0((VAR_7->fb.offset << 12) + VAR_5);

 FUNC_2(VAR_7);
}
