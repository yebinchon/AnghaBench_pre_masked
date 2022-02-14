
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct smb347_charger*,int) ;

__attribute__((used)) static int FUNC_2(struct smb347_charger *VAR_7, bool VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, 1);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_7->regmap, VAR_0, 0xff,
     VAR_8 ? VAR_1 : 0);
 if (VAR_9 < 0)
  goto fail;

 VAR_9 = FUNC_0(VAR_7->regmap, VAR_4, 0xff,
   VAR_8 ? (VAR_6 |
     VAR_5) : 0);
 if (VAR_9 < 0)
  goto fail;

 VAR_9 = FUNC_0(VAR_7->regmap, VAR_2, VAR_3,
     VAR_8 ? VAR_3 : 0);
fail:
 FUNC_1(VAR_7, 0);
 return VAR_9;
}
