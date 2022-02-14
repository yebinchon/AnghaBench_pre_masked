
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_port_number; } ;
struct tb_switch {struct tb_switch* key; struct tb_switch* drom; struct tb_switch* ports; struct tb_switch* vendor_name; struct tb_switch* device_name; struct tb_switch* uuid; int out_hopids; int in_hopids; int disabled; TYPE_1__ config; int dma_port; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tb_switch*) ;
 struct tb_switch* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct tb_switch *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_0(VAR_1->dma_port);

 for (VAR_2 = 1; VAR_2 <= VAR_1->config.max_port_number; VAR_2++) {
  if (!VAR_1->ports[VAR_2].disabled) {
   FUNC_1(&VAR_1->ports[VAR_2].in_hopids);
   FUNC_1(&VAR_1->ports[VAR_2].out_hopids);
  }
 }

 FUNC_2(VAR_1->uuid);
 FUNC_2(VAR_1->device_name);
 FUNC_2(VAR_1->vendor_name);
 FUNC_2(VAR_1->ports);
 FUNC_2(VAR_1->drom);
 FUNC_2(VAR_1->key);
 FUNC_2(VAR_1);
}
