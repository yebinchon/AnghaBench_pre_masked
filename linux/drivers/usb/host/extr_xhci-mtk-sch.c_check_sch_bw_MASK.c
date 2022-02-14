
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct usb_device {scalar_t__ speed; } ;
struct mu3h_sch_ep_info {scalar_t__ esit; scalar_t__ cs_count; scalar_t__ num_budget_microframes; scalar_t__ offset; } ;
struct mu3h_sch_bw_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct usb_device*,struct mu3h_sch_ep_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mu3h_sch_bw_info*,struct mu3h_sch_ep_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct mu3h_sch_bw_info*,struct mu3h_sch_ep_info*,int) ;
 int FUNC_4 (struct usb_device*,struct mu3h_sch_ep_info*) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_6,
 struct mu3h_sch_bw_info *VAR_7, struct mu3h_sch_ep_info *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 bool VAR_17 = 0;
 int VAR_18;

 VAR_10 = VAR_8->esit;





 VAR_11 = ~0;
 VAR_12 = 0;
 VAR_16 = VAR_8->cs_count;
 VAR_15 = VAR_8->num_budget_microframes;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (FUNC_2(VAR_6->speed)) {
   VAR_18 = FUNC_0(VAR_6, VAR_8, VAR_9);
   if (VAR_18)
    continue;
   else
    VAR_17 = 1;
  }

  if ((VAR_9 + VAR_8->num_budget_microframes) > VAR_8->esit)
   break;

  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
  if (VAR_11 > VAR_13) {
   VAR_11 = VAR_13;
   VAR_12 = VAR_9;
   VAR_16 = VAR_8->cs_count;
   VAR_15 = VAR_8->num_budget_microframes;
  }
  if (VAR_11 == 0)
   break;
 }

 if (VAR_6->speed == VAR_5)
  VAR_14 = VAR_2;
 else if (VAR_6->speed == VAR_4)
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_1;


 if (VAR_11 > VAR_14)
  return -VAR_0;

 VAR_8->offset = VAR_12;
 VAR_8->cs_count = VAR_16;
 VAR_8->num_budget_microframes = VAR_15;

 if (FUNC_2(VAR_6->speed)) {

  if (!VAR_17)
   return -VAR_0;

  FUNC_4(VAR_6, VAR_8);
 }


 FUNC_3(VAR_7, VAR_8, 1);

 return 0;
}
