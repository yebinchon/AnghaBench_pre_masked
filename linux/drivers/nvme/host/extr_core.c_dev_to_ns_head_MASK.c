
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_head {int dummy; } ;
struct gendisk {struct nvme_ns_head* private_data; int * fops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct nvme_ns_head* head; } ;


 struct gendisk* FUNC_0 (struct device*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static inline struct nvme_ns_head *FUNC_2(struct device *VAR_1)
{
 struct gendisk *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->fops == &VAR_0)
  return FUNC_1(VAR_1)->head;
 else
  return VAR_2->private_data;
}
