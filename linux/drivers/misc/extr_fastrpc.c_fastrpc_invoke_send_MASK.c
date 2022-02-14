
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct fastrpc_user {int pd; scalar_t__ tgid; struct fastrpc_channel_ctx* cctx; } ;
struct fastrpc_session_ctx {int dummy; } ;
struct fastrpc_msg {int ctx; int size; int addr; int sc; int handle; scalar_t__ pid; int tid; } ;
struct fastrpc_invoke_ctx {int ctxid; int msg_sz; TYPE_1__* buf; int sc; struct fastrpc_msg msg; struct fastrpc_user* fl; } ;
struct fastrpc_channel_ctx {TYPE_2__* rpdev; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int ept; } ;
struct TYPE_4__ {int phys; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct fastrpc_invoke_ctx*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static int FUNC_3(struct fastrpc_session_ctx *VAR_2,
          struct fastrpc_invoke_ctx *VAR_3,
          u32 VAR_4, uint32_t VAR_5)
{
 struct fastrpc_channel_ctx *VAR_6;
 struct fastrpc_user *VAR_7 = VAR_3->fl;
 struct fastrpc_msg *VAR_8 = &VAR_3->msg;

 VAR_6 = VAR_7->cctx;
 VAR_8->pid = VAR_7->tgid;
 VAR_8->tid = VAR_1->pid;

 if (VAR_4)
  VAR_8->pid = 0;

 VAR_8->ctx = VAR_3->ctxid | VAR_7->pd;
 VAR_8->handle = VAR_5;
 VAR_8->sc = VAR_3->sc;
 VAR_8->addr = VAR_3->buf ? VAR_3->buf->phys : 0;
 VAR_8->size = FUNC_1(VAR_3->msg_sz, VAR_0);
 FUNC_0(VAR_3);

 return FUNC_2(VAR_6->rpdev->ept, (void *)VAR_8, sizeof(*VAR_8));
}
