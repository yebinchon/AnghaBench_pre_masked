
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bd70528_psy {int dev; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct bd70528_psy *VAR_8, int *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_3, &VAR_11);
 if (VAR_10) {
  FUNC_0(VAR_8->dev, "Battery state read failure %d\n",
   VAR_10);
  return VAR_10;
 }

 if (!(VAR_11 & VAR_0))
  *VAR_9 = VAR_4;
 else if (VAR_11 & VAR_1)
  *VAR_9 = VAR_6;
 else if (VAR_11 & VAR_2)
  *VAR_9 = VAR_7;
 else
  *VAR_9 = VAR_5;

 return 0;
}
