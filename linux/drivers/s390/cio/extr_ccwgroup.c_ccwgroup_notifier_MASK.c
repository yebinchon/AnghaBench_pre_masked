
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct ccwgroup_device {int ungroup_work; int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ccwgroup_device* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2, unsigned long VAR_3,
        void *VAR_4)
{
 struct ccwgroup_device *VAR_5 = FUNC_2(VAR_4);

 if (VAR_3 == VAR_0) {
  FUNC_0(&VAR_5->dev);
  FUNC_1(&VAR_5->ungroup_work);
 }

 return VAR_1;
}
