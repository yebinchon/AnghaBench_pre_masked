
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk808 {int regmap; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct rk808* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_3;
 struct rk808 *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return;

 VAR_3 = FUNC_2(VAR_4->regmap,
     VAR_1,
     VAR_0, VAR_0);
 if (VAR_3)
  FUNC_0(&VAR_2->dev, "Failed to shutdown device!\n");
}
