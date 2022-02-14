
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reset_control {int id; TYPE_2__* rcdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* status ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct reset_control*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct reset_control*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

int FUNC_4(struct reset_control *VAR_2)
{
 if (!VAR_2)
  return 0;

 if (FUNC_1(FUNC_0(VAR_2)) || FUNC_2(VAR_2))
  return -VAR_0;

 if (VAR_2->rcdev->ops->status)
  return VAR_2->rcdev->ops->status(VAR_2->rcdev, VAR_2->id);

 return -VAR_1;
}
