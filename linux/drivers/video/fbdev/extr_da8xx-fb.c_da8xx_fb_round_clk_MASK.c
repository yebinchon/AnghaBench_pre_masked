
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_fb_par {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct da8xx_fb_par*,unsigned int,unsigned int*) ;

__attribute__((used)) static unsigned FUNC_2(struct da8xx_fb_par *VAR_0,
       unsigned VAR_1)
{
 unsigned VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 return FUNC_0(VAR_3 / (1000 * VAR_2));
}
