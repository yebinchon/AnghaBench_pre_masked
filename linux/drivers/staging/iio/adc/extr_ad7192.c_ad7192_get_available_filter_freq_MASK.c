
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7192_state {unsigned int fclk; int mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct ad7192_state *VAR_2,
          int *VAR_3)
{
 unsigned int VAR_4;


 VAR_4 = FUNC_1(VAR_2->fclk,
     VAR_1 * FUNC_0(VAR_2->mode));
 VAR_3[0] = FUNC_1(VAR_4 * 240, 1024);

 VAR_4 = FUNC_1(VAR_2->fclk,
     VAR_0 * FUNC_0(VAR_2->mode));
 VAR_3[1] = FUNC_1(VAR_4 * 240, 1024);

 VAR_4 = FUNC_1(VAR_2->fclk, FUNC_0(VAR_2->mode));
 VAR_3[2] = FUNC_1(VAR_4 * 230, 1024);
 VAR_3[3] = FUNC_1(VAR_4 * 272, 1024);
}
