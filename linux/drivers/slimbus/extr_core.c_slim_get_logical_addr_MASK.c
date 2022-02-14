
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_device {int is_laddr_valid; } ;


 int FUNC_0 (struct slim_device*,int) ;

int FUNC_1(struct slim_device *VAR_0)
{
 if (!VAR_0->is_laddr_valid)
  return FUNC_0(VAR_0, 0);

 return 0;
}
