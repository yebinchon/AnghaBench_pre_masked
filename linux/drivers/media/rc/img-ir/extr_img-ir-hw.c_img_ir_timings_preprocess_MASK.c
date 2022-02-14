
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int ft_min; } ;
struct img_ir_timings {TYPE_1__ ft; int s11; int s10; int s01; int s00; int ldr; } ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct img_ir_timings *VAR_0,
          unsigned int VAR_1)
{
 FUNC_0(&VAR_0->ldr, VAR_1);
 FUNC_0(&VAR_0->s00, VAR_1);
 FUNC_0(&VAR_0->s01, VAR_1);
 FUNC_0(&VAR_0->s10, VAR_1);
 FUNC_0(&VAR_0->s11, VAR_1);

 if (VAR_1)

  VAR_0->ft.ft_min = (VAR_0->ft.ft_min*VAR_1 + 999)/1000;
}
