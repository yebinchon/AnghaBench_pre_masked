
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* cb; scalar_t__ len; } ;
struct ppp_channel {struct channel* ppp; } ;
struct channel {int upl; scalar_t__ ppp; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct channel*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ppp_channel *VAR_1, int VAR_2)
{
 struct channel *VAR_3 = VAR_1->ppp;
 struct sk_buff *VAR_4;

 if (!VAR_3)
  return;

 FUNC_2(&VAR_3->upl);
 if (VAR_3->ppp) {
  VAR_4 = FUNC_0(0, VAR_0);
  if (VAR_4) {
   VAR_4->len = 0;
   VAR_4->cb[0] = VAR_2;
   FUNC_1(VAR_3->ppp, VAR_4, VAR_3);
  }
 }
 FUNC_3(&VAR_3->upl);
}
