
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_qtd {int ssplit_out_xfer_count; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int xfer_len; int start_pkt_count; int max_packet; TYPE_1__* qh; scalar_t__ ep_is_in; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;
struct TYPE_2__ {scalar_t__ do_split; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct dwc2_hsotg *VAR_5,
           struct dwc2_host_chan *VAR_6, int VAR_7,
           struct dwc2_qtd *VAR_8,
           enum dwc2_halt_status VAR_9,
           int *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_1(VAR_5, FUNC_0(VAR_7));

 if (VAR_9 == VAR_0) {
  if (VAR_6->ep_is_in) {
   VAR_12 = (VAR_11 & VAR_3) >>
    VAR_4;
   VAR_13 = VAR_6->xfer_len - VAR_12;
   if (VAR_10)
    *VAR_10 = (VAR_12 != 0);
  } else if (VAR_6->qh->do_split) {
   VAR_13 = VAR_8->ssplit_out_xfer_count;
  } else {
   VAR_13 = VAR_6->xfer_len;
  }
 } else {
  VAR_12 = (VAR_11 & VAR_1) >> VAR_2;
  VAR_13 = (VAR_6->start_pkt_count - VAR_12) * VAR_6->max_packet;
 }

 return VAR_13;
}
