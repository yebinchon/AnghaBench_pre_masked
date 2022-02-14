
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {TYPE_2__ queue; } ;
struct nfp_net {TYPE_1__ mbox_cmsg; } ;
struct nfp_ccm_mbox_cmsg_cb {int err; int state; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfp_net *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_4;
 struct sk_buff *VAR_5;

 FUNC_3(&VAR_1->mbox_cmsg.queue.lock);
 do {
  VAR_5 = FUNC_0(&VAR_1->mbox_cmsg.queue);
  VAR_4 = (void *)VAR_5->cb;

  VAR_4->err = VAR_3;
  FUNC_2();
  VAR_4->state = VAR_0;
 } while (VAR_5 != VAR_2);

 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->mbox_cmsg.queue.lock);
}
