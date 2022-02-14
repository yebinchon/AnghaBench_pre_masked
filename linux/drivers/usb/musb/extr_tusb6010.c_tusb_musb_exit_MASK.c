
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int xceiv; int sync_va; int (* board_set_power ) (int ) ;int dev_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct musb *VAR_1)
{
 FUNC_0(&VAR_1->dev_timer);
 VAR_0 = ((void*)0);

 if (VAR_1->board_set_power)
  VAR_1->board_set_power(0);

 FUNC_1(VAR_1->sync_va);

 FUNC_3(VAR_1->xceiv);
 return 0;
}
