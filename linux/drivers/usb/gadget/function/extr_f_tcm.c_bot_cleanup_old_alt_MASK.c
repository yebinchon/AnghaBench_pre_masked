
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * buf; int * req; } ;
struct TYPE_3__ {int * req; } ;
struct f_uas {int flags; TYPE_2__ cmd; TYPE_1__ bot_status; int * bot_req_out; int * bot_req_in; int ep_in; int ep_out; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct f_uas *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_1(VAR_1->ep_in);
 FUNC_1(VAR_1->ep_out);

 if (!VAR_1->bot_req_in)
  return;

 FUNC_2(VAR_1->ep_in, VAR_1->bot_req_in);
 FUNC_2(VAR_1->ep_out, VAR_1->bot_req_out);
 FUNC_2(VAR_1->ep_out, VAR_1->cmd.req);
 FUNC_2(VAR_1->ep_in, VAR_1->bot_status.req);

 FUNC_0(VAR_1->cmd.buf);

 VAR_1->bot_req_in = ((void*)0);
 VAR_1->bot_req_out = ((void*)0);
 VAR_1->cmd.req = ((void*)0);
 VAR_1->bot_status.req = ((void*)0);
 VAR_1->cmd.buf = ((void*)0);
}
