
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_sysclk_state {int fll; int sysclk; } ;
struct arizona {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct arizona *VAR_2,
       struct arizona_sysclk_state *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_1,
      VAR_3->sysclk);
 if (VAR_4) {
  FUNC_0(VAR_2->dev,
   "Failed to re-apply old SYSCLK settings: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_0, VAR_3->fll);
 if (VAR_4) {
  FUNC_0(VAR_2->dev,
   "Failed to re-apply old FLL settings: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
