
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int osb_la_resmap; } ;
struct ocfs2_dinode {int i_size; int i_flags; } ;
struct inode {int i_mapping; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; scalar_t__ ip_clusters; int ip_alloc_sem; int ip_la_data_resv; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,char*,unsigned long long,scalar_t__,unsigned long long,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,struct inode*,struct buffer_head*) ;
 int FUNC_9 (struct ocfs2_super*,struct inode*,struct buffer_head*,scalar_t__) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (struct inode*,struct buffer_head*) ;
 int FUNC_13 (unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_14 (unsigned long long,unsigned long long) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__,int ,int) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct inode *VAR_3,
          struct buffer_head *VAR_4,
          u64 VAR_5)
{
 int VAR_6 = 0;
 struct ocfs2_dinode *VAR_7 = ((void*)0);
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_3->i_sb);



 VAR_7 = (struct ocfs2_dinode *) VAR_4->b_data;

 FUNC_13((unsigned long long)FUNC_0(VAR_3)->ip_blkno,
      (unsigned long long)FUNC_5(VAR_7->i_size),
      (unsigned long long)VAR_5);

 FUNC_6(FUNC_5(VAR_7->i_size) != FUNC_3(VAR_3),
   "Inode %llu, inode i_size = %lld != di "
   "i_size = %llu, i_flags = 0x%x\n",
   (unsigned long long)FUNC_0(VAR_3)->ip_blkno,
   FUNC_3(VAR_3),
   (unsigned long long)FUNC_5(VAR_7->i_size),
   FUNC_4(VAR_7->i_flags));

 if (VAR_5 > FUNC_5(VAR_7->i_size)) {
  FUNC_14(
   (unsigned long long)FUNC_5(VAR_7->i_size),
   (unsigned long long)VAR_5);
  VAR_6 = -VAR_0;
  FUNC_7(VAR_6);
  goto bail;
 }

 FUNC_2(&FUNC_0(VAR_3)->ip_alloc_sem);

 FUNC_10(&VAR_8->osb_la_resmap,
      &FUNC_0(VAR_3)->ip_la_data_resv);
 FUNC_16(VAR_3->i_mapping, VAR_5 + VAR_2 - 1, 0, 1);
 FUNC_15(VAR_3->i_mapping, VAR_5);

 if (FUNC_0(VAR_3)->ip_dyn_features & VAR_1) {
  VAR_6 = FUNC_11(VAR_3, VAR_4, VAR_5,
            FUNC_3(VAR_3), 1);
  if (VAR_6)
   FUNC_7(VAR_6);

  goto bail_unlock_sem;
 }





 VAR_6 = FUNC_9(VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_7(VAR_6);
  goto bail_unlock_sem;
 }

 VAR_6 = FUNC_8(VAR_8, VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_7(VAR_6);
  goto bail_unlock_sem;
 }


bail_unlock_sem:
 FUNC_17(&FUNC_0(VAR_3)->ip_alloc_sem);

bail:
 if (!VAR_6 && FUNC_0(VAR_3)->ip_clusters == 0)
  VAR_6 = FUNC_12(VAR_3, VAR_4);

 return VAR_6;
}
