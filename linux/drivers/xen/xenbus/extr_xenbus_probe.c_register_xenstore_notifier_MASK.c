
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int (* notifier_call ) (struct notifier_block*,int ,int *) ;} ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (struct notifier_block*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_2(struct notifier_block *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1 > 0)
  VAR_3 = VAR_2->notifier_call(VAR_2, 0, ((void*)0));
 else
  FUNC_0(&VAR_0, VAR_2);

 return VAR_3;
}
