
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stimx274 {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct reg_8 {int addr; int val; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*,int,int *,int) ;
 int FUNC_3 (struct regmap*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct stimx274 *VAR_2, const struct reg_8 VAR_3[])
{
 struct regmap *VAR_4 = VAR_2->regmap;
 int VAR_5 = 0;
 const struct reg_8 *VAR_6;
 u8 VAR_7;

 int VAR_8 = -1;
 int VAR_9 = 0;
 u8 VAR_10[16];
 int VAR_11 = FUNC_0(VAR_10);

 for (VAR_6 = VAR_3;; VAR_6++) {
  if ((VAR_6->addr != VAR_8 + VAR_9) ||
      (VAR_6->addr == VAR_0) ||
      (VAR_6->addr == VAR_1) ||
      (VAR_9 == VAR_11)) {
   if (VAR_9 == 1)
    VAR_5 = FUNC_3(VAR_4,
         VAR_8, VAR_10[0]);
   else if (VAR_9 > 1)
    VAR_5 = FUNC_2(VAR_4, VAR_8,
       &VAR_10[0],
       VAR_9);
   else
    VAR_5 = 0;

   if (VAR_5)
    return VAR_5;

   VAR_8 = -1;
   VAR_9 = 0;


   if (VAR_6->addr == VAR_0)
    break;

   if (VAR_6->addr == VAR_1) {
    FUNC_1(VAR_6->val);
    continue;
   }
  }

  VAR_7 = VAR_6->val;

  if (VAR_8 == -1)
   VAR_8 = VAR_6->addr;

  VAR_10[VAR_9++] = VAR_7;
 }
 return 0;
}
