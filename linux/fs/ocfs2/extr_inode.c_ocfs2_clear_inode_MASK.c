
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* journal; int osb_la_resmap; } ;
struct ocfs2_inode_info {unsigned long long ip_blkno; int ip_flags; int ip_jinode; scalar_t__ ip_dir_start_lookup; int ip_open_count; int ip_alloc_sem; int ip_io_mutex; int ip_lock; int ip_open_lockres; int ip_inode_lockres; int ip_rw_lockres; int ip_unwritten_list; int ip_io_markers; int ip_la_data_resv; } ;
struct inode {int i_ino; int i_nlink; int i_sb; } ;
struct TYPE_5__ {int ci_flags; int ci_num_cached; } ;
struct TYPE_4__ {int j_journal; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,unsigned long long,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (unsigned long long,int ) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(struct inode *VAR_2)
{
 int VAR_3;
 struct ocfs2_inode_info *VAR_4 = FUNC_1(VAR_2);
 struct ocfs2_super *VAR_5 = FUNC_2(VAR_2->i_sb);

 FUNC_3(VAR_2);
 FUNC_22((unsigned long long)VAR_4->ip_blkno,
    VAR_2->i_nlink);

 FUNC_8(VAR_5 == ((void*)0),
   "Inode=%lu\n", VAR_2->i_ino);

 FUNC_5(VAR_2);



 FUNC_18(VAR_2);



 FUNC_16(VAR_5, &VAR_4->ip_rw_lockres);
 FUNC_16(VAR_5, &VAR_4->ip_inode_lockres);
 FUNC_16(VAR_5, &VAR_4->ip_open_lockres);

 FUNC_19(&VAR_5->osb_la_resmap,
      &VAR_4->ip_la_data_resv);
 FUNC_20(&VAR_4->ip_la_data_resv);







 if (!(VAR_4->ip_flags & VAR_1))
  FUNC_12(VAR_2);

 FUNC_8(!FUNC_7(&VAR_4->ip_io_markers),
   "Clear inode of %llu, inode has io markers\n",
   (unsigned long long)VAR_4->ip_blkno);
 FUNC_8(!FUNC_7(&VAR_4->ip_unwritten_list),
   "Clear inode of %llu, inode has unwritten extents\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_14(VAR_2, 0);

 VAR_3 = FUNC_13(VAR_2);
 if (VAR_3 < 0)
  FUNC_9(VAR_3);

 FUNC_15(&VAR_4->ip_rw_lockres);
 FUNC_15(&VAR_4->ip_inode_lockres);
 FUNC_15(&VAR_4->ip_open_lockres);

 FUNC_17(FUNC_0(VAR_2));

 FUNC_8(FUNC_0(VAR_2)->ci_num_cached,
   "Clear inode of %llu, inode has %u cache items\n",
   (unsigned long long)VAR_4->ip_blkno,
   FUNC_0(VAR_2)->ci_num_cached);

 FUNC_8(!(FUNC_0(VAR_2)->ci_flags & VAR_0),
   "Clear inode of %llu, inode has a bad flag\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_8(FUNC_21(&VAR_4->ip_lock),
   "Clear inode of %llu, inode is locked\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_8(!FUNC_10(&VAR_4->ip_io_mutex),
   "Clear inode of %llu, io_mutex is locked\n",
   (unsigned long long)VAR_4->ip_blkno);
 FUNC_11(&VAR_4->ip_io_mutex);





 FUNC_8(!FUNC_4(&VAR_4->ip_alloc_sem),
   "Clear inode of %llu, alloc_sem is locked\n",
   (unsigned long long)VAR_4->ip_blkno);
 FUNC_23(&VAR_4->ip_alloc_sem);

 FUNC_8(VAR_4->ip_open_count,
   "Clear inode of %llu has open count %d\n",
   (unsigned long long)VAR_4->ip_blkno, VAR_4->ip_open_count);


 VAR_4->ip_flags = 0;
 VAR_4->ip_dir_start_lookup = 0;
 VAR_4->ip_blkno = 0ULL;






 FUNC_6(VAR_5->journal->j_journal,
           &VAR_4->ip_jinode);
}
