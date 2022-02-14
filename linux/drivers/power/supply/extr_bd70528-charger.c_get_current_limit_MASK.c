
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_psy {int dev; int regmap; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,unsigned int,int*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct bd70528_psy *VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3->regmap, VAR_1,
     &VAR_5);

 if (VAR_6) {
  FUNC_1(VAR_3->dev,
   "Input current limit reading failed (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_5 &= VAR_0;

 VAR_6 = FUNC_2(&VAR_2[0],
       FUNC_0(VAR_2), VAR_5,
       VAR_4);

 if (VAR_6) {

  *VAR_4 = 500;
 }
 return 0;
}
