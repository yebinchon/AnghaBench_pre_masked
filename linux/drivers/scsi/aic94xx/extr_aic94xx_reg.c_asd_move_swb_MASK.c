
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct asd_ha_struct {TYPE_1__* io_handle; int pcidev; } ;
struct TYPE_2__ {int swb_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct asd_ha_struct *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_3 & ~(VAR_0-1);
 FUNC_0(VAR_2->pcidev, VAR_1, VAR_4);
 VAR_2->io_handle[0].swb_base = VAR_4;
}
