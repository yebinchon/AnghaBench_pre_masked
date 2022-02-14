
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_hfi_device {TYPE_1__* core; } ;
struct mem_desc {int attrs; int da; int kva; int size; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct venus_hfi_device *VAR_0, struct mem_desc *VAR_1)
{
 struct device *VAR_2 = VAR_0->core->dev;

 FUNC_0(VAR_2, VAR_1->size, VAR_1->kva, VAR_1->da, VAR_1->attrs);
}
