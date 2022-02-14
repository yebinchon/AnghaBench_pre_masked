
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fb_info {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct fb_info*,unsigned int,unsigned long) ;
 struct fb_info* FUNC_1 (struct file*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4)
  return -VAR_0;
 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
