
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* net_dev; } ;
struct i2400m {TYPE_3__ wimax_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;



__attribute__((used)) static inline
struct device *FUNC_0(struct i2400m *VAR_0)
{
 return VAR_0->wimax_dev.net_dev->dev.parent;
}
