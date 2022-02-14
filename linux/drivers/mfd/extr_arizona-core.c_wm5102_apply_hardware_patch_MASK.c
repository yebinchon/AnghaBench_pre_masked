
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_sysclk_state {int dummy; } ;
struct arizona {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arizona*,struct arizona_sysclk_state*) ;
 int FUNC_1 (struct arizona*,struct arizona_sysclk_state*) ;
 int FUNC_2 (struct arizona*,int,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct arizona *VAR_6)
{
 struct arizona_sysclk_state VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_6, &VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_4(VAR_6->regmap, VAR_0,
      VAR_4 | VAR_5 | 160);
 if (VAR_9) {
  FUNC_3(VAR_6->dev, "Failed to start write sequencer: %d\n",
   VAR_9);
  goto err;
 }

 VAR_9 = FUNC_2(VAR_6, 30, VAR_1,
          VAR_3, 0);
 if (VAR_9)
  FUNC_4(VAR_6->regmap, VAR_0,
        VAR_2);

err:
 VAR_8 = FUNC_0(VAR_6, &VAR_7);

 return VAR_9 ?: VAR_8;
}
