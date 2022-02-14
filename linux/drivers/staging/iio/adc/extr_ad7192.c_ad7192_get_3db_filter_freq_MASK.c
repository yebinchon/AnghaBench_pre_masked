
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7192_state {unsigned int fclk; int f_order; int mode; int conf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct ad7192_state *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_2->fclk,
     VAR_2->f_order * FUNC_0(VAR_2->mode));

 if (VAR_2->conf & VAR_0)
  return FUNC_1(VAR_3 * 240, 1024);
 if (VAR_2->mode & VAR_1)
  return FUNC_1(VAR_3 * 272, 1024);
 else
  return FUNC_1(VAR_3 * 230, 1024);
}
