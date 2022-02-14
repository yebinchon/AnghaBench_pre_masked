
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int cmdr_lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcmu_dev*,int) ;
 int FUNC_3 (struct tcmu_dev*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct tcmu_dev *VAR_1)
{
 FUNC_0(&VAR_1->cmdr_lock);

 if (FUNC_4(VAR_0, &VAR_1->flags))
  goto unlock;


 FUNC_3(VAR_1);

 FUNC_2(VAR_1, 1);

unlock:
 FUNC_1(&VAR_1->cmdr_lock);
}
