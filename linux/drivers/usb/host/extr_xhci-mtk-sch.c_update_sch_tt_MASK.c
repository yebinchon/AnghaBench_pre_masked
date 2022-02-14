
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dummy; } ;
struct mu3h_sch_tt {int ep_list; int split_bit_map; } ;
struct mu3h_sch_ep_info {int esit; int offset; int num_budget_microframes; int tt_endpoint; struct mu3h_sch_tt* sch_tt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_1,
 struct mu3h_sch_ep_info *VAR_2)
{
 struct mu3h_sch_tt *VAR_3 = VAR_2->sch_tt;
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_0 / VAR_2->esit;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4 = VAR_2->offset + VAR_6 * VAR_2->esit;
  for (VAR_7 = 0; VAR_7 < VAR_2->num_budget_microframes; VAR_7++)
   FUNC_1(VAR_4 + VAR_7, VAR_3->split_bit_map);
 }

 FUNC_0(&VAR_2->tt_endpoint, &VAR_3->ep_list);
}
