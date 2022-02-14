
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct fb_info {TYPE_1__* fbops; } ;
struct TYPE_2__ {int (* fb_setcolreg ) (int,int,int,int,int,struct fb_info*) ;} ;


 int FUNC_0 (int,int,int,int,int,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
      u_int VAR_4, struct fb_info *VAR_5)
{
 VAR_1 >>= 8;
 VAR_2 >>= 8;
 VAR_3 >>= 8;

 return VAR_5->fbops->fb_setcolreg(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
