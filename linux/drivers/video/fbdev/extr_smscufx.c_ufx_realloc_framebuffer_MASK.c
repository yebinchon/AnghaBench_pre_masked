
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufx_data {int dummy; } ;
struct TYPE_4__ {int smem_len; int line_length; unsigned long smem_start; } ;
struct TYPE_3__ {int yres; } ;
struct fb_info {unsigned char* screen_base; int flags; TYPE_2__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ufx_data *VAR_2, struct fb_info *VAR_3)
{
 int VAR_4 = VAR_3->fix.smem_len;
 int VAR_5;
 unsigned char *VAR_6 = VAR_3->screen_base;
 unsigned char *VAR_7;

 FUNC_2("Reallocating framebuffer. Addresses will change!");

 VAR_5 = VAR_3->fix.line_length * VAR_3->var.yres;

 if (FUNC_0(VAR_5) > VAR_4) {



  VAR_7 = FUNC_4(VAR_5);
  if (!VAR_7)
   return -VAR_0;

  if (VAR_3->screen_base) {
   FUNC_1(VAR_7, VAR_6, VAR_4);
   FUNC_3(VAR_3->screen_base);
  }

  VAR_3->screen_base = VAR_7;
  VAR_3->fix.smem_len = FUNC_0(VAR_5);
  VAR_3->fix.smem_start = (unsigned long) VAR_7;
  VAR_3->flags = VAR_1;
 }
 return 0;
}
