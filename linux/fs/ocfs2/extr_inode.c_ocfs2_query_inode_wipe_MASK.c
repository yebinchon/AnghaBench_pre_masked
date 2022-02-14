
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_flags; scalar_t__ ip_blkno; } ;
struct ocfs2_dinode {int i_flags; int i_dyn_features; int i_orphaned_slot; scalar_t__ i_dtime; int i_blkno; } ;
struct inode {int i_nlink; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long long,unsigned long long,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (unsigned long long,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_6,
      struct buffer_head *VAR_7,
      int *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0;
 struct ocfs2_inode_info *VAR_11 = FUNC_0(VAR_6);
 struct ocfs2_dinode *VAR_12;

 *VAR_8 = 0;

 FUNC_10((unsigned long long)VAR_11->ip_blkno,
        VAR_6->i_nlink);




 if (!FUNC_8(VAR_6)) {
  VAR_10 = 1;
  goto bail;
 }



 if (VAR_6->i_nlink)
  goto bail;


 VAR_12 = (struct ocfs2_dinode *) VAR_7->b_data;
 if (!(VAR_12->i_flags & FUNC_2(VAR_5)) &&
     !(VAR_11->ip_flags & VAR_4)) {
  if (VAR_12->i_dyn_features & FUNC_1(VAR_3)) {
   VAR_10 = 2;
   goto bail;
  }


  VAR_9 = -VAR_1;
  FUNC_6(VAR_2,
       "Inode %llu (on-disk %llu) not orphaned! "
       "Disk flags  0x%x, inode flags 0x%x\n",
       (unsigned long long)VAR_11->ip_blkno,
       (unsigned long long)FUNC_5(VAR_12->i_blkno),
       FUNC_4(VAR_12->i_flags), VAR_11->ip_flags);
  goto bail;
 }


 if (VAR_12->i_dtime) {
  VAR_9 = -VAR_1;
  FUNC_7(VAR_9);
  goto bail;
 }
 VAR_9 = FUNC_9(VAR_6, 1);
 if (VAR_9 == -VAR_0) {
  VAR_9 = 0;
  VAR_10 = 3;
  goto bail;
 }
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto bail;
 }

 *VAR_8 = 1;
 FUNC_12(FUNC_3(VAR_12->i_orphaned_slot));

bail:
 FUNC_11(VAR_9, VAR_10);
 return VAR_9;
}
