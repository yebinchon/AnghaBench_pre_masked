
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct nvme_ns* private_data; } ;


 TYPE_1__* FUNC_0 (struct device*) ;

__attribute__((used)) static inline struct nvme_ns *FUNC_1(struct device *VAR_0)
{
 return FUNC_0(VAR_0)->private_data;
}
