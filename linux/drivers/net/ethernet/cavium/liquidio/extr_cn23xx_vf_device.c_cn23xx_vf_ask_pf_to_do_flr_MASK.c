
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int cmd; scalar_t__ resp_needed; int type; } ;
struct TYPE_4__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octeon_mbox_cmd {int * fn_arg; int * fn; scalar_t__ recv_status; scalar_t__ recv_len; scalar_t__ q_no; TYPE_2__ msg; } ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct octeon_device*,struct octeon_mbox_cmd*) ;

void FUNC_1(struct octeon_device *VAR_2)
{
 struct octeon_mbox_cmd VAR_3;

 VAR_3.msg.u64 = 0;
 VAR_3.msg.s.type = VAR_0;
 VAR_3.msg.s.resp_needed = 0;
 VAR_3.msg.s.cmd = VAR_1;
 VAR_3.msg.s.len = 1;
 VAR_3.q_no = 0;
 VAR_3.recv_len = 0;
 VAR_3.recv_status = 0;
 VAR_3.fn = ((void*)0);
 VAR_3.fn_arg = ((void*)0);

 FUNC_0(VAR_2, &VAR_3);
}
