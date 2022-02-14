
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_psy {int dev; int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct bd70528_psy *VAR_2, int *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "DC1 IN state read failure %d\n",
   VAR_4);
  return VAR_4;
 }

 *VAR_3 = (VAR_5 & VAR_0) ? 1 : 0;

 return 0;
}
