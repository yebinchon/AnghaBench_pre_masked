
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct cxgbi_sock {size_t port_id; TYPE_1__* cdev; int tid; int flags; int state; } ;
struct cpl_abort_req {int cmd; } ;
struct TYPE_2__ {int * ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, struct sk_buff *VAR_4)
{
 struct cxgbi_sock *VAR_5 = (struct cxgbi_sock *)VAR_3;
 struct cpl_abort_req *VAR_6;

 FUNC_1(1 << VAR_2 | 1 << VAR_1,
  "csk 0x%p,%u,0x%lx, tid %u, abort.\n",
  VAR_5, VAR_5->state, VAR_5->flags, VAR_5->tid);
 VAR_6 = (struct cpl_abort_req *)VAR_4->data;
 VAR_6->cmd = VAR_0;
 FUNC_0(VAR_5->cdev->ports[VAR_5->port_id], VAR_4);
}
