
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k5baf_gpio {int level; int gpio; } ;
struct s5k5baf {struct s5k5baf_gpio* gpios; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct s5k5baf *VAR_0, int VAR_1)
{
 struct s5k5baf_gpio *VAR_2 = &VAR_0->gpios[VAR_1];

 FUNC_0(VAR_2->gpio, !VAR_2->level);
}
