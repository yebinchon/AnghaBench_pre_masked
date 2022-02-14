
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qe_req {int dummy; } ;
struct qe_ep {int txframe; scalar_t__ last; scalar_t__ sent; int * tx_req; } ;


 int FUNC_0 (struct qe_ep*,int ) ;
 int FUNC_1 (struct qe_ep*,int ) ;

__attribute__((used)) static int FUNC_2(struct qe_ep *VAR_0, struct qe_req *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->tx_req == ((void*)0)) {
  VAR_0->sent = 0;
  VAR_0->last = 0;
  FUNC_1(VAR_0, 0);
  VAR_2 = FUNC_0(VAR_0, VAR_0->txframe);
 }
 return VAR_2;
}
