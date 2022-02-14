
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {scalar_t__ compl_desc; scalar_t__ next_desc; int target_frame; int dir_in; struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,int ,int ) ;
 int FUNC_2 (struct dwc2_hsotg_ep*) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg_ep *VAR_1)
{
 struct dwc2_hsotg *VAR_2 = VAR_1->parent;

 if (!VAR_1->dir_in)
  FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_1, FUNC_2(VAR_1), 0);

 VAR_1->target_frame = VAR_0;
 VAR_1->next_desc = 0;
 VAR_1->compl_desc = 0;
}
