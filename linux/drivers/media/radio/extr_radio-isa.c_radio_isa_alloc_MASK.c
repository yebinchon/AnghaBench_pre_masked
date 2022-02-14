
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {int name; } ;
struct radio_isa_driver {TYPE_1__* ops; } ;
struct radio_isa_card {struct v4l2_device v4l2_dev; struct radio_isa_driver* drv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct radio_isa_card* (* alloc ) () ;} ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct radio_isa_card*) ;
 int FUNC_2 (int ,int ,int) ;
 struct radio_isa_card* FUNC_3 () ;

__attribute__((used)) static struct radio_isa_card *FUNC_4(struct radio_isa_driver *VAR_0,
    struct device *VAR_1)
{
 struct v4l2_device *VAR_2;
 struct radio_isa_card *VAR_3 = VAR_0->ops->alloc();
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_1, VAR_3);
 VAR_3->drv = VAR_0;
 VAR_2 = &VAR_3->v4l2_dev;
 FUNC_2(VAR_2->name, FUNC_0(VAR_1), sizeof(VAR_2->name));

 return VAR_3;
}
