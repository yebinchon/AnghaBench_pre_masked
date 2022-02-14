
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh7760fb_par {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sh7760fb_par *VAR_2, int VAR_3)
{
 int VAR_4 = 100;
 while (--VAR_4 && ((FUNC_0(VAR_2->base + VAR_1) & 3) != VAR_3))
  FUNC_1(1);

 if (VAR_4 <= 0)
  return -VAR_0;

 return 0;
}
