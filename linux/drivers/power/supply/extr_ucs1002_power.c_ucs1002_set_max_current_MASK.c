
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ucs1002_info {int regmap; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ucs1002_info *VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_4 == VAR_2[VAR_7])
   break;
 }

 if (VAR_7 == FUNC_0(VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3->regmap, VAR_1, VAR_7);
 if (VAR_6)
  return VAR_6;





 VAR_6 = FUNC_1(VAR_3->regmap, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 != VAR_7)
  return -VAR_0;

 return 0;
}
