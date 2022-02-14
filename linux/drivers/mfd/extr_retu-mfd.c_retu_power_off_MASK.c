
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retu_dev {int mutex; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;
 struct retu_dev* VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
 struct retu_dev *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_1(&VAR_2->mutex);


 FUNC_3(VAR_3->regmap, VAR_0, &VAR_4);
 FUNC_4(VAR_3->regmap, VAR_0, VAR_4 | 2);


 FUNC_4(VAR_3->regmap, VAR_1, 0);


 for (;;)
  FUNC_0();

 FUNC_2(&VAR_2->mutex);
}
