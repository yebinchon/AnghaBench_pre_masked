
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_ep_ctx {int tx_info; int ep_info; int ep_info2; } ;
struct usb_device {scalar_t__ speed; } ;
struct mu3h_sch_ep_info {int* bw_budget_table; int esit; int ep_type; int maxpkt; int burst_mode; int repeat; int cs_count; int num_budget_microframes; int pkts; int bw_cost_per_microframe; scalar_t__ offset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct xhci_ep_ctx*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct usb_device *VAR_8,
  struct xhci_ep_ctx *VAR_9, struct mu3h_sch_ep_info *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 *VAR_17 = VAR_10->bw_budget_table;
 int VAR_18;

 VAR_11 = FUNC_1(FUNC_9(VAR_9->ep_info2));
 VAR_12 = FUNC_6(FUNC_9(VAR_9->ep_info2));
 VAR_13 = FUNC_2(FUNC_9(VAR_9->ep_info2));
 VAR_14 = FUNC_0(FUNC_9(VAR_9->ep_info));
 VAR_16 =
  (FUNC_4(
   FUNC_9(VAR_9->ep_info)) << 16) |
   FUNC_3(FUNC_9(VAR_9->tx_info));

 VAR_10->esit = FUNC_7(VAR_9);
 VAR_10->ep_type = VAR_11;
 VAR_10->maxpkt = VAR_12;
 VAR_10->offset = 0;
 VAR_10->burst_mode = 0;
 VAR_10->repeat = 0;

 if (VAR_8->speed == VAR_6) {
  VAR_10->cs_count = 0;






  VAR_10->num_budget_microframes = 1;






  VAR_10->pkts = VAR_13 + 1;
  VAR_10->bw_cost_per_microframe = VAR_12 * VAR_10->pkts;
  VAR_17[0] = VAR_10->bw_cost_per_microframe;
 } else if (VAR_8->speed >= VAR_7) {

  VAR_10->cs_count = 0;
  VAR_10->burst_mode = 1;





  VAR_15 = FUNC_5(VAR_16, VAR_12);
  if (VAR_15 == 0)
   VAR_15 = (VAR_14 + 1) * (VAR_13 + 1);

  if (VAR_11 == VAR_1 || VAR_11 == VAR_2) {
   VAR_10->pkts = VAR_15;
   VAR_10->num_budget_microframes = 1;
   VAR_17[0] = VAR_12 * VAR_10->pkts;
  }

  if (VAR_11 == VAR_3 || VAR_11 == VAR_4) {
   u32 VAR_19;

   if (VAR_10->esit == 1)
    VAR_10->pkts = VAR_15;
   else if (VAR_15 <= VAR_10->esit)
    VAR_10->pkts = 1;
   else
    VAR_10->pkts = FUNC_10(VAR_15)
     / VAR_10->esit;

   VAR_10->num_budget_microframes =
    FUNC_5(VAR_15, VAR_10->pkts);

   VAR_10->repeat = !!(VAR_10->num_budget_microframes > 1);
   VAR_10->bw_cost_per_microframe = VAR_12 * VAR_10->pkts;

   VAR_19 = VAR_10->bw_cost_per_microframe;
   VAR_19 *= VAR_10->num_budget_microframes;
   VAR_19 -= (VAR_12 * VAR_15);
   for (VAR_18 = 0; VAR_18 < VAR_10->num_budget_microframes - 1; VAR_18++)
    VAR_17[VAR_18] = VAR_10->bw_cost_per_microframe;


   VAR_17[VAR_18] = VAR_19;
  }
 } else if (FUNC_8(VAR_8->speed)) {
  VAR_10->pkts = 1;





  VAR_10->cs_count = FUNC_5(VAR_12, VAR_0);
  VAR_10->num_budget_microframes = VAR_10->cs_count;
  VAR_10->bw_cost_per_microframe =
   (VAR_12 < VAR_0) ? VAR_12 : VAR_0;


  if (VAR_11 == VAR_4) {
   for (VAR_18 = 0; VAR_18 < VAR_10->num_budget_microframes; VAR_18++)
    VAR_17[VAR_18] = VAR_10->bw_cost_per_microframe;
  } else if (VAR_11 == VAR_2) {

   VAR_17[0] = VAR_10->bw_cost_per_microframe;
  } else {
   VAR_17[0] = 0;
   VAR_17[1] = 0;






   for (VAR_18 = 2; VAR_18 < VAR_5; VAR_18++)
    VAR_17[VAR_18] = VAR_10->bw_cost_per_microframe;
  }
 }
}
