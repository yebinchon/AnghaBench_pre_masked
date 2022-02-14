
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_device {scalar_t__ wait_for_setup; scalar_t__ out_mem_is_allocated; scalar_t__ onchip_used_size; scalar_t__ hw_configured_flag; TYPE_1__* regs; } ;
struct TYPE_2__ {int usb_conf; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3_device*,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct cdns3_device *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->regs->usb_conf);

 FUNC_0(VAR_1, 0);
 VAR_1->hw_configured_flag = 0;
 VAR_1->onchip_used_size = 0;
 VAR_1->out_mem_is_allocated = 0;
 VAR_1->wait_for_setup = 0;
}
