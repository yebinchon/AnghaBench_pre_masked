
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int,int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_5, int VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_4,
     VAR_0 | VAR_1, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2, (unsigned char)VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_5, VAR_3, (unsigned char)(VAR_6 >> 8));
}
