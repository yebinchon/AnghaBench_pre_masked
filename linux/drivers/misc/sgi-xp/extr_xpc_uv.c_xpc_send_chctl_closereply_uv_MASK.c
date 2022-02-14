
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {int number; } ;
struct xpc_activate_mq_msg_chctl_closereply_uv {int ch_number; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct xpc_channel*,unsigned long*,struct xpc_activate_mq_msg_chctl_closereply_uv*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct xpc_channel *VAR_1, unsigned long *VAR_2)
{
 struct xpc_activate_mq_msg_chctl_closereply_uv VAR_3;

 VAR_3.ch_number = VAR_1->number;
 FUNC_0(VAR_1, VAR_2, &VAR_3, sizeof(VAR_3),
        VAR_0);
}
