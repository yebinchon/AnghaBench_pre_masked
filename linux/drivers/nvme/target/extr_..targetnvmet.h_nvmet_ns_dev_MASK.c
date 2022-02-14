
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_ns {TYPE_1__* bdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int bd_disk; } ;


 struct device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct device *FUNC_1(struct nvmet_ns *VAR_0)
{
 return VAR_0->bdev ? FUNC_0(VAR_0->bdev->bd_disk) : ((void*)0);
}
