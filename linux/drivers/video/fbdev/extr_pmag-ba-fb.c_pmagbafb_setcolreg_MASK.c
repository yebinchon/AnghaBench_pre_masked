
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmagbafb_par {int dummy; } ;
struct TYPE_2__ {unsigned int len; } ;
struct fb_info {TYPE_1__ cmap; struct pmagbafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pmagbafb_par*,int ,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_3, unsigned int VAR_4,
         unsigned int VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, struct fb_info *VAR_8)
{
 struct pmagbafb_par *VAR_9 = VAR_8->par;

 if (VAR_3 >= VAR_8->cmap.len)
  return 1;

 VAR_4 >>= 8;
 VAR_5 >>= 8;
 VAR_6 >>= 8;

 FUNC_1();
 FUNC_0(VAR_9, VAR_1, VAR_3);
 FUNC_0(VAR_9, VAR_0, 0x00);
 FUNC_2();
 FUNC_0(VAR_9, VAR_2, VAR_4);
 FUNC_2();
 FUNC_0(VAR_9, VAR_2, VAR_5);
 FUNC_2();
 FUNC_0(VAR_9, VAR_2, VAR_6);

 return 0;
}
