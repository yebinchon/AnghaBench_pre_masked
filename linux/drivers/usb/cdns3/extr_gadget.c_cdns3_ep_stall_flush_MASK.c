
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_endpoint {int flags; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (struct cdns3_endpoint*,int,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct cdns3_endpoint *VAR_5)
{
 struct cdns3_device *VAR_6 = VAR_5->cdns3_dev;
 int VAR_7;

 FUNC_1(VAR_5, 1, 1);

 FUNC_2(VAR_0 | VAR_1 | VAR_2,
        &VAR_6->regs->ep_cmd);


 FUNC_0(&VAR_6->regs->ep_cmd, VAR_7,
      !(VAR_7 & VAR_0), 1, 1000);
 VAR_5->flags |= VAR_3;
 VAR_5->flags &= ~VAR_4;
}
