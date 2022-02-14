
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct fjes_hw {int * base; } ;


 size_t FUNC_0 (int *) ;

u32 FUNC_1(struct fjes_hw *VAR_0, u32 VAR_1)
{
 u8 *VAR_2 = VAR_0->base;
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_2[VAR_1]);

 return VAR_3;
}
