
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,int *) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, u8 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 FUNC_1(VAR_2, VAR_1, VAR_4);

 return 0;
}
