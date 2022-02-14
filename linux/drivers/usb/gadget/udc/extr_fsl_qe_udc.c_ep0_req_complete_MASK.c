
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_udc {int ep0_state; int dev; struct qe_ep* eps; } ;
struct qe_req {int dummy; } ;
struct qe_ep {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qe_ep*,struct qe_req*,int ) ;
 int FUNC_2 (struct qe_udc*,int ) ;
 int FUNC_3 (struct qe_udc*) ;

__attribute__((used)) static void FUNC_4(struct qe_udc *VAR_2, struct qe_req *VAR_3)
{
 struct qe_ep *VAR_4 = &VAR_2->eps[0];


 switch (VAR_2->ep0_state) {
 case 130:
  FUNC_1(VAR_4, VAR_3, 0);

  if (FUNC_2(VAR_2, VAR_1))
   FUNC_3(VAR_2);
  break;

 case 132:
  FUNC_1(VAR_4, VAR_3, 0);
  VAR_2->ep0_state = 128;
  break;

 case 131:
  FUNC_1(VAR_4, VAR_3, 0);

  if (FUNC_2(VAR_2, VAR_0))
   FUNC_3(VAR_2);
  break;

 case 129:
  FUNC_1(VAR_4, VAR_3, 0);
  VAR_2->ep0_state = 128;
  break;

 case 128:
  FUNC_0(VAR_2->dev, "Unexpected interrupt\n");
  break;

 default:
  FUNC_3(VAR_2);
  break;
 }
}
