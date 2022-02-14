
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_plug {int mode_ids; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct typec_plug*) ;
 struct typec_plug* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct typec_plug *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->mode_ids);
 FUNC_1(VAR_1);
}
