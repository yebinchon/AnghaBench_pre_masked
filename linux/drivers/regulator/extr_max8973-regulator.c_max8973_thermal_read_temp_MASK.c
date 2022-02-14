
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8973_chip {int junction_temp_warning; int dev; int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, int *VAR_4)
{
 struct max8973_chip *VAR_5 = VAR_3;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_2, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "Failed to read register CHIPID1, %d", VAR_7);
  return VAR_7;
 }


 if (VAR_6 & VAR_0)
  *VAR_4 = VAR_5->junction_temp_warning + 1000;
 else
  *VAR_4 = VAR_1;

 return 0;
}
