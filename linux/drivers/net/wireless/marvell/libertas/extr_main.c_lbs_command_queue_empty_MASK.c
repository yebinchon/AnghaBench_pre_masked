
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int driver_lock; int cmdpendingq; int * cur_cmd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct lbs_private *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;
 FUNC_1(&VAR_0->driver_lock, VAR_1);
 VAR_2 = VAR_0->cur_cmd == ((void*)0) && FUNC_0(&VAR_0->cmdpendingq);
 FUNC_2(&VAR_0->driver_lock, VAR_1);
 return VAR_2;
}
