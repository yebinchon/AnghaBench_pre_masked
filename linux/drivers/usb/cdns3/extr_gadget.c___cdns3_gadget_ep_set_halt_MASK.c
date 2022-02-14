
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_endpoint {int flags; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns3_endpoint*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cdns3_endpoint*,int,int ) ;

void FUNC_3(struct cdns3_endpoint *VAR_3)
{
 struct cdns3_device *VAR_4 = VAR_3->cdns3_dev;

 FUNC_2(VAR_3, 1, 0);

 if (!(VAR_3->flags & VAR_0)) {
  u32 VAR_5 = FUNC_1(&VAR_4->regs->ep_sts);

  if (!(VAR_5 & VAR_2))
   FUNC_0(VAR_3);
  else
   VAR_3->flags |= VAR_1;
 }
}
