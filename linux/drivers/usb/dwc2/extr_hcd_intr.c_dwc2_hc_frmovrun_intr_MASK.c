
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qtd {TYPE_1__* urb; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {int dummy; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;
struct TYPE_2__ {int pipe_info; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_2,
      struct dwc2_host_chan *VAR_3, int VAR_4,
      struct dwc2_qtd *VAR_5)
{
 enum dwc2_halt_status VAR_6;

 if (FUNC_0(VAR_3))
  FUNC_1(VAR_2->dev, "--Host Channel %d Interrupt: Frame Overrun--\n",
   VAR_4);

 FUNC_4(VAR_2, VAR_3, VAR_5);

 switch (FUNC_5(&VAR_5->urb->pipe_info)) {
 case 130:
 case 131:
  break;
 case 129:
  FUNC_3(VAR_2, VAR_3, VAR_5, VAR_0);
  break;
 case 128:
  VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_0);
  FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6);
  break;
 }

 FUNC_2(VAR_2, VAR_4, VAR_1);
}
