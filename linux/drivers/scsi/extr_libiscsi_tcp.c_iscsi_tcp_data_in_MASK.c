
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_tcp_task {int exp_datasn; unsigned int data_offset; } ;
struct TYPE_6__ {unsigned int datalen; scalar_t__ hdr; } ;
struct iscsi_tcp_conn {TYPE_3__ in; } ;
struct iscsi_task {TYPE_2__* sc; struct iscsi_tcp_task* dd_data; } ;
struct iscsi_nopin {int dummy; } ;
struct iscsi_data_rsp {int flags; int offset; int datasn; } ;
struct iscsi_conn {int datain_pdus_cnt; int session; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_4__ {unsigned int length; } ;
struct TYPE_5__ {TYPE_1__ sdb; } ;


 int FUNC_0 (struct iscsi_conn*,char*,unsigned int,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iscsi_nopin*) ;

__attribute__((used)) static int FUNC_3(struct iscsi_conn *VAR_3, struct iscsi_task *VAR_4)
{
 struct iscsi_tcp_conn *VAR_5 = VAR_3->dd_data;
 struct iscsi_tcp_task *VAR_6 = VAR_4->dd_data;
 struct iscsi_data_rsp *VAR_7 = (struct iscsi_data_rsp *)VAR_5->in.hdr;
 int VAR_8 = FUNC_1(VAR_7->datasn);
 unsigned VAR_9 = VAR_4->sc->sdb.length;





 if (!(VAR_7->flags & VAR_2))
  FUNC_2(VAR_3->session, (struct iscsi_nopin*)VAR_7);

 if (VAR_5->in.datalen == 0)
  return 0;

 if (VAR_6->exp_datasn != VAR_8) {
  FUNC_0(VAR_3, "task->exp_datasn(%d) != rhdr->datasn(%d)"
         "\n", VAR_6->exp_datasn, VAR_8);
  return VAR_0;
 }

 VAR_6->exp_datasn++;

 VAR_6->data_offset = FUNC_1(VAR_7->offset);
 if (VAR_6->data_offset + VAR_5->in.datalen > VAR_9) {
  FUNC_0(VAR_3, "data_offset(%d) + data_len(%d) > "
         "total_length_in(%d)\n", VAR_6->data_offset,
         VAR_5->in.datalen, VAR_9);
  return VAR_1;
 }

 VAR_3->datain_pdus_cnt++;
 return 0;
}
