
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct ov7740 {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ov7740 *VAR_5)
{
 struct regmap *VAR_6 = VAR_5->regmap;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_6, VAR_1, &VAR_7);
 if (VAR_11)
  return VAR_11;
 if (VAR_7 != 0x7f)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_6, VAR_2, &VAR_8);
 if (VAR_11)
  return VAR_11;
 if (VAR_8 != 0xa2)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_6, VAR_3, &VAR_9);
 if (VAR_11)
  return VAR_11;
 if (VAR_9 != 0x77)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_6, VAR_4, &VAR_10);
 if (VAR_11)
  return VAR_11;
 if ((VAR_10 != 0x40) && (VAR_10 != 0x41) && (VAR_10 != 0x42))
  return -VAR_0;

 return 0;
}
