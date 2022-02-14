
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_request {int dummy; } ;
struct dwc3_ep {int cancelled_list; int pending_list; int started_list; } ;
struct dwc3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc3_ep*,struct dwc3_request*,int ) ;
 int FUNC_1 (struct dwc3_ep*,int,int) ;
 int FUNC_2 (int *) ;
 struct dwc3_request* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_1, struct dwc3_ep *VAR_2)
{
 struct dwc3_request *VAR_3;

 FUNC_1(VAR_2, 1, 0);


 while (!FUNC_2(&VAR_2->started_list)) {
  VAR_3 = FUNC_3(&VAR_2->started_list);

  FUNC_0(VAR_2, VAR_3, -VAR_0);
 }

 while (!FUNC_2(&VAR_2->pending_list)) {
  VAR_3 = FUNC_3(&VAR_2->pending_list);

  FUNC_0(VAR_2, VAR_3, -VAR_0);
 }

 while (!FUNC_2(&VAR_2->cancelled_list)) {
  VAR_3 = FUNC_3(&VAR_2->cancelled_list);

  FUNC_0(VAR_2, VAR_3, -VAR_0);
 }
}
