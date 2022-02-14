
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct reg_8 {scalar_t__ addr; int val; } ;
struct imx214 {int dev; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct imx214 *VAR_3,
         const struct reg_8 VAR_4[])
{
 u8 VAR_5[VAR_2];
 int VAR_6;
 int VAR_7;

 for (; VAR_4->addr != VAR_0 ; VAR_4++) {
  if (VAR_4->addr == VAR_1) {
   FUNC_2(VAR_4->val * 1000,
         VAR_4->val * 1000 + 500);
   continue;
  }

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   if (VAR_4[VAR_6].addr != (VAR_4[0].addr + VAR_6))
    break;
   VAR_5[VAR_6] = VAR_4[VAR_6].val;
  }

  VAR_7 = FUNC_1(VAR_3->regmap, VAR_4->addr, VAR_5, VAR_6);

  if (VAR_7) {
   FUNC_0(VAR_3->dev, "write_table error: %d\n", VAR_7);
   return VAR_7;
  }

  VAR_4 += VAR_6 - 1;
 }

 return 0;
}
