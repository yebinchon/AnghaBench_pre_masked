
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ns {TYPE_2__* ctrl; } ;
struct gendisk {struct nvme_ns* private_data; } ;
typedef int fmode_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_ns*) ;

__attribute__((used)) static void FUNC_2(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct nvme_ns *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_2->ctrl->ops->module);
 FUNC_1(VAR_2);
}
