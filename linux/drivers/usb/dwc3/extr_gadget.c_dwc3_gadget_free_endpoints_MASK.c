
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int ep_list; } ;
struct dwc3_ep {TYPE_1__ endpoint; } ;
struct dwc3 {struct dwc3_ep** eps; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dwc3_ep*) ;
 int FUNC_1 (struct dwc3_ep*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dwc3 *VAR_1)
{
 struct dwc3_ep *VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->eps[VAR_3];
  if (!VAR_2)
   continue;
  if (VAR_3 != 0 && VAR_3 != 1) {
   FUNC_0(VAR_2);
   FUNC_2(&VAR_2->endpoint.ep_list);
  }

  FUNC_1(VAR_2);
 }
}
