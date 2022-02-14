
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dwc2_qtd {void* data_toggle; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {scalar_t__ ep_type; TYPE_1__* qh; } ;
struct TYPE_2__ {void* data_toggle; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct dwc2_hsotg*,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_6,
          struct dwc2_host_chan *VAR_7, int VAR_8,
          struct dwc2_qtd *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_6, FUNC_0(VAR_8));
 u32 VAR_11 = (VAR_10 & VAR_3) >> VAR_4;

 if (VAR_7->ep_type != VAR_5) {
  if (FUNC_1(!VAR_7 || !VAR_7->qh,
    "chan->qh must be specified for non-control eps\n"))
   return;

  if (VAR_11 == VAR_2)
   VAR_7->qh->data_toggle = VAR_0;
  else
   VAR_7->qh->data_toggle = VAR_1;
 } else {
  if (FUNC_1(!VAR_9,
    "qtd must be specified for control eps\n"))
   return;

  if (VAR_11 == VAR_2)
   VAR_9->data_toggle = VAR_0;
  else
   VAR_9->data_toggle = VAR_1;
 }
}
