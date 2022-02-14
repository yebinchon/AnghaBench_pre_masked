
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov2680_dev {TYPE_1__* i2c_client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;



__attribute__((used)) static struct device *FUNC_0(struct ov2680_dev *VAR_0)
{
 return &VAR_0->i2c_client->dev;
}
