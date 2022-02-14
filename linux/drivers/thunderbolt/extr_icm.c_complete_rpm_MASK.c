
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int rpm_complete; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tb_switch* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct tb_switch *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2)
  FUNC_0(&VAR_2->rpm_complete);
 return 0;
}
