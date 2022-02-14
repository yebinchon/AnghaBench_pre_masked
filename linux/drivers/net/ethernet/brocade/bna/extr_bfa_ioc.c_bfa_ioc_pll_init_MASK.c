
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_init_sem_reg; } ;
struct bfa_ioc {int pllinit; TYPE_1__ ioc_regs; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc*) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum bfa_status
FUNC_4(struct bfa_ioc *VAR_1)
{



 FUNC_2(VAR_1->ioc_regs.ioc_init_sem_reg);

 FUNC_1(VAR_1);

 VAR_1->pllinit = 1;


 FUNC_0(VAR_1);




 FUNC_3(VAR_1->ioc_regs.ioc_init_sem_reg);

 return VAR_0;
}
