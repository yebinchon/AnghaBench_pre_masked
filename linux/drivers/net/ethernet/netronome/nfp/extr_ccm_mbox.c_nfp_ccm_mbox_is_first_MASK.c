
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct nfp_net {TYPE_1__ mbox_cmsg; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

__attribute__((used)) static bool FUNC_1(struct nfp_net *VAR_0, struct sk_buff *VAR_1)
{
 return FUNC_0(&VAR_0->mbox_cmsg.queue, VAR_1);
}
