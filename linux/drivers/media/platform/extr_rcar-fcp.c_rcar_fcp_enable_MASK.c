
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_fcp_device {int dev; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct rcar_fcp_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_0(VAR_0->dev);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
