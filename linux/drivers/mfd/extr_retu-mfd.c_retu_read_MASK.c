
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct retu_dev {int mutex; int regmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;

int FUNC_3(struct retu_dev *VAR_0, u8 VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->mutex);
 VAR_2 = FUNC_2(VAR_0->regmap, VAR_1, &VAR_3);
 FUNC_1(&VAR_0->mutex);

 return VAR_2 ? VAR_2 : VAR_3;
}
