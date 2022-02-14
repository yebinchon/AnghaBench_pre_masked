
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {scalar_t__ periodic; int dir_in; } ;
struct dwc2_hsotg {int num_of_eps; } ;


 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*) ;
 struct dwc2_hsotg_ep* FUNC_1 (struct dwc2_hsotg*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_0, bool VAR_1)
{
 struct dwc2_hsotg_ep *VAR_2;
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0->num_of_eps; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, VAR_3, 1);

  if (!VAR_2)
   continue;

  if (!VAR_2->dir_in)
   continue;

  if ((VAR_1 && !VAR_2->periodic) ||
      (!VAR_1 && VAR_2->periodic))
   continue;

  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4 < 0)
   break;
 }
}
