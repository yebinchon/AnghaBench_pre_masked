
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {unsigned int num_of_eps; int gadget; int lx_state; scalar_t__* eps_out; scalar_t__* eps_in; scalar_t__ test_mode; scalar_t__ connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct dwc2_hsotg*,scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct dwc2_hsotg *VAR_4)
{
 unsigned int VAR_5;

 if (!VAR_4->connected)
  return;

 VAR_4->connected = 0;
 VAR_4->test_mode = 0;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_of_eps; VAR_5++) {
  if (VAR_4->eps_in[VAR_5])
   FUNC_1(VAR_4, VAR_4->eps_in[VAR_5],
       -VAR_1);
  if (VAR_4->eps_out[VAR_5])
   FUNC_1(VAR_4, VAR_4->eps_out[VAR_5],
       -VAR_1);
 }

 FUNC_0(VAR_4, VAR_3);
 VAR_4->lx_state = VAR_0;

 FUNC_2(&VAR_4->gadget, VAR_2);
}
