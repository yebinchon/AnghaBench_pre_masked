
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct rtc_device {scalar_t__ nvram_old_abi; TYPE_1__ dev; int owner; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int size; int owner; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvmem_device*) ;
 int FUNC_1 (struct nvmem_device*) ;
 struct nvmem_device* FUNC_2 (int ,struct nvmem_config*) ;
 int FUNC_3 (struct rtc_device*,struct nvmem_device*,int ) ;

int FUNC_4(struct rtc_device *VAR_1,
         struct nvmem_config *VAR_2)
{
 struct nvmem_device *VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_2->dev = VAR_1->dev.parent;
 VAR_2->owner = VAR_1->owner;
 VAR_3 = FUNC_2(VAR_1->dev.parent, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 if (VAR_1->nvram_old_abi)
  FUNC_3(VAR_1, VAR_3, VAR_2->size);

 return 0;
}
