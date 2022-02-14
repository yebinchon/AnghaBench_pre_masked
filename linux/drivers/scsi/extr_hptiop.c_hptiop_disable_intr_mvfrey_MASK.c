
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mu; } ;
struct TYPE_6__ {TYPE_2__ mvfrey; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_4__ {int pcie_f0_int_enable; int isr_enable; int f0_doorbell_enable; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct hptiop_hba *VAR_0)
{
 FUNC_1(0, &(VAR_0->u.mvfrey.mu->f0_doorbell_enable));
 FUNC_0(&(VAR_0->u.mvfrey.mu->f0_doorbell_enable));
 FUNC_1(0, &(VAR_0->u.mvfrey.mu->isr_enable));
 FUNC_0(&(VAR_0->u.mvfrey.mu->isr_enable));
 FUNC_1(0, &(VAR_0->u.mvfrey.mu->pcie_f0_int_enable));
 FUNC_0(&(VAR_0->u.mvfrey.mu->pcie_f0_int_enable));
}
