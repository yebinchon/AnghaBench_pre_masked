
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recv_msg_list; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_channel {TYPE_2__ sn; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct xpc_channel *VAR_0)
{
 return FUNC_0(&VAR_0->sn.uv.recv_msg_list);
}
