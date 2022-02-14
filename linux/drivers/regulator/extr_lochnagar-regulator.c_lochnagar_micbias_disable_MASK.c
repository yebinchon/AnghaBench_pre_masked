
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct lochnagar {int analogue_config_lock; } ;


 int FUNC_0 (struct lochnagar*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lochnagar* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_0)
{
 struct lochnagar *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->analogue_config_lock);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  goto err;

 VAR_2 = FUNC_0(VAR_1);

err:
 FUNC_2(&VAR_1->analogue_config_lock);

 return VAR_2;
}
