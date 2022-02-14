
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_device {TYPE_2__* camss; int reset_complete; TYPE_1__* ops; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* global_reset ) (struct vfe_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vfe_device*) ;
 unsigned long FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct vfe_device *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2->reset_complete);

 VAR_2->ops->global_reset(VAR_2);

 VAR_3 = FUNC_4(&VAR_2->reset_complete,
  FUNC_1(VAR_1));
 if (!VAR_3) {
  FUNC_0(VAR_2->camss->dev, "VFE reset timeout\n");
  return -VAR_0;
 }

 return 0;
}
