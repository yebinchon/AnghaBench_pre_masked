
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct req_que {int ring_index; int length; int id; int ring_ptr; int ring; } ;
struct qla_hw_data {int portnum; scalar_t__ nxdb_wr_ptr; int nxdb_rd_ptr; struct req_que** req_q_map; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct qla_hw_data*,unsigned long,int) ;
 int FUNC_3 () ;

void
FUNC_4(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 struct req_que *VAR_3 = VAR_2->req_q_map[0];
 uint32_t VAR_4;


 VAR_3->ring_index++;
 if (VAR_3->ring_index == VAR_3->length) {
  VAR_3->ring_index = 0;
  VAR_3->ring_ptr = VAR_3->ring;
 } else
  VAR_3->ring_ptr++;

 VAR_4 = 0x04 | (VAR_2->portnum << 5);

 VAR_4 = VAR_4 | (VAR_3->id << 8) | (VAR_3->ring_index << 16);
 if (VAR_0)
  FUNC_2(VAR_2, (unsigned long)VAR_2->nxdb_wr_ptr, VAR_4);
 else {
  FUNC_1(VAR_2->nxdb_wr_ptr, VAR_4);
  FUNC_3();
  while (FUNC_0(VAR_2->nxdb_rd_ptr) != VAR_4) {
   FUNC_1(VAR_2->nxdb_wr_ptr, VAR_4);
   FUNC_3();
  }
 }
}
