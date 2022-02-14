
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned int* th_usage; int ra_size; int* ra_depth; int* nfs4_opcount; int th_fullcnt; int th_cnt; int io_write; int io_read; int fh_nocache_nondir; int fh_nocache_dir; int fh_anon; int fh_lookup; int fh_stale; int rcnocache; int rcmisses; int rchits; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4, "rc %u %u %u\nfh %u %u %u %u %u\nio %u %u\n",
        VAR_3.rchits,
        VAR_3.rcmisses,
        VAR_3.rcnocache,
        VAR_3.fh_stale,
        VAR_3.fh_lookup,
        VAR_3.fh_anon,
        VAR_3.fh_nocache_dir,
        VAR_3.fh_nocache_nondir,
        VAR_3.io_read,
        VAR_3.io_write);

 FUNC_0(VAR_4, "th %u %u", VAR_3.th_cnt, VAR_3.th_fullcnt);
 for (VAR_6=0; VAR_6<10; VAR_6++) {
  unsigned int VAR_7 = VAR_3.th_usage[VAR_6];
  unsigned int VAR_8 = VAR_7 / VAR_0, VAR_9 = (VAR_7 % VAR_0)*1000/VAR_0;
  FUNC_0(VAR_4, " %u.%03u", VAR_8, VAR_9);
 }


 FUNC_0(VAR_4, "\nra %u", VAR_3.ra_size);
 for (VAR_6=0; VAR_6<11; VAR_6++)
  FUNC_0(VAR_4, " %u", VAR_3.ra_depth[VAR_6]);
 FUNC_1(VAR_4, '\n');


 FUNC_2(VAR_4, &VAR_2);
 return 0;
}
