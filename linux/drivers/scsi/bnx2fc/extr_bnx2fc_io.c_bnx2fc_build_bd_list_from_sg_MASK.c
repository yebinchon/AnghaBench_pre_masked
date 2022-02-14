
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct fcoe_bd_ctx {scalar_t__ flags; scalar_t__ buf_len; scalar_t__ buf_addr_hi; scalar_t__ buf_addr_lo; } ;
struct bnx2fc_cmd {int xid; TYPE_1__* bd_tbl; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_2__ {int bd_valid; struct fcoe_bd_ctx* bd_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2fc_cmd*) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_3(struct bnx2fc_cmd *VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_2->sc_cmd;
 struct fcoe_bd_ctx *VAR_4 = VAR_2->bd_tbl->bd_tbl;
 int VAR_5;

 if (FUNC_2(VAR_3)) {
  VAR_5 = FUNC_0(VAR_2);
  if (VAR_5 == 0)
   return -VAR_1;
 } else {
  VAR_5 = 0;
  VAR_4[0].buf_addr_lo = VAR_4[0].buf_addr_hi = 0;
  VAR_4[0].buf_len = VAR_4[0].flags = 0;
 }
 VAR_2->bd_tbl->bd_valid = VAR_5;





 if (VAR_5 > VAR_0) {
  FUNC_1("bd_count = %d exceeded FW supported max BD(255), task_id = 0x%x\n",
         VAR_5, VAR_2->xid);
  return -VAR_1;
 }

 return 0;
}
