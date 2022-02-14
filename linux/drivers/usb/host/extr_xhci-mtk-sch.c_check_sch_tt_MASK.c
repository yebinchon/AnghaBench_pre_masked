
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct mu3h_sch_tt {int split_bit_map; } ;
struct mu3h_sch_ep_info {scalar_t__ ep_type; int cs_count; int num_budget_microframes; int esit; int maxpkt; struct mu3h_sch_tt* sch_tt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4,
 struct mu3h_sch_ep_info *VAR_5, u32 VAR_6)
{
 struct mu3h_sch_tt *VAR_7 = VAR_5->sch_tt;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_10 = VAR_6 % 8;
 VAR_9 = (VAR_10 + 1) % 8;

 if (VAR_5->ep_type == VAR_3) {
  VAR_11 = VAR_10 + VAR_5->cs_count - 1;





  if (!(VAR_10 == 7 || VAR_11 < 6))
   return -VAR_0;

  for (VAR_14 = 0; VAR_14 < VAR_5->cs_count; VAR_14++)
   if (FUNC_1(VAR_6 + VAR_14, VAR_7->split_bit_map))
    return -VAR_0;

 } else {
  u32 VAR_15 = FUNC_0(VAR_5->maxpkt, VAR_1);





  if (VAR_10 == 6)
   return -VAR_0;


  VAR_12 = (VAR_10 + 2) % 8;
  VAR_13 = VAR_12 + VAR_15 - 1;

  if (VAR_13 > 7)
   return -VAR_0;

  if (VAR_5->ep_type == VAR_2)
   VAR_8 = (VAR_13 == 7) ? 1 : 2;
  else
   VAR_8 = (VAR_9 == 6) ? 1 : 2;

  VAR_15 += VAR_8;
  if (VAR_15 > 7)
   VAR_15 = 7;

  for (VAR_14 = 0; VAR_14 < VAR_15 + 2; VAR_14++) {
   if (FUNC_1(VAR_6 + VAR_14, VAR_7->split_bit_map))
    return -VAR_0;
  }

  VAR_5->cs_count = VAR_15;

  VAR_5->num_budget_microframes = VAR_15 + 2;





  if (VAR_5->num_budget_microframes > VAR_5->esit)
   VAR_5->num_budget_microframes = VAR_5->esit;
 }

 return 0;
}
