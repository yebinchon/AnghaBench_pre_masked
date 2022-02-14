
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
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_2(struct smb347_charger *VAR_10)
{
 int VAR_11, VAR_12;
 unsigned int VAR_13;

 if (!FUNC_1(VAR_10))
  return VAR_1;

 VAR_11 = FUNC_0(VAR_10->regmap, VAR_4, &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;

 if ((VAR_13 & VAR_5) ||
   (VAR_13 & VAR_9)) {




  VAR_12 = VAR_3;
 } else {
  if ((VAR_13 & VAR_6) >> VAR_7) {




   VAR_12 = VAR_0;
  } else if (VAR_13 & VAR_8) {





   VAR_12 = VAR_2;
  } else {




   VAR_12 = VAR_3;
  }
 }

 return VAR_12;
}
