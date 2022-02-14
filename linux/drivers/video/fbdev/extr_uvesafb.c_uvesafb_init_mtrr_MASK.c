
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvesafb_par {int mtrr_handle; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_3)
{
 struct uvesafb_par *VAR_4 = VAR_3->par;

 if (VAR_2 && !(VAR_3->fix.smem_start & (VAR_1 - 1))) {
  int VAR_5 = VAR_3->fix.smem_len;

  int VAR_6;


  VAR_5 = FUNC_1(VAR_5);


  do {
   VAR_6 = FUNC_0(VAR_3->fix.smem_start, VAR_5);
   VAR_5 >>= 1;
  } while (VAR_5 >= VAR_1 && VAR_6 == -VAR_0);

  if (VAR_6 >= 0)
   VAR_4->mtrr_handle = VAR_6;
 }
}
