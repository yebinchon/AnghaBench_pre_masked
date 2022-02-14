
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {unsigned long bufferram; unsigned long totalram; unsigned long freeram; unsigned long totalhigh; unsigned long freehigh; unsigned long totalswap; unsigned long freeswap; unsigned long sharedram; } ;
struct seq_file {int dummy; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*) ;
 int VAR_31 ;
 int VAR_32 ;
 unsigned long FUNC_5 () ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (struct seq_file*,char*,int) ;
 int FUNC_8 (struct seq_file*,char*,unsigned long) ;
 long FUNC_9 () ;
 int FUNC_10 (struct sysinfo*) ;
 int FUNC_11 (struct sysinfo*) ;
 unsigned long FUNC_12 () ;
 unsigned long VAR_33 ;
 unsigned long FUNC_13 () ;
 int VAR_34 ;
 unsigned long FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct seq_file *VAR_35, void *VAR_36)
{
 struct sysinfo VAR_37;
 unsigned long VAR_38;
 long VAR_39;
 long VAR_40;
 unsigned long VAR_41[VAR_19];
 unsigned long VAR_42, VAR_43;
 int VAR_44;

 FUNC_10(&VAR_37);
 FUNC_11(&VAR_37);
 VAR_38 = FUNC_6(&VAR_34);

 VAR_39 = FUNC_2(VAR_12) -
   FUNC_12() - VAR_37.bufferram;
 if (VAR_39 < 0)
  VAR_39 = 0;

 for (VAR_44 = VAR_3; VAR_44 < VAR_19; VAR_44++)
  VAR_41[VAR_44] = FUNC_2(VAR_18 + VAR_44);

 VAR_40 = FUNC_9();
 VAR_42 = FUNC_2(VAR_24);
 VAR_43 = FUNC_2(VAR_25);

 FUNC_8(VAR_35, "MemTotal:       ", VAR_37.totalram);
 FUNC_8(VAR_35, "MemFree:        ", VAR_37.freeram);
 FUNC_8(VAR_35, "MemAvailable:   ", VAR_40);
 FUNC_8(VAR_35, "Buffers:        ", VAR_37.bufferram);
 FUNC_8(VAR_35, "Cached:         ", VAR_39);
 FUNC_8(VAR_35, "SwapCached:     ", FUNC_12());
 FUNC_8(VAR_35, "Active:         ", VAR_41[VAR_1] +
        VAR_41[VAR_2]);
 FUNC_8(VAR_35, "Inactive:       ", VAR_41[VAR_4] +
        VAR_41[VAR_5]);
 FUNC_8(VAR_35, "Active(anon):   ", VAR_41[VAR_1]);
 FUNC_8(VAR_35, "Inactive(anon): ", VAR_41[VAR_4]);
 FUNC_8(VAR_35, "Active(file):   ", VAR_41[VAR_2]);
 FUNC_8(VAR_35, "Inactive(file): ", VAR_41[VAR_5]);
 FUNC_8(VAR_35, "Unevictable:    ", VAR_41[VAR_6]);
 FUNC_8(VAR_35, "Mlocked:        ", FUNC_3(VAR_20));
 FUNC_8(VAR_35, "MmapCopy:       ",
      (unsigned long)FUNC_1(&VAR_31));


 FUNC_8(VAR_35, "SwapTotal:      ", VAR_37.totalswap);
 FUNC_8(VAR_35, "SwapFree:       ", VAR_37.freeswap);
 FUNC_8(VAR_35, "Dirty:          ",
      FUNC_2(VAR_10));
 FUNC_8(VAR_35, "Writeback:      ",
      FUNC_2(VAR_27));
 FUNC_8(VAR_35, "AnonPages:      ",
      FUNC_2(VAR_7));
 FUNC_8(VAR_35, "Mapped:         ",
      FUNC_2(VAR_11));
 FUNC_8(VAR_35, "Shmem:          ", VAR_37.sharedram);
 FUNC_8(VAR_35, "KReclaimable:   ", VAR_42 +
      FUNC_2(VAR_16));
 FUNC_8(VAR_35, "Slab:           ", VAR_42 + VAR_43);
 FUNC_8(VAR_35, "SReclaimable:   ", VAR_42);
 FUNC_8(VAR_35, "SUnreclaim:     ", VAR_43);
 FUNC_7(VAR_35, "KernelStack:    %8lu kB\n",
     FUNC_3(VAR_17));
 FUNC_8(VAR_35, "PageTables:     ",
      FUNC_3(VAR_21));

 FUNC_8(VAR_35, "NFS_Unstable:   ",
      FUNC_2(VAR_26));
 FUNC_8(VAR_35, "Bounce:         ",
      FUNC_3(VAR_9));
 FUNC_8(VAR_35, "WritebackTmp:   ",
      FUNC_2(VAR_28));
 FUNC_8(VAR_35, "CommitLimit:    ", FUNC_13());
 FUNC_8(VAR_35, "Committed_AS:   ", VAR_38);
 FUNC_7(VAR_35, "VmallocTotal:   %8lu kB\n",
     (unsigned long)VAR_30 >> 10);
 FUNC_8(VAR_35, "VmallocUsed:    ", FUNC_14());
 FUNC_8(VAR_35, "VmallocChunk:   ", 0ul);
 FUNC_8(VAR_35, "Percpu:         ", FUNC_5());
 FUNC_4(VAR_35);

 FUNC_0(VAR_35);

 return 0;
}
