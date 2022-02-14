
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int host_perio_tx_fifo_size; } ;
struct dwc2_hsotg {TYPE_1__ params; } ;
struct dwc2_host_chan {scalar_t__ ep_type; int speed; TYPE_2__* qh; scalar_t__ xfer_len; int do_split; } ;
struct TYPE_4__ {int next_active_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct dwc2_hsotg*,int) ;
 int FUNC_5 (struct dwc2_hsotg*,int ) ;
 int FUNC_6 (struct dwc2_hsotg*,char*,TYPE_2__*,int,int,int ) ;
 int FUNC_7 (int,int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct dwc2_hsotg *VAR_7,
           struct dwc2_host_chan *VAR_8, u32 *VAR_9)
{
 if (VAR_8->ep_type == VAR_4 ||
     VAR_8->ep_type == VAR_5) {
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  u16 VAR_14;
  u16 VAR_15;
  u16 VAR_16;
  VAR_10 = (VAR_8->speed != VAR_6 &&
         !VAR_8->do_split) ? VAR_8->speed : VAR_6;


  VAR_14 = (FUNC_5(VAR_7, VAR_1) &
         VAR_2) >> VAR_3;
  VAR_13 = sizeof(u32) *
    (VAR_7->params.host_perio_tx_fifo_size -
     VAR_14);
  VAR_11 = FUNC_7(VAR_10, 0, 0,
         VAR_8->xfer_len + VAR_13);
  VAR_12 = FUNC_0(VAR_11);


  VAR_15 = FUNC_4(VAR_7, VAR_12);


  VAR_16 = FUNC_3(VAR_8->qh->next_active_frame, 1);
  if (FUNC_2(VAR_15, VAR_16)) {
   FUNC_6(VAR_7,
          "QH=%p EO MISS fr=%04x=>%04x (%+d)\n",
          VAR_8->qh, VAR_16, VAR_15,
          FUNC_1(VAR_15,
        VAR_16));
   VAR_16 = VAR_15;
   VAR_8->qh->next_active_frame =
    FUNC_1(VAR_15, 1);
  }

  if (VAR_16 & 1)
   *VAR_9 |= VAR_0;
  else
   *VAR_9 &= ~VAR_0;
 }
}
