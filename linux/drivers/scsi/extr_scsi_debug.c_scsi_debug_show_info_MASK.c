
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct sdebug_queue {int in_use_bm; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct sdebug_queue* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_30, struct Scsi_Host *VAR_31)
{
 int VAR_32, VAR_33, VAR_34;
 struct sdebug_queue *VAR_35;

 FUNC_3(VAR_30, "scsi_debug adapter driver, version %s [%s]\n",
     VAR_0, VAR_28);
 FUNC_3(VAR_30, "num_tgts=%d, %ssize=%d MB, opts=0x%x, every_nth=%d\n",
     VAR_22, "shared (ram) ", VAR_14,
     VAR_23, VAR_15);
 FUNC_3(VAR_30, "delay=%d, ndelay=%d, max_luns=%d, sector_size=%d %s\n",
     VAR_17, VAR_21, VAR_18,
     VAR_25, "bytes");
 FUNC_3(VAR_30, "cylinders=%d, heads=%d, sectors=%d, command aborts=%d\n",
     VAR_13, VAR_16, VAR_26,
     VAR_5);
 FUNC_3(VAR_30, "RESETs: device=%d, target=%d, bus=%d, host=%d\n",
     VAR_7, VAR_9, VAR_6,
     VAR_8);
 FUNC_3(VAR_30, "dix_reads=%d, dix_writes=%d, dif_errors=%d\n",
     VAR_3, VAR_4, VAR_2);
 FUNC_3(VAR_30, "usec_in_jiffy=%lu, statistics=%d\n", VAR_1 / 1000,
     VAR_27);
 FUNC_3(VAR_30, "cmnd_count=%d, completions=%d, %s=%d, a_tsf=%d\n",
     FUNC_0(&VAR_11),
     FUNC_0(&VAR_12),
     "miss_cpus", FUNC_0(&VAR_20),
     FUNC_0(&VAR_10));

 FUNC_3(VAR_30, "submit_queues=%d\n", VAR_29);
 for (VAR_33 = 0, VAR_35 = VAR_24; VAR_33 < VAR_29; ++VAR_33, ++VAR_35) {
  FUNC_3(VAR_30, "  queue %d:\n", VAR_33);
  VAR_32 = FUNC_1(VAR_35->in_use_bm, VAR_19);
  if (VAR_32 != VAR_19) {
   VAR_34 = FUNC_2(VAR_35->in_use_bm, VAR_19);
   FUNC_3(VAR_30, "    in_use_bm BUSY: %s: %d,%d\n",
       "first,last bits", VAR_32, VAR_34);
  }
 }
 return 0;
}
