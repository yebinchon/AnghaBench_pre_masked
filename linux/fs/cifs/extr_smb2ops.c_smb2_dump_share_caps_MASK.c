
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cifs_tcon {int capabilities; int ss_flags; scalar_t__ maximal_access; scalar_t__ perf_sector_size; scalar_t__ tid; scalar_t__ share_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_2(struct seq_file *VAR_9, struct cifs_tcon *VAR_10)
{
 FUNC_1(VAR_9, "\n\tShare Capabilities:");
 if (VAR_10->capabilities & VAR_3)
  FUNC_1(VAR_9, " DFS,");
 if (VAR_10->capabilities & VAR_2)
  FUNC_1(VAR_9, " CONTINUOUS AVAILABILITY,");
 if (VAR_10->capabilities & VAR_4)
  FUNC_1(VAR_9, " SCALEOUT,");
 if (VAR_10->capabilities & VAR_1)
  FUNC_1(VAR_9, " CLUSTER,");
 if (VAR_10->capabilities & VAR_0)
  FUNC_1(VAR_9, " ASYMMETRIC,");
 if (VAR_10->capabilities == 0)
  FUNC_1(VAR_9, " None");
 if (VAR_10->ss_flags & VAR_5)
  FUNC_1(VAR_9, " Aligned,");
 if (VAR_10->ss_flags & VAR_7)
  FUNC_1(VAR_9, " Partition Aligned,");
 if (VAR_10->ss_flags & VAR_6)
  FUNC_1(VAR_9, " SSD,");
 if (VAR_10->ss_flags & VAR_8)
  FUNC_1(VAR_9, " TRIM-support,");

 FUNC_0(VAR_9, "\tShare Flags: 0x%x", VAR_10->share_flags);
 FUNC_0(VAR_9, "\n\ttid: 0x%x", VAR_10->tid);
 if (VAR_10->perf_sector_size)
  FUNC_0(VAR_9, "\tOptimal sector size: 0x%x",
      VAR_10->perf_sector_size);
 FUNC_0(VAR_9, "\tMaximal Access: 0x%x", VAR_10->maximal_access);
}
