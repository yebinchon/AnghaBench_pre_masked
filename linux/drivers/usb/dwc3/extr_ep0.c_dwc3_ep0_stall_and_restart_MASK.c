
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_request {int dummy; } ;
struct dwc3_ep {int pending_list; void* flags; } ;
struct dwc3 {int delayed_status; int ep0state; struct dwc3_ep** eps; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dwc3_ep*,int,int) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3_ep*,struct dwc3_request*,int ) ;
 int FUNC_3 (int *) ;
 struct dwc3_request* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_3)
{
 struct dwc3_ep *VAR_4;


 VAR_4 = VAR_3->eps[1];
 VAR_4->flags = VAR_0;


 VAR_4 = VAR_3->eps[0];
 FUNC_0(VAR_4, 1, 0);
 VAR_4->flags = VAR_0;
 VAR_3->delayed_status = 0;

 if (!FUNC_3(&VAR_4->pending_list)) {
  struct dwc3_request *VAR_5;

  VAR_5 = FUNC_4(&VAR_4->pending_list);
  FUNC_2(VAR_4, VAR_5, -VAR_1);
 }

 VAR_3->ep0state = VAR_2;
 FUNC_1(VAR_3);
}
