
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* req; scalar_t__ buf; } ;
struct f_uas {TYPE_1__ cmd; TYPE_2__* ep_cmd; } ;
struct TYPE_8__ {struct f_uas* context; int length; scalar_t__ buf; int complete; } ;
struct TYPE_7__ {int maxpacket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct f_uas *VAR_3)
{
 VAR_3->cmd.req = FUNC_1(VAR_3->ep_cmd, VAR_1);
 if (!VAR_3->cmd.req)
  goto err;

 VAR_3->cmd.buf = FUNC_0(VAR_3->ep_cmd->maxpacket, VAR_1);
 if (!VAR_3->cmd.buf)
  goto err_buf;

 VAR_3->cmd.req->complete = VAR_2;
 VAR_3->cmd.req->buf = VAR_3->cmd.buf;
 VAR_3->cmd.req->length = VAR_3->ep_cmd->maxpacket;
 VAR_3->cmd.req->context = VAR_3;
 return 0;

err_buf:
 FUNC_2(VAR_3->ep_cmd, VAR_3->cmd.req);
err:
 return -VAR_0;
}
