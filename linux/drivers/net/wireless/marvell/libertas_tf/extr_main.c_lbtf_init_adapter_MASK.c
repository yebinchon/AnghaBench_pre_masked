
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int driver_lock; int cmdpendingq; int cmdfreeq; int command_timer; int * vif; int lock; int current_addr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct lbtf_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct lbtf_private *VAR_2)
{
 FUNC_3(VAR_0);
 FUNC_1(VAR_2->current_addr);
 FUNC_5(&VAR_2->lock);

 VAR_2->vif = ((void*)0);
 FUNC_7(&VAR_2->command_timer, VAR_1, 0);

 FUNC_0(&VAR_2->cmdfreeq);
 FUNC_0(&VAR_2->cmdpendingq);

 FUNC_6(&VAR_2->driver_lock);


 if (FUNC_2(VAR_2))
  return -1;

 FUNC_4(VAR_0);
 return 0;
}
