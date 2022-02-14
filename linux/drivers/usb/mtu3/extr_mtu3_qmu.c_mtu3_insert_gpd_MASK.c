
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3_request {int dummy; } ;
struct mtu3_ep {scalar_t__ is_in; } ;


 int FUNC_0 (struct mtu3_ep*,struct mtu3_request*) ;
 int FUNC_1 (struct mtu3_ep*,struct mtu3_request*) ;

void FUNC_2(struct mtu3_ep *VAR_0, struct mtu3_request *VAR_1)
{

 if (VAR_0->is_in)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
