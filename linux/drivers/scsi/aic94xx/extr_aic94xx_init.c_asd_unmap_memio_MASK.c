
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ha_struct {int pcidev; struct asd_ha_addrspace* io_handle; } ;
struct asd_ha_addrspace {int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct asd_ha_struct *VAR_0)
{
 struct asd_ha_addrspace *VAR_1;

 VAR_1 = &VAR_0->io_handle[1];
 FUNC_0(VAR_1->addr);
 FUNC_1(VAR_0->pcidev, 2);

 VAR_1 = &VAR_0->io_handle[0];
 FUNC_0(VAR_1->addr);
 FUNC_1(VAR_0->pcidev, 0);
}
