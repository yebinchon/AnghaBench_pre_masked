
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct regmap*,int ,int,int) ;
 int FUNC_2 (struct regmap*,int ) ;
 int FUNC_3 (struct regmap*,int ) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_11, u8 VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_3(VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_11, VAR_0,
      VAR_4 |
      VAR_3 |
      VAR_1 |
      VAR_2,
      VAR_3);

 FUNC_1(VAR_11, VAR_8,
      VAR_10 |
      VAR_9,
      FUNC_0(200) |
      VAR_10);

 FUNC_1(VAR_11, VAR_5,
      VAR_6 |
      VAR_7,
      VAR_7);

 VAR_13 = FUNC_2(VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_11, VAR_0,
      VAR_4,
      VAR_4);

 FUNC_1(VAR_11, VAR_5,
      VAR_7, 0);

 VAR_13 = FUNC_2(VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 return 0;
}
