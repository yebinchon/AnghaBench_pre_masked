
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_reg_timings {int rtimings; int timings; int ctrl; } ;
struct img_ir_decoder {int tolerance; int rtimings; scalar_t__ repeat; int timings; int control; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(const struct img_ir_decoder *VAR_0,
       struct img_ir_reg_timings *VAR_1,
       unsigned int VAR_2)
{

 VAR_1->ctrl = FUNC_0(&VAR_0->control);


 FUNC_1(&VAR_1->timings, &VAR_0->timings,
          VAR_0->tolerance, VAR_2);


 if (VAR_0->repeat)
  FUNC_1(&VAR_1->rtimings,
           &VAR_0->rtimings, VAR_0->tolerance,
           VAR_2);
}
