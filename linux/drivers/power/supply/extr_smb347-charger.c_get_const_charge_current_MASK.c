
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_4(struct smb347_charger *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 if (!FUNC_3(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_1, &VAR_7);
 if (VAR_5 < 0)
  return VAR_5;





 if (VAR_7 & 0x20) {
  VAR_6 = FUNC_1(VAR_2, FUNC_0(VAR_2), VAR_7 & 7);
 } else {
  VAR_7 >>= 3;
  VAR_6 = FUNC_1(VAR_3, FUNC_0(VAR_3), VAR_7 & 7);
 }

 return VAR_6;
}
