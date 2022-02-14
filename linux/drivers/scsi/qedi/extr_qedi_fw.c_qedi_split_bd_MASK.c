
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int lo; int hi; } ;
struct scsi_sge {scalar_t__ sge_len; TYPE_2__ sge_addr; } ;
struct TYPE_5__ {struct scsi_sge* sge_tbl; } ;
struct qedi_cmd {TYPE_4__* conn; TYPE_1__ io_tbl; } ;
struct TYPE_8__ {TYPE_3__* qedi; } ;
struct TYPE_7__ {int dbg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct qedi_cmd *VAR_3, u64 VAR_4, int VAR_5,
    int VAR_6)
{
 struct scsi_sge *VAR_7 = VAR_3->io_tbl.sge_tbl;
 int VAR_8, VAR_9;

 VAR_9 = 0;

 while (VAR_5) {
  if (VAR_4 % VAR_2)
   VAR_8 =
       (VAR_2 - (VAR_4 % VAR_2));
  else
   VAR_8 = (VAR_5 > VAR_0) ? 0 :
        (VAR_5 % VAR_0);

  if (VAR_8 == 0)
   VAR_8 = VAR_0;

  VAR_7[VAR_6 + VAR_9].sge_addr.lo = (VAR_4 & 0xffffffff);
  VAR_7[VAR_6 + VAR_9].sge_addr.hi = (VAR_4 >> 32);
  VAR_7[VAR_6 + VAR_9].sge_len = (u16)VAR_8;
  FUNC_0(&VAR_3->conn->qedi->dbg_ctx, VAR_1,
     "split sge %d: addr=%llx, len=%x",
     (VAR_6 + VAR_9), VAR_4, VAR_8);

  VAR_4 += (u64)VAR_8;
  VAR_9++;
  VAR_5 -= VAR_8;
 }
 return VAR_9;
}
