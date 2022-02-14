
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fman_port {TYPE_2__* bmi_regs; } ;
struct TYPE_3__ {int fmbm_rfpne; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct fman_port *VAR_3, bool VAR_4)
{
 if (VAR_4)

  FUNC_0(VAR_2, &VAR_3->bmi_regs->rx.fmbm_rfpne);
 else

  FUNC_0(VAR_1 | VAR_0,
       &VAR_3->bmi_regs->rx.fmbm_rfpne);
}
