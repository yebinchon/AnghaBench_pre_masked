
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pktq {int len; TYPE_1__* q; } ;
struct TYPE_2__ {struct sk_buff_head skblist; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;

struct sk_buff *FUNC_1(struct pktq *VAR_0, int VAR_1)
{
 struct sk_buff_head *VAR_2;
 struct sk_buff *VAR_3;

 VAR_2 = &VAR_0->q[VAR_1].skblist;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_0->len--;
 return VAR_3;
}
