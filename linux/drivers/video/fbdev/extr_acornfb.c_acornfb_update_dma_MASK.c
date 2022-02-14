
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct fb_var_screeninfo {int yoffset; } ;
struct TYPE_2__ {int line_length; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct fb_info *VAR_2, struct fb_var_screeninfo *VAR_3)
{
 u_int VAR_4 = VAR_3->yoffset * VAR_2->fix.line_length;






}
