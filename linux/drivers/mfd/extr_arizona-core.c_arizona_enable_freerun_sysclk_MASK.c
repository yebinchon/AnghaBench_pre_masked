
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_sysclk_state {int fll; int sysclk; } ;
struct arizona {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arizona*,int,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct arizona *VAR_6,
      struct arizona_sysclk_state *VAR_7)
{
 int VAR_8, VAR_9;


 VAR_8 = FUNC_2(VAR_6->regmap, VAR_1, &VAR_7->fll);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "Failed to cache FLL settings: %d\n",
   VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_2(VAR_6->regmap, VAR_5,
     &VAR_7->sysclk);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "Failed to cache SYSCLK settings: %d\n",
   VAR_8);
  return VAR_8;
 }


 VAR_8 = FUNC_3(VAR_6->regmap, VAR_1,
   VAR_2 | VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_6->dev,
   "Failed to start FLL in freerunning mode: %d\n",
   VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_0(VAR_6, 180, VAR_4,
          VAR_0,
          VAR_0);
 if (VAR_8)
  goto err_fll;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_5, 0x0144);
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "Failed to start SYSCLK: %d\n", VAR_8);
  goto err_fll;
 }

 return 0;

err_fll:
 VAR_9 = FUNC_3(VAR_6->regmap, VAR_1, VAR_7->fll);
 if (VAR_9)
  FUNC_1(VAR_6->dev,
   "Failed to re-apply old FLL settings: %d\n", VAR_9);

 return VAR_8;
}
