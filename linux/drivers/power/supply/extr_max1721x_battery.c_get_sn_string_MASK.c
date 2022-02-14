
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max17211_device_info {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,unsigned int*) ;
 int FUNC_1 (char*,int,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max17211_device_info *VAR_2, char *VAR_3)
{
 unsigned int VAR_4[3];

 if (!VAR_3)
  return -VAR_0;

 if (FUNC_0(VAR_2->regmap, VAR_1, &VAR_4[0]))
  return -VAR_0;
 if (FUNC_0(VAR_2->regmap, VAR_1 + 1, &VAR_4[1]))
  return -VAR_0;
 if (FUNC_0(VAR_2->regmap, VAR_1 + 2, &VAR_4[2]))
  return -VAR_0;

 FUNC_1(VAR_3, 13, "%04X%04X%04X", VAR_4[0], VAR_4[1], VAR_4[2]);
 return 0;
}
