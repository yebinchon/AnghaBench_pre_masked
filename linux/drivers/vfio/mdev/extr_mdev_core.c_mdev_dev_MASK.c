
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct mdev_device {struct device dev; } ;



struct device *FUNC_0(struct mdev_device *VAR_0)
{
 return &VAR_0->dev;
}
