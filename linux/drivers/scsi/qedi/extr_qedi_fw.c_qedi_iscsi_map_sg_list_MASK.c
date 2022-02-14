
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hi; scalar_t__ lo; } ;
struct scsi_sge {scalar_t__ sge_len; TYPE_1__ sge_addr; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_5__ {int sge_valid; struct scsi_sge* sge_tbl; } ;
struct qedi_cmd {TYPE_2__ io_tbl; TYPE_3__* conn; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_6__ {int qedi; } ;


 int FUNC_0 (int ,struct qedi_cmd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_2(struct qedi_cmd *VAR_0)
{
 int VAR_1;
 struct scsi_cmnd *VAR_2 = VAR_0->scsi_cmd;

 if (FUNC_1(VAR_2)) {
  VAR_1 = FUNC_0(VAR_0->conn->qedi, VAR_0);
  if (VAR_1 == 0)
   return;
 } else {
  struct scsi_sge *VAR_3 = VAR_0->io_tbl.sge_tbl;

  VAR_3[0].sge_addr.lo = 0;
  VAR_3[0].sge_addr.hi = 0;
  VAR_3[0].sge_len = 0;
  VAR_1 = 0;
 }
 VAR_0->io_tbl.sge_valid = VAR_1;
}
