
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** args; } ;
struct fimc_is {int irq_queue; TYPE_1__ i2h_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fimc_is*,int ) ;
 int FUNC_2 (struct fimc_is*) ;
 void* FUNC_3 (struct fimc_is*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fimc_is *VAR_1)
{
 VAR_1->i2h_cmd.args[0] = FUNC_3(VAR_1, FUNC_0(20));
 VAR_1->i2h_cmd.args[1] = FUNC_3(VAR_1, FUNC_0(21));

 FUNC_1(VAR_1, VAR_0);
 FUNC_2(VAR_1);

 FUNC_4(&VAR_1->irq_queue);
}
