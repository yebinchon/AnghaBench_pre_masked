
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct qedi_ctx* private; } ;
struct qedi_io_log {int blk_rsp_cpu; int intr_cpu; int req_cpu; int blk_req_cpu; int jiffies; int result; int sg_count; int bufflen; int * lba; int op; int lun; int cid; int task_id; int direction; } ;
struct qedi_ctx {int io_trace_idx; int io_trace_lock; struct qedi_io_log* io_trace_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct qedi_ctx *VAR_5 = VAR_1->private;
 struct qedi_io_log *VAR_6;
 unsigned long VAR_7;

 FUNC_1(VAR_1, " DUMP IO LOGS:\n");
 FUNC_2(&VAR_5->io_trace_lock, VAR_7);
 VAR_4 = VAR_5->io_trace_idx;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_6 = &VAR_5->io_trace_buf[VAR_4];
  FUNC_0(VAR_1, "iodir-%d:", VAR_6->direction);
  FUNC_0(VAR_1, "tid-0x%x:", VAR_6->task_id);
  FUNC_0(VAR_1, "cid-0x%x:", VAR_6->cid);
  FUNC_0(VAR_1, "lun-%d:", VAR_6->lun);
  FUNC_0(VAR_1, "op-0x%02x:", VAR_6->op);
  FUNC_0(VAR_1, "0x%02x%02x%02x%02x:", VAR_6->lba[0],
      VAR_6->lba[1], VAR_6->lba[2], VAR_6->lba[3]);
  FUNC_0(VAR_1, "buflen-%d:", VAR_6->bufflen);
  FUNC_0(VAR_1, "sgcnt-%d:", VAR_6->sg_count);
  FUNC_0(VAR_1, "res-0x%08x:", VAR_6->result);
  FUNC_0(VAR_1, "jif-%lu:", VAR_6->jiffies);
  FUNC_0(VAR_1, "blk_req_cpu-%d:", VAR_6->blk_req_cpu);
  FUNC_0(VAR_1, "req_cpu-%d:", VAR_6->req_cpu);
  FUNC_0(VAR_1, "intr_cpu-%d:", VAR_6->intr_cpu);
  FUNC_0(VAR_1, "blk_rsp_cpu-%d\n", VAR_6->blk_rsp_cpu);

  VAR_4++;
  if (VAR_4 == VAR_0)
   VAR_4 = 0;
 }
 FUNC_3(&VAR_5->io_trace_lock, VAR_7);
 return 0;
}
