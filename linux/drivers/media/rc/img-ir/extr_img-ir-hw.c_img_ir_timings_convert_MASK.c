
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_timings {int ft; int s11; int s10; int s01; int s00; int ldr; } ;
struct img_ir_timing_regvals {int ft; void* s11; void* s10; void* s01; void* s00; void* ldr; } ;


 int FUNC_0 (int *,unsigned int) ;
 void* FUNC_1 (int *,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2(struct img_ir_timing_regvals *VAR_0,
       const struct img_ir_timings *VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{

 VAR_0->ldr = FUNC_1(&VAR_1->ldr, VAR_2, VAR_3,
   4, 4);

 VAR_0->s00 = FUNC_1(&VAR_1->s00, VAR_2, VAR_3,
   1, 0);
 VAR_0->s01 = FUNC_1(&VAR_1->s01, VAR_2, VAR_3,
   1, 0);
 VAR_0->s10 = FUNC_1(&VAR_1->s10, VAR_2, VAR_3,
   1, 0);
 VAR_0->s11 = FUNC_1(&VAR_1->s11, VAR_2, VAR_3,
   1, 0);
 VAR_0->ft = FUNC_0(&VAR_1->ft, VAR_3);
}
