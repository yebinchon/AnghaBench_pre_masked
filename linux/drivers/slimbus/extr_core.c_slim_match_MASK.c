
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slim_device_id {scalar_t__ manf_id; scalar_t__ prod_code; scalar_t__ dev_index; scalar_t__ instance; } ;
struct TYPE_2__ {scalar_t__ manf_id; scalar_t__ prod_code; scalar_t__ dev_index; scalar_t__ instance; } ;
struct slim_device {TYPE_1__ e_addr; } ;



__attribute__((used)) static const struct slim_device_id *FUNC_0(const struct slim_device_id *VAR_0,
            const struct slim_device *VAR_1)
{
 while (VAR_0->manf_id != 0 || VAR_0->prod_code != 0) {
  if (VAR_0->manf_id == VAR_1->e_addr.manf_id &&
      VAR_0->prod_code == VAR_1->e_addr.prod_code &&
      VAR_0->dev_index == VAR_1->e_addr.dev_index &&
      VAR_0->instance == VAR_1->e_addr.instance)
   return VAR_0;
  VAR_0++;
 }
 return ((void*)0);
}
