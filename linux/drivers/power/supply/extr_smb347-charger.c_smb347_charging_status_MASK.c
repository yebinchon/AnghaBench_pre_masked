
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_2(struct smb347_charger *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return 0;

 return (VAR_4 & VAR_1) >> VAR_2;
}
