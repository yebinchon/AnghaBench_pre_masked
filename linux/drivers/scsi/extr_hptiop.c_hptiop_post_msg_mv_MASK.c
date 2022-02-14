
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {TYPE_2__* regs; TYPE_1__* mu; } ;
struct TYPE_8__ {TYPE_3__ mv; } ;
struct hptiop_hba {TYPE_4__ u; } ;
struct TYPE_6__ {int inbound_doorbell; } ;
struct TYPE_5__ {int inbound_msg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct hptiop_hba *VAR_1, u32 VAR_2)
{
 FUNC_1(VAR_2, &VAR_1->u.mv.mu->inbound_msg);
 FUNC_1(VAR_0, &VAR_1->u.mv.regs->inbound_doorbell);
 FUNC_0(&VAR_1->u.mv.regs->inbound_doorbell);
}
