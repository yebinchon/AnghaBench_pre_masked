
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_battery {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (struct da9052_battery*,int*) ;
 int FUNC_3 (int) ;
 int*** VAR_2 ;

__attribute__((used)) static int FUNC_4(struct da9052_battery *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_5 = FUNC_0(VAR_3->da9052);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_13 = FUNC_3(VAR_5);

 if (VAR_6 >= VAR_2[VAR_13][0][0]) {
  *VAR_4 = 100;
  return 0;
 }
 if (VAR_6 <= VAR_2[VAR_13][VAR_0 - 1][0]) {
  *VAR_4 = 0;
  return 0;
 }
 VAR_12 = 0;

 for (VAR_14 = 0; VAR_14 < (VAR_0-1); VAR_14++) {
  if ((VAR_6 <= VAR_2[VAR_13][VAR_14][0]) &&
      (VAR_6 >= VAR_2[VAR_13][VAR_14 + 1][0])) {
   VAR_8 = VAR_2[VAR_13][VAR_14][0];
   VAR_7 = VAR_2[VAR_13][VAR_14 + 1][0];
   VAR_9 = VAR_2[VAR_13][VAR_14][1];
   VAR_10 = VAR_2[VAR_13][VAR_14 + 1][1];
   VAR_12 = 1;
   break;
  }
 }
 if (!VAR_12)
  return -VAR_1;

 *VAR_4 = FUNC_1(VAR_7, VAR_8, VAR_10,
        VAR_9, VAR_6);

 return 0;
}
