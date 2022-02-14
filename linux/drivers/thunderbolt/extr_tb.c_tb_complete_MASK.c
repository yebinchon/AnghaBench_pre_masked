
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int lock; int root_switch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tb *VAR_0)
{





 FUNC_0(&VAR_0->lock);
 if (FUNC_2(VAR_0->root_switch))
  FUNC_3(VAR_0->root_switch);
 FUNC_1(&VAR_0->lock);
}
