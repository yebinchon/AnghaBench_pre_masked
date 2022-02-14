
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pktq {scalar_t__ len; int hi_prec; TYPE_1__* q; } ;
struct TYPE_2__ {int skblist; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct sk_buff *FUNC_2(struct pktq *VAR_0, int *VAR_1)
{
 int VAR_2;

 if (VAR_0->len == 0)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0->hi_prec; VAR_2++)
  if (!FUNC_1(&VAR_0->q[VAR_2].skblist))
   break;

 if (VAR_1)
  *VAR_1 = VAR_2;

 return FUNC_0(&VAR_0->q[VAR_2].skblist);
}
