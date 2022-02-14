
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_device {int wait_for_setup; int ep0_data_dir; int setup_pending; TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (struct cdns3_device*,int ) ;
 int FUNC_2 (struct cdns3_device*) ;
 int FUNC_3 (struct cdns3_device*) ;
 int FUNC_4 (struct cdns3_device*,int) ;
 int FUNC_5 (struct cdns3_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cdns3_device*,int) ;
 int FUNC_8 (int,int *) ;

void FUNC_9(struct cdns3_device *VAR_4, int VAR_5)
{
 u32 VAR_6;

 FUNC_4(VAR_4, VAR_5);

 VAR_6 = FUNC_6(&VAR_4->regs->ep_sts);
 FUNC_8(VAR_6, &VAR_4->regs->ep_sts);

 FUNC_7(VAR_4, VAR_6);

 FUNC_0(VAR_4);

 if (VAR_6 & VAR_3)
  VAR_4->wait_for_setup = 1;

 if (VAR_4->wait_for_setup && VAR_6 & VAR_1) {
  VAR_4->wait_for_setup = 0;
  FUNC_1(VAR_4, 0);
  FUNC_2(VAR_4);
 } else if ((VAR_6 & VAR_1) || (VAR_6 & VAR_2)) {
  VAR_4->ep0_data_dir = VAR_5;
  FUNC_5(VAR_4);
 }

 if (VAR_6 & VAR_0) {
  if (VAR_5 == 0 && !VAR_4->setup_pending)
   FUNC_3(VAR_4);
 }
}
