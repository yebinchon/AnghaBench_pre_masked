
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x_func_state_params {int cmd; int ramrod_flags; int * f_obj; int * member_0; } ;
struct TYPE_4__ {int pmf; } ;
struct bnx2x {int flags; int func_obj; TYPE_3__* pdev; TYPE_2__* msix_table; TYPE_1__ port; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int vector; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct bnx2x*,int *) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_func_state_params*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct bnx2x *VAR_9)
{
 int VAR_10 = 50;
 int VAR_11 = (VAR_9->flags & VAR_6) ? 1 : 0;

 if (!VAR_9->port.pmf)
  return 0;
 if (VAR_11)
  FUNC_7(VAR_9->msix_table[0].vector);
 else
  FUNC_7(VAR_9->pdev->irq);

 FUNC_5(VAR_8);
 FUNC_5(VAR_7);

 while (FUNC_3(VAR_9, &VAR_9->func_obj) !=
    VAR_2 && VAR_10--)
  FUNC_6(20);

 if (FUNC_3(VAR_9, &VAR_9->func_obj) !=
      VAR_2) {
  struct bnx2x_func_state_params VAR_12 = {((void*)0)};

  FUNC_1(VAR_4,
     "Hmmm... Unexpected function state! Forcing STARTED-->TX_STOPPED-->STARTED\n");

  VAR_12.f_obj = &VAR_9->func_obj;
  FUNC_2(VAR_5,
     &VAR_12.ramrod_flags);


  VAR_12.cmd = VAR_1;
  FUNC_4(VAR_9, &VAR_12);


  VAR_12.cmd = VAR_0;
  return FUNC_4(VAR_9, &VAR_12);

 }

 return 0;
}
