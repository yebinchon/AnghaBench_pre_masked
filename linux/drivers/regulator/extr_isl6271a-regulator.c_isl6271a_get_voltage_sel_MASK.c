
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct isl_pmic {int mtx; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct isl_pmic* FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_0)
{
 struct isl_pmic *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->mtx);

 VAR_2 = FUNC_1(VAR_1->client);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->client->dev, "Error getting voltage\n");

 FUNC_3(&VAR_1->mtx);
 return VAR_2;
}
