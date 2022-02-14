
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pktq {scalar_t__ len; int hi_prec; TYPE_1__* q; } ;
struct TYPE_2__ {struct sk_buff_head skblist; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (struct sk_buff_head*) ;

struct sk_buff *FUNC_2(struct pktq *VAR_0, uint VAR_1,
          int *VAR_2)
{
 struct sk_buff_head *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;

 if (VAR_0->len == 0)
  return ((void*)0);

 while ((VAR_5 = VAR_0->hi_prec) > 0 &&
        FUNC_1(&VAR_0->q[VAR_5].skblist))
  VAR_0->hi_prec--;

 while ((VAR_1 & (1 << VAR_5)) == 0 ||
        FUNC_1(&VAR_0->q[VAR_5].skblist))
  if (VAR_5-- == 0)
   return ((void*)0);

 VAR_3 = &VAR_0->q[VAR_5].skblist;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_0->len--;

 if (VAR_2)
  *VAR_2 = VAR_5;

 return VAR_4;
}
