
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_sysclk_state {int dummy; } ;
struct arizona {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct arizona*,struct arizona_sysclk_state*) ;
 int FUNC_2 (struct arizona*,struct arizona_sysclk_state*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct arizona *VAR_1)
{
 struct arizona_sysclk_state VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1->regmap,
           VAR_0,
           FUNC_0(VAR_0));

 VAR_3 = FUNC_1(VAR_1, &VAR_2);

 return VAR_4 ?: VAR_3;
}
