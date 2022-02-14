
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int flags; int vp_index; scalar_t__ srr_reject_code_expl; scalar_t__ srr_reject_code; scalar_t__ srr_flags; int srr_ui; int srr_rel_offs; int exchange_address; int fw_handle; int status_subcode; int status; int srr_rx_id; int nport_handle; int handle; } ;
struct TYPE_16__ {TYPE_5__ isp24; } ;
struct nack_to_isp {int entry_count; TYPE_6__ u; int ox_id; int entry_type; } ;
struct TYPE_17__ {int flags; int vp_index; int srr_ui; int srr_rel_offs; int exchange_address; int fw_handle; int status_subcode; int status; int srr_rx_id; int nport_handle; } ;
struct TYPE_18__ {TYPE_7__ isp24; } ;
struct imm_ntfy_from_isp {TYPE_8__ u; int ox_id; } ;
struct TYPE_11__ {struct imm_ntfy_from_isp* ntfy; } ;
struct TYPE_12__ {TYPE_1__ nack; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_14__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_19__ {int handle; TYPE_4__ u; } ;
typedef TYPE_9__ srb_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(srb_t *VAR_3,
 struct nack_to_isp *VAR_4)
{
 struct imm_ntfy_from_isp *VAR_5 = VAR_3->u.iocb_cmd.u.nack.ntfy;

 VAR_4->entry_type = VAR_2;
 VAR_4->entry_count = 1;
 VAR_4->ox_id = VAR_5->ox_id;

 VAR_4->u.isp24.handle = VAR_3->handle;
 VAR_4->u.isp24.nport_handle = VAR_5->u.isp24.nport_handle;
 if (FUNC_1(VAR_5->u.isp24.status) == VAR_0) {
  VAR_4->u.isp24.flags = VAR_5->u.isp24.flags &
   FUNC_0(VAR_1);
 }
 VAR_4->u.isp24.srr_rx_id = VAR_5->u.isp24.srr_rx_id;
 VAR_4->u.isp24.status = VAR_5->u.isp24.status;
 VAR_4->u.isp24.status_subcode = VAR_5->u.isp24.status_subcode;
 VAR_4->u.isp24.fw_handle = VAR_5->u.isp24.fw_handle;
 VAR_4->u.isp24.exchange_address = VAR_5->u.isp24.exchange_address;
 VAR_4->u.isp24.srr_rel_offs = VAR_5->u.isp24.srr_rel_offs;
 VAR_4->u.isp24.srr_ui = VAR_5->u.isp24.srr_ui;
 VAR_4->u.isp24.srr_flags = 0;
 VAR_4->u.isp24.srr_reject_code = 0;
 VAR_4->u.isp24.srr_reject_code_expl = 0;
 VAR_4->u.isp24.vp_index = VAR_5->u.isp24.vp_index;
}
