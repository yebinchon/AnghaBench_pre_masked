
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk808 {int regmap; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct rk808* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4;
 struct rk808 *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5)
  return;

 VAR_4 = FUNC_2(VAR_5->regmap,
     VAR_0,
     VAR_2, VAR_1);
 if (VAR_4)
  FUNC_0(&VAR_3->dev, "Failed to shutdown device!\n");
}
