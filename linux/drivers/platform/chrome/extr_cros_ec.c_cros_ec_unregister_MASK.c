
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_device {scalar_t__ ec; scalar_t__ pd; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct cros_ec_device *VAR_0)
{
 if (VAR_0->pd)
  FUNC_0(VAR_0->pd);
 FUNC_0(VAR_0->ec);

 return 0;
}
