
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_eaddr {int dummy; } ;
struct slim_device {int e_addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,struct slim_eaddr*) ;
 struct slim_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct slim_eaddr *VAR_2 = VAR_1;
 struct slim_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_3->e_addr, VAR_2);
}
