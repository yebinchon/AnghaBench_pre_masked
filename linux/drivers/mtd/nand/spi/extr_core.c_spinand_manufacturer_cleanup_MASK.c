
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spinand_device {TYPE_2__* manufacturer; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {void (* cleanup ) (struct spinand_device*) ;} ;


 void FUNC_0 (struct spinand_device*) ;

__attribute__((used)) static void FUNC_1(struct spinand_device *VAR_0)
{

 if (VAR_0->manufacturer->ops->cleanup)
  return VAR_0->manufacturer->ops->cleanup(VAR_0);
}
