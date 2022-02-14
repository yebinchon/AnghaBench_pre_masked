
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hi; scalar_t__ lo; } ;
struct scsi_sge {scalar_t__ sge_len; TYPE_1__ sge_addr; } ;
struct scsi_cmnd {int dummy; } ;
struct qedf_ioreq {TYPE_2__* bd_tbl; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_4__ {int bd_valid; struct scsi_sge* bd_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct qedf_ioreq*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_2(struct qedf_ioreq *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->sc_cmd;
 struct scsi_sge *VAR_3 = VAR_1->bd_tbl->bd_tbl;
 int VAR_4;

 if (FUNC_1(VAR_2)) {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == 0)
   return -VAR_0;
 } else {
  VAR_4 = 0;
  VAR_3[0].sge_addr.lo = VAR_3[0].sge_addr.hi = 0;
  VAR_3[0].sge_len = 0;
 }
 VAR_1->bd_tbl->bd_valid = VAR_4;

 return 0;
}
