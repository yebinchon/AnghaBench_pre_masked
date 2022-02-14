
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (struct fb_info*) ;

void FUNC_3(struct fb_info *VAR_2, int VAR_3)
{
 FUNC_0();

 if (VAR_3) {
  FUNC_2(VAR_2);
  VAR_2->state = VAR_1;
 } else {
  VAR_2->state = VAR_0;
  FUNC_1(VAR_2);
 }
}
