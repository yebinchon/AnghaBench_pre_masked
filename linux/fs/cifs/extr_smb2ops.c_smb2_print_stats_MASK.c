
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int * smb2_com_failed; int * smb2_com_sent; } ;
struct TYPE_4__ {TYPE_1__ smb2_stats; } ;
struct cifs_tcon {int num_remote_opens; int num_local_opens; scalar_t__ bytes_written; scalar_t__ bytes_read; TYPE_2__ stats; } ;
typedef int atomic_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 long long FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,long long,long long) ;

__attribute__((used)) static void
FUNC_2(struct seq_file *VAR_14, struct cifs_tcon *VAR_15)
{
 atomic_t *VAR_16 = VAR_15->stats.smb2_stats.smb2_com_sent;
 atomic_t *VAR_17 = VAR_15->stats.smb2_stats.smb2_com_failed;





 FUNC_1(VAR_14, "\nBytes read: %llu  Bytes written: %llu",
     (long long)(VAR_15->bytes_read),
     (long long)(VAR_15->bytes_written));
 FUNC_1(VAR_14, "\nOpen files: %d total (local), %d open on server",
     FUNC_0(&VAR_15->num_local_opens),
     FUNC_0(&VAR_15->num_remote_opens));
 FUNC_1(VAR_14, "\nTreeConnects: %d total %d failed",
     FUNC_0(&VAR_16[VAR_11]),
     FUNC_0(&VAR_17[VAR_11]));
 FUNC_1(VAR_14, "\nTreeDisconnects: %d total %d failed",
     FUNC_0(&VAR_16[VAR_12]),
     FUNC_0(&VAR_17[VAR_12]));
 FUNC_1(VAR_14, "\nCreates: %d total %d failed",
     FUNC_0(&VAR_16[VAR_2]),
     FUNC_0(&VAR_17[VAR_2]));
 FUNC_1(VAR_14, "\nCloses: %d total %d failed",
     FUNC_0(&VAR_16[VAR_1]),
     FUNC_0(&VAR_17[VAR_1]));
 FUNC_1(VAR_14, "\nFlushes: %d total %d failed",
     FUNC_0(&VAR_16[VAR_3]),
     FUNC_0(&VAR_17[VAR_3]));
 FUNC_1(VAR_14, "\nReads: %d total %d failed",
     FUNC_0(&VAR_16[VAR_9]),
     FUNC_0(&VAR_17[VAR_9]));
 FUNC_1(VAR_14, "\nWrites: %d total %d failed",
     FUNC_0(&VAR_16[VAR_13]),
     FUNC_0(&VAR_17[VAR_13]));
 FUNC_1(VAR_14, "\nLocks: %d total %d failed",
     FUNC_0(&VAR_16[VAR_5]),
     FUNC_0(&VAR_17[VAR_5]));
 FUNC_1(VAR_14, "\nIOCTLs: %d total %d failed",
     FUNC_0(&VAR_16[VAR_4]),
     FUNC_0(&VAR_17[VAR_4]));
 FUNC_1(VAR_14, "\nQueryDirectories: %d total %d failed",
     FUNC_0(&VAR_16[VAR_7]),
     FUNC_0(&VAR_17[VAR_7]));
 FUNC_1(VAR_14, "\nChangeNotifies: %d total %d failed",
     FUNC_0(&VAR_16[VAR_0]),
     FUNC_0(&VAR_17[VAR_0]));
 FUNC_1(VAR_14, "\nQueryInfos: %d total %d failed",
     FUNC_0(&VAR_16[VAR_8]),
     FUNC_0(&VAR_17[VAR_8]));
 FUNC_1(VAR_14, "\nSetInfos: %d total %d failed",
     FUNC_0(&VAR_16[VAR_10]),
     FUNC_0(&VAR_17[VAR_10]));
 FUNC_1(VAR_14, "\nOplockBreaks: %d sent %d failed",
     FUNC_0(&VAR_16[VAR_6]),
     FUNC_0(&VAR_17[VAR_6]));
}
