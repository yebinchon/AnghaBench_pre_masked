
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qtd {scalar_t__ error_count; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {scalar_t__ ep_is_in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_1,
        struct dwc2_host_chan *VAR_2, int VAR_3,
        struct dwc2_qtd *VAR_4)
{
 FUNC_0(VAR_1->dev,
  "--Host Channel %d Interrupt: Data Toggle Error--\n", VAR_3);

 if (VAR_2->ep_is_in)
  VAR_4->error_count = 0;
 else
  FUNC_1(VAR_1->dev,
   "Data Toggle Error on OUT transfer, channel %d\n",
   VAR_3);

 FUNC_3(VAR_1, VAR_2, VAR_4);
 FUNC_2(VAR_1, VAR_3, VAR_0);
}
