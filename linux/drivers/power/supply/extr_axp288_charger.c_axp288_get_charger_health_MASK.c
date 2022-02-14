
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_chrg_info {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct axp288_chrg_info *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_8;
 unsigned int VAR_16;

 VAR_12 = FUNC_0(VAR_11->regmap, VAR_0, &VAR_16);
 if ((VAR_12 < 0) || !(VAR_16 & VAR_9))
  goto health_read_fail;
 else
  VAR_13 = VAR_16;

 VAR_12 = FUNC_0(VAR_11->regmap, VAR_1, &VAR_16);
 if (VAR_12 < 0)
  goto health_read_fail;
 else
  VAR_14 = VAR_16;

 if (!(VAR_13 & VAR_10))
  VAR_15 = VAR_4;
 else if (VAR_14 & VAR_3)
  VAR_15 = VAR_6;
 else if (VAR_14 & VAR_2)
  VAR_15 = VAR_7;
 else
  VAR_15 = VAR_5;

health_read_fail:
 return VAR_15;
}
