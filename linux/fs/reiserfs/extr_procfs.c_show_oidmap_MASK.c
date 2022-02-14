
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {struct super_block* private; } ;
struct TYPE_5__ {int s_oid_maxsize; int s_oid_cursize; } ;
struct reiserfs_super_block {TYPE_2__ s_v1; } ;
struct TYPE_4__ {int * mapf; scalar_t__ use_file; } ;
struct reiserfs_sb_info {TYPE_1__ oidmap; struct reiserfs_super_block* s_rs; } ;
typedef int reiserfs_oidinterval_d_t ;
typedef int loff_t ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {int i_size; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct reiserfs_sb_info* FUNC_1 (struct super_block*) ;
 TYPE_3__* FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->private;
 struct reiserfs_sb_info *VAR_4 = FUNC_1(VAR_3);
 struct reiserfs_super_block *VAR_5 = VAR_4->s_rs;
 unsigned int VAR_6 = FUNC_3(VAR_5->s_v1.s_oid_cursize);
 unsigned long VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  __u32 VAR_9;

  VAR_9 = (VAR_8 == VAR_6 - 1) ? VAR_0 : FUNC_0(VAR_8 + 1);
  FUNC_4(VAR_1, "%s: [ %x .. %x )\n",
      (VAR_8 & 1) ? "free" : "used", FUNC_0(VAR_8), VAR_9);
  if (!(VAR_8 & 1)) {
   VAR_7 += VAR_9 - FUNC_0(VAR_8);
  }
 }






 FUNC_4(VAR_1, "total: \t%i [%i/%i] used: %lu [exact]\n",
     VAR_6,
     VAR_6, FUNC_3(VAR_5->s_v1.s_oid_maxsize), VAR_7);
 return 0;
}
