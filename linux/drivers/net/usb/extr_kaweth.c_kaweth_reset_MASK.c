
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaweth_device {int net; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kaweth_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->dev);
 FUNC_0(10);

 FUNC_1(VAR_0->net, "kaweth_reset() returns %d.\n", VAR_1);

 return VAR_1;
}
