
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {int next_uframe; TYPE_1__* regs; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxu_hcd*,int *,int ,int ,int) ;
 TYPE_2__* FUNC_1 (struct oxu_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct oxu_hcd *VAR_3)
{
 u32 VAR_4;
 int VAR_5;




 VAR_5 = FUNC_0(VAR_3, &VAR_3->regs->status, VAR_2, VAR_2, 9 * 125);
 if (VAR_5 != 0) {
  FUNC_1(VAR_3)->state = VAR_1;
  FUNC_3(FUNC_1(VAR_3));
  return VAR_5;
 }

 VAR_4 = FUNC_2(&VAR_3->regs->command) & ~VAR_0;
 FUNC_4(VAR_4, &VAR_3->regs->command);


 VAR_3->next_uframe = -1;
 return 0;
}
