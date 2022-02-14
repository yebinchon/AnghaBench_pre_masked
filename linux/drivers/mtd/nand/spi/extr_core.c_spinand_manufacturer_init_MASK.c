
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spinand_device {TYPE_2__* manufacturer; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* init ) (struct spinand_device*) ;} ;


 int FUNC_0 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_1(struct spinand_device *VAR_0)
{
 if (VAR_0->manufacturer->ops->init)
  return VAR_0->manufacturer->ops->init(VAR_0);

 return 0;
}
