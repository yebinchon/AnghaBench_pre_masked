
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_u3d_ep {int * ep_context; struct mv_u3d* u3d; } ;
struct mv_u3d {TYPE_2__* vuc_regs; int * ep_context; struct mv_u3d_ep* eps; } ;
struct TYPE_4__ {TYPE_1__* epcr; } ;
struct TYPE_3__ {int epxincr1; int epxincr0; int epxoutcr1; int epxoutcr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mv_u3d *VAR_6)
{
 struct mv_u3d_ep *VAR_7;
 u32 VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_7 = &VAR_6->eps[VAR_9];
  VAR_7->u3d = VAR_6;


  VAR_7->ep_context = &VAR_6->ep_context[1];
 }



 VAR_8 = FUNC_0(&VAR_6->vuc_regs->epcr[0].epxoutcr0);
 VAR_8 |= VAR_2;
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxoutcr0);
 FUNC_2(5);
 VAR_8 &= ~VAR_2;
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxoutcr0);

 VAR_8 = ((VAR_0
  << VAR_5)
  | (1 << VAR_4)
  | (1 << VAR_1)
  | VAR_3);
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxoutcr1);


 VAR_8 = FUNC_0(&VAR_6->vuc_regs->epcr[0].epxincr0);
 VAR_8 |= VAR_2;
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxincr0);
 FUNC_2(5);
 VAR_8 &= ~VAR_2;
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxincr0);

 VAR_8 = ((VAR_0
  << VAR_5)
  | (1 << VAR_4)
  | (1 << VAR_1)
  | VAR_3);
 FUNC_1(VAR_8, &VAR_6->vuc_regs->epcr[0].epxincr1);
}
