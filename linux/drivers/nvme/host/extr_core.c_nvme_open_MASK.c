
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvme_ns {TYPE_4__* ctrl; int kref; TYPE_2__* head; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int module; } ;
struct TYPE_6__ {int disk; } ;
struct TYPE_5__ {struct nvme_ns* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_ns*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct nvme_ns *VAR_3 = VAR_1->bd_disk->private_data;






 if (!FUNC_1(&VAR_3->kref))
  goto fail;
 if (!FUNC_3(VAR_3->ctrl->ops->module))
  goto fail_put_ns;

 return 0;

fail_put_ns:
 FUNC_2(VAR_3);
fail:
 return -VAR_0;
}
