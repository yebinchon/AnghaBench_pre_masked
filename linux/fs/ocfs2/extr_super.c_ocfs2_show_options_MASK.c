
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ocfs2_super {unsigned long s_mount_opt; scalar_t__ preferred_slot; int osb_commit_interval; int local_alloc_bits; int s_clustersize_bits; int osb_resv_level; int osb_dir_resv_level; scalar_t__* osb_cluster_stack; int s_atime_quantum; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int VAR_21 ;
 unsigned int FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_22, struct dentry *VAR_23)
{
 struct ocfs2_super *VAR_24 = FUNC_0(VAR_23->d_sb);
 unsigned long VAR_25 = VAR_24->s_mount_opt;
 unsigned int VAR_26;

 if (VAR_25 & (VAR_13 | VAR_12)) {
  FUNC_2(VAR_22, ",_netdev");
  if (VAR_25 & VAR_13)
   FUNC_2(VAR_22, ",%s", VAR_3);
  else
   FUNC_2(VAR_22, ",%s", VAR_2);
 } else
  FUNC_2(VAR_22, ",%s", VAR_4);

 if (VAR_25 & VAR_17)
  FUNC_2(VAR_22, ",nointr");

 if (VAR_25 & VAR_8)
  FUNC_2(VAR_22, ",data=writeback");
 else
  FUNC_2(VAR_22, ",data=ordered");

 if (VAR_25 & VAR_6)
  FUNC_2(VAR_22, ",barrier=1");

 if (VAR_25 & VAR_10)
  FUNC_2(VAR_22, ",errors=panic");
 else if (VAR_25 & VAR_9)
  FUNC_2(VAR_22, ",errors=continue");
 else
  FUNC_2(VAR_22, ",errors=remount-ro");

 if (VAR_24->preferred_slot != VAR_5)
  FUNC_2(VAR_22, ",preferred_slot=%d", VAR_24->preferred_slot);

 FUNC_2(VAR_22, ",atime_quantum=%u", VAR_24->s_atime_quantum);

 if (VAR_24->osb_commit_interval)
  FUNC_2(VAR_22, ",commit=%u",
      (unsigned) (VAR_24->osb_commit_interval / VAR_0));

 VAR_26 = VAR_24->local_alloc_bits >> (20 - VAR_24->s_clustersize_bits);
 if (VAR_26 != FUNC_1(VAR_24))
  FUNC_2(VAR_22, ",localalloc=%d", VAR_26);

 if (VAR_25 & VAR_16)
  FUNC_2(VAR_22, ",localflocks,");

 if (VAR_24->osb_cluster_stack[0])
  FUNC_3(VAR_22, "cluster_stack", VAR_24->osb_cluster_stack,
      VAR_21);
 if (VAR_25 & VAR_20)
  FUNC_2(VAR_22, ",usrquota");
 if (VAR_25 & VAR_11)
  FUNC_2(VAR_22, ",grpquota");

 if (VAR_25 & VAR_7)
  FUNC_2(VAR_22, ",coherency=buffered");
 else
  FUNC_2(VAR_22, ",coherency=full");

 if (VAR_25 & VAR_18)
  FUNC_2(VAR_22, ",nouser_xattr");
 else
  FUNC_2(VAR_22, ",user_xattr");

 if (VAR_25 & VAR_14)
  FUNC_2(VAR_22, ",inode64");

 if (VAR_25 & VAR_19)
  FUNC_2(VAR_22, ",acl");
 else
  FUNC_2(VAR_22, ",noacl");

 if (VAR_24->osb_resv_level != VAR_1)
  FUNC_2(VAR_22, ",resv_level=%d", VAR_24->osb_resv_level);

 if (VAR_24->osb_dir_resv_level != VAR_24->osb_resv_level)
  FUNC_2(VAR_22, ",dir_resv_level=%d", VAR_24->osb_resv_level);

 if (VAR_25 & VAR_15)
  FUNC_2(VAR_22, ",journal_async_commit");

 return 0;
}
