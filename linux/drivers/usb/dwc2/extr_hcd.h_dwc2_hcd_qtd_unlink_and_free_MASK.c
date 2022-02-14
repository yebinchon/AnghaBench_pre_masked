
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qtd {int qtd_list_entry; } ;
struct dwc2_qh {int dummy; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct dwc2_qtd*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct dwc2_hsotg *VAR_0,
      struct dwc2_qtd *VAR_1,
      struct dwc2_qh *VAR_2)
{
 FUNC_1(&VAR_1->qtd_list_entry);
 FUNC_0(VAR_1);
}
