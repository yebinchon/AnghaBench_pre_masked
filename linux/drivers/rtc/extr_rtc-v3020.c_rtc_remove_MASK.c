
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3020 {TYPE_1__* ops; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int (* unmap_io ) (struct v3020*) ;} ;


 struct v3020* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct v3020*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct v3020 *VAR_1 = FUNC_0(VAR_0);

 VAR_1->ops->unmap_io(VAR_1);

 return 0;
}
