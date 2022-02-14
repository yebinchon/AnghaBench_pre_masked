
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int hc_num; int split_order_list_entry; scalar_t__ xfer_started; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dwc2_hsotg *VAR_1, struct dwc2_host_chan *VAR_2)
{
 u32 VAR_3;

 VAR_2->xfer_started = 0;

 FUNC_3(&VAR_2->split_order_list_entry);





 FUNC_2(VAR_1, 0, FUNC_1(VAR_2->hc_num));
 VAR_3 = 0xffffffff;
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_2->hc_num));
}
