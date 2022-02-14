
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_2(struct smb347_charger *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 if (!FUNC_1(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->regmap, VAR_1, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 &= VAR_2;
 if (VAR_6 > 0x3d)
  VAR_6 = 0x3d;

 VAR_5 = 3500000 + VAR_6 * 20000;

 return VAR_5;
}
