
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;
 u8 VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_7, VAR_2, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = VAR_8 & VAR_0;
 VAR_11 = VAR_8 & VAR_1;

 if (VAR_10 && !VAR_11)
  return VAR_3;
 if (!VAR_10 && VAR_11)
  return VAR_5;
 if (!VAR_10 && !VAR_11)
  return VAR_4;

 return VAR_6;
}
