
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {struct adapter* private; } ;
struct mbox_cmd_log {uintptr_t cursor; int size; } ;
struct mbox_cmd {int* cmd; int execute; int access; int timestamp; int seqno; } ;
struct adapter {struct mbox_cmd_log* mbox_log; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct mbox_cmd* FUNC_0 (struct mbox_cmd_log*,int) ;
 int FUNC_1 (struct seq_file*,char*,char*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct adapter *VAR_4 = VAR_2->private;
 struct mbox_cmd_log *VAR_5 = VAR_4->mbox_log;
 struct mbox_cmd *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3 == VAR_1) {
  FUNC_1(VAR_2,
      "%10s  %15s  %5s  %5s  %s\n",
      "Seq#", "Tstamp", "Atime", "Etime",
      "Command/Reply");
  return 0;
 }

 VAR_7 = VAR_5->cursor + ((uintptr_t)VAR_3 - 2);
 if (VAR_7 >= VAR_5->size)
  VAR_7 -= VAR_5->size;
 VAR_6 = FUNC_0(VAR_5, VAR_7);


 if (VAR_6->timestamp == 0)
  return 0;

 FUNC_1(VAR_2, "%10u  %15llu  %5d  %5d",
     VAR_6->seqno, VAR_6->timestamp,
     VAR_6->access, VAR_6->execute);
 for (VAR_8 = 0; VAR_8 < VAR_0 / 8; VAR_8++) {
  u64 VAR_9 = VAR_6->cmd[VAR_8];
  u32 VAR_10 = (u32)(VAR_9 >> 32);
  u32 VAR_11 = (u32)VAR_9;

  FUNC_1(VAR_2, "  %08x %08x", VAR_10, VAR_11);
 }
 FUNC_2(VAR_2, "\n");
 return 0;
}
