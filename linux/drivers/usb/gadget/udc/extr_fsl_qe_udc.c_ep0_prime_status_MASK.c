
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_udc {int ep0_dir; int ep0_state; struct qe_ep* eps; } ;
struct qe_ep {int txframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qe_ep*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct qe_udc *VAR_6, int VAR_7)
{

 struct qe_ep *VAR_8 = &VAR_6->eps[0];

 if (VAR_7 == VAR_3) {
  VAR_6->ep0_state = VAR_0;
  VAR_6->ep0_dir = VAR_3;
  FUNC_0(VAR_8, VAR_8->txframe, VAR_2 | VAR_1);
 } else {
  VAR_6->ep0_dir = VAR_4;
  VAR_6->ep0_state = VAR_5;
 }

 return 0;
}
