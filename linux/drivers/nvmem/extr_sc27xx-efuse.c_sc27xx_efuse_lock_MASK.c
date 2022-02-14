
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_efuse {int mutex; int dev; int hwlock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sc27xx_efuse *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->mutex);

 VAR_2 = FUNC_1(VAR_1->hwlock,
          VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "timeout to get the hwspinlock\n");
  FUNC_3(&VAR_1->mutex);
  return VAR_2;
 }

 return 0;
}
