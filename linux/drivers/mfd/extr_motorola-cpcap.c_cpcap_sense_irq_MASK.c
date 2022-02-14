
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_6 / VAR_0;
 int VAR_8 = FUNC_0(VAR_6 % VAR_0);
 int VAR_9 = VAR_2 + (VAR_7 * VAR_1);
 int VAR_10, VAR_11;

 if (VAR_9 < VAR_2 || VAR_9 > VAR_3)
  return -VAR_4;

 VAR_10 = FUNC_1(VAR_5, VAR_9, &VAR_11);
 if (VAR_10)
  return VAR_10;

 return !!(VAR_11 & VAR_8);
}
