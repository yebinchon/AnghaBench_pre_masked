
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_qtd {scalar_t__ error_count; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int ep_is_in; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_1,
     struct dwc2_host_chan *VAR_2, int VAR_3,
     struct dwc2_qtd *VAR_4,
     enum dwc2_halt_status VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_1, FUNC_0(VAR_3));

 VAR_4->error_count = 0;

 if (!VAR_2->ep_is_in || (VAR_6 & VAR_0) == 0)

  FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
 else

  FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
}
