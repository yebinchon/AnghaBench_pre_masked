
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* put_device ) (struct ti_sci_handle const*,int) ;} ;
struct TYPE_4__ {TYPE_1__ dev_ops; } ;
struct ti_sci_handle {TYPE_2__ ops; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct ti_sci_handle const*,int) ;
 int FUNC_1 (struct device*) ;
 struct ti_sci_handle* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 const struct ti_sci_handle *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_1(VAR_0);

 return VAR_1->ops.dev_ops.put_device(VAR_1, VAR_2);
}
