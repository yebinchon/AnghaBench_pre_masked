
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct nfp_net {TYPE_1__ mbox_cmsg; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (int *,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_3(struct nfp_net *VAR_0, __be16 VAR_1, struct sk_buff *VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_1(&VAR_0->mbox_cmsg.queue);
 while (1) {
  if (FUNC_0(VAR_3) == VAR_1)
   return VAR_3;

  if (VAR_3 == VAR_2)
   return ((void*)0);
  VAR_3 = FUNC_2(&VAR_0->mbox_cmsg.queue, VAR_3);
 }
}
