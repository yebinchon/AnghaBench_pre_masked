
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_vout_device {scalar_t__* smsshado_phy_addr; scalar_t__* smsshado_virt_addr; int smsshado_size; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct omap_vout_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->smsshado_virt_addr[VAR_2]) {
   FUNC_0(VAR_1->smsshado_virt_addr[VAR_2],
           VAR_1->smsshado_size);
   VAR_1->smsshado_virt_addr[VAR_2] = 0;
   VAR_1->smsshado_phy_addr[VAR_2] = 0;
  }
 }
}
