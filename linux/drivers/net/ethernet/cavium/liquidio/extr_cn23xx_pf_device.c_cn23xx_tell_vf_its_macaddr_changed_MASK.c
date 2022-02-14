
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int len; int params; int cmd; scalar_t__ resp_needed; int type; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octeon_mbox_cmd {int q_no; TYPE_2__ msg; int * fn_arg; int * fn; scalar_t__ recv_status; scalar_t__ recv_len; } ;
struct TYPE_6__ {int vf_drv_loaded_mask; int rings_per_vf; } ;
struct octeon_device {TYPE_3__ sriov_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct octeon_device*,struct octeon_mbox_cmd*) ;

void FUNC_3(struct octeon_device *VAR_2, int VAR_3,
     u8 *VAR_4)
{
 if (VAR_2->sriov_info.vf_drv_loaded_mask & FUNC_0(VAR_3)) {
  struct octeon_mbox_cmd VAR_5;

  VAR_5.msg.u64 = 0;
  VAR_5.msg.s.type = VAR_0;
  VAR_5.msg.s.resp_needed = 0;
  VAR_5.msg.s.cmd = VAR_1;
  VAR_5.msg.s.len = 1;
  VAR_5.recv_len = 0;
  VAR_5.recv_status = 0;
  VAR_5.fn = ((void*)0);
  VAR_5.fn_arg = ((void*)0);
  FUNC_1(VAR_5.msg.s.params, VAR_4);
  VAR_5.q_no = VAR_3 * VAR_2->sriov_info.rings_per_vf;
  FUNC_2(VAR_2, &VAR_5);
 }
}
