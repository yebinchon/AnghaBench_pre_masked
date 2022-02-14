
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int,int,int ,int ) ;
 int FUNC_1 (struct regmap*,int ,int,int ) ;
 int FUNC_2 (struct regmap*,int ,int) ;

int FUNC_3(struct regmap *VAR_5, u32 VAR_6,
  bool VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 if (VAR_7)
  FUNC_1(VAR_5, VAR_0, VAR_6, 0);
 else
  FUNC_2(VAR_5, VAR_1, VAR_6);

 VAR_8 = FUNC_0(VAR_5, VAR_2,
           VAR_9, !(VAR_9 & VAR_6),
           VAR_3, VAR_4);

 return VAR_8;
}
