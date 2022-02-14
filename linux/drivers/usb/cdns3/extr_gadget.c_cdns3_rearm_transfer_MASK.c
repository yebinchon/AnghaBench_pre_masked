
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cdns3_endpoint {int name; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_traddr; int ep_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (struct cdns3_endpoint*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cdns3_endpoint*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct cdns3_endpoint *VAR_1, u8 VAR_2)
{
 struct cdns3_device *VAR_3 = VAR_1->cdns3_dev;

 FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_4(VAR_1);


  FUNC_5();
  FUNC_6(VAR_0, &VAR_3->regs->ep_cmd);

  FUNC_0(VAR_3);

  FUNC_3(VAR_1->name,
      FUNC_2(&VAR_3->regs->ep_traddr));
 }
}
