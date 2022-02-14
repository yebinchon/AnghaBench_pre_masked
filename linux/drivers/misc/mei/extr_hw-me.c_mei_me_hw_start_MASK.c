
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0);

 if (VAR_1)
  return VAR_1;
 FUNC_0(VAR_0->dev, "hw is ready\n");

 FUNC_1(VAR_0);
 return VAR_1;
}
