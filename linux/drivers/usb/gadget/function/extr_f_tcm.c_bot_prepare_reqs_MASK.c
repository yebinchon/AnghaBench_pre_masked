
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* req; TYPE_6__* buf; } ;
struct TYPE_12__ {int Signature; } ;
struct TYPE_8__ {TYPE_4__* req; TYPE_6__ csw; } ;
struct f_uas {TYPE_4__* bot_req_in; TYPE_3__* ep_in; TYPE_4__* bot_req_out; TYPE_3__* ep_out; TYPE_2__ cmd; TYPE_1__ bot_status; } ;
struct TYPE_11__ {struct f_uas* context; int length; TYPE_6__* buf; int complete; } ;
struct TYPE_10__ {int maxpacket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct f_uas*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(struct f_uas *VAR_6)
{
 int VAR_7;

 VAR_6->bot_req_in = FUNC_5(VAR_6->ep_in, VAR_1);
 if (!VAR_6->bot_req_in)
  goto err;

 VAR_6->bot_req_out = FUNC_5(VAR_6->ep_out, VAR_1);
 if (!VAR_6->bot_req_out)
  goto err_out;

 VAR_6->cmd.req = FUNC_5(VAR_6->ep_out, VAR_1);
 if (!VAR_6->cmd.req)
  goto err_cmd;

 VAR_6->bot_status.req = FUNC_5(VAR_6->ep_in, VAR_1);
 if (!VAR_6->bot_status.req)
  goto err_sts;

 VAR_6->bot_status.req->buf = &VAR_6->bot_status.csw;
 VAR_6->bot_status.req->length = VAR_3;
 VAR_6->bot_status.req->complete = VAR_5;
 VAR_6->bot_status.csw.Signature = FUNC_1(VAR_2);

 VAR_6->cmd.buf = FUNC_3(VAR_6->ep_out->maxpacket, VAR_1);
 if (!VAR_6->cmd.buf)
  goto err_buf;

 VAR_6->cmd.req->complete = VAR_4;
 VAR_6->cmd.req->buf = VAR_6->cmd.buf;
 VAR_6->cmd.req->length = VAR_6->ep_out->maxpacket;
 VAR_6->cmd.req->context = VAR_6;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  goto err_queue;
 return 0;
err_queue:
 FUNC_2(VAR_6->cmd.buf);
 VAR_6->cmd.buf = ((void*)0);
err_buf:
 FUNC_6(VAR_6->ep_in, VAR_6->bot_status.req);
err_sts:
 FUNC_6(VAR_6->ep_out, VAR_6->cmd.req);
 VAR_6->cmd.req = ((void*)0);
err_cmd:
 FUNC_6(VAR_6->ep_out, VAR_6->bot_req_out);
 VAR_6->bot_req_out = ((void*)0);
err_out:
 FUNC_6(VAR_6->ep_in, VAR_6->bot_req_in);
 VAR_6->bot_req_in = ((void*)0);
err:
 FUNC_4("BOT: endpoint setup failed\n");
 return -VAR_0;
}
