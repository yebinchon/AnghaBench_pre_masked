
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_hsotg {TYPE_1__** eps_out; int ep0_state; } ;
struct TYPE_2__ {int dir_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc2_hsotg*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_2, bool VAR_3)
{

 VAR_2->eps_out[0]->dir_in = VAR_3;
 VAR_2->ep0_state = VAR_3 ? VAR_0 : VAR_1;

 FUNC_0(VAR_2, VAR_2->eps_out[0]);
}
