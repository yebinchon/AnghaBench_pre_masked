
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mm_struct {unsigned long total_vm; unsigned long hiwater_vm; unsigned long hiwater_rss; unsigned long start_code; unsigned long exec_vm; unsigned long locked_vm; unsigned long data_vm; unsigned long stack_vm; int pinned_vm; int end_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (char*,unsigned long) ;
 unsigned long FUNC_2 (int *) ;
 unsigned long FUNC_3 (struct mm_struct*,int ) ;
 int FUNC_4 (struct seq_file*,struct mm_struct*) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct seq_file*,char*,int,int) ;
 int FUNC_8 (struct seq_file*,char*) ;

void FUNC_9(struct seq_file *VAR_6, struct mm_struct *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_11 = FUNC_3(VAR_7, VAR_0);
 VAR_12 = FUNC_3(VAR_7, VAR_1);
 VAR_13 = FUNC_3(VAR_7, VAR_2);
 VAR_14 = VAR_15 = VAR_7->total_vm;
 if (VAR_14 < VAR_7->hiwater_vm)
  VAR_14 = VAR_7->hiwater_vm;
 VAR_16 = VAR_17 = VAR_11 + VAR_12 + VAR_13;
 if (VAR_16 < VAR_7->hiwater_rss)
  VAR_16 = VAR_7->hiwater_rss;


 VAR_8 = FUNC_0(VAR_7->end_code) - (VAR_7->start_code & VAR_4);
 VAR_8 = FUNC_5(VAR_8, VAR_7->exec_vm << VAR_5);
 VAR_9 = (VAR_7->exec_vm << VAR_5) - VAR_8;

 VAR_10 = FUNC_3(VAR_7, VAR_3);
 FUNC_1("VmPeak:\t", VAR_14);
 FUNC_1(" kB\nVmSize:\t", VAR_15);
 FUNC_1(" kB\nVmLck:\t", VAR_7->locked_vm);
 FUNC_1(" kB\nVmPin:\t", FUNC_2(&VAR_7->pinned_vm));
 FUNC_1(" kB\nVmHWM:\t", VAR_16);
 FUNC_1(" kB\nVmRSS:\t", VAR_17);
 FUNC_1(" kB\nRssAnon:\t", VAR_11);
 FUNC_1(" kB\nRssFile:\t", VAR_12);
 FUNC_1(" kB\nRssShmem:\t", VAR_13);
 FUNC_1(" kB\nVmData:\t", VAR_7->data_vm);
 FUNC_1(" kB\nVmStk:\t", VAR_7->stack_vm);
 FUNC_7(VAR_6,
      " kB\nVmExe:\t", VAR_8 >> 10, 8);
 FUNC_7(VAR_6,
      " kB\nVmLib:\t", VAR_9 >> 10, 8);
 FUNC_7(VAR_6,
      " kB\nVmPTE:\t", FUNC_6(VAR_7) >> 10, 8);
 FUNC_1(" kB\nVmSwap:\t", VAR_10);
 FUNC_8(VAR_6, " kB\n");
 FUNC_4(VAR_6, VAR_7);
}
