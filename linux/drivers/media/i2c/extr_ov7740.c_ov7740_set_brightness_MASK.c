
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
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,int ,int) ;
 int FUNC_1 (struct regmap*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_6, int VAR_7)
{

 FUNC_0(VAR_6, VAR_2, VAR_0, 0);
 FUNC_0(VAR_6, VAR_2, VAR_1, 0);

 if (VAR_7 >= 0) {
  FUNC_1(VAR_6, VAR_4, (unsigned char)VAR_7);
  FUNC_0(VAR_6, VAR_3, VAR_5, 0);
 } else{
  FUNC_1(VAR_6, VAR_4, (unsigned char)(-VAR_7));
  FUNC_0(VAR_6, VAR_3, VAR_5, 1);
 }

 return 0;
}
