
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_hw {scalar_t__ d0i3_supported; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (struct mei_device*) ;
 int FUNC_1 (struct mei_device*) ;
 struct mei_me_hw* FUNC_2 (struct mei_device*) ;

int FUNC_3(struct mei_device *VAR_0)
{
 struct mei_me_hw *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->d0i3_supported)
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_0);
}
