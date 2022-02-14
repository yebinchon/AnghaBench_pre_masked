
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * buf; int * req; } ;
struct f_uas {TYPE_1__ cmd; int ep_cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct f_uas *VAR_0)
{
 FUNC_1(VAR_0->ep_cmd, VAR_0->cmd.req);
 FUNC_0(VAR_0->cmd.buf);
 VAR_0->cmd.req = ((void*)0);
 VAR_0->cmd.buf = ((void*)0);
}
