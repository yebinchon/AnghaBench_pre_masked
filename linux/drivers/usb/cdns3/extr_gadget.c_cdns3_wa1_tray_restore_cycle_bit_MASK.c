
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_endpoint {int wa1_trb_index; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_1 (struct cdns3_endpoint*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cdns3_device *VAR_1,
          struct cdns3_endpoint *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_4 = !!(FUNC_2(&VAR_1->regs->ep_cmd) & VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4 || VAR_3 != VAR_2->wa1_trb_index)
  FUNC_1(VAR_2);
}
