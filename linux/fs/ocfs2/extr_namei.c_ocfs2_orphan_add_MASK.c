
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int slot_num; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct ocfs2_dinode {void* i_orphaned_slot; int i_flags; void* i_dio_orphaned_slot; } ;
struct inode {int i_mode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; int ip_flags; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,struct inode*,char*,int,struct inode*,scalar_t__,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_dinode*,int) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (struct inode*,struct buffer_head**) ;
 int FUNC_12 (struct ocfs2_dinode*) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (unsigned long long) ;
 int FUNC_15 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_16(struct ocfs2_super *VAR_6,
       handle_t *VAR_7,
       struct inode *VAR_8,
       struct buffer_head *VAR_9,
       char *VAR_10,
       struct ocfs2_dir_lookup_result *VAR_11,
       struct inode *VAR_12,
       bool VAR_13)
{
 struct buffer_head *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 struct ocfs2_dinode *VAR_16;
 struct ocfs2_dinode *VAR_17 = (struct ocfs2_dinode *) VAR_9->b_data;
 int VAR_18 = VAR_13 ?
   (VAR_1 + VAR_5) :
   VAR_5;

 FUNC_14(
    (unsigned long long)FUNC_1(VAR_8)->ip_blkno);

 VAR_15 = FUNC_11(VAR_12, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_7(VAR_15);
  goto leave;
 }

 VAR_15 = FUNC_9(VAR_7,
      FUNC_0(VAR_12),
      VAR_14,
      VAR_3);
 if (VAR_15 < 0) {
  FUNC_7(VAR_15);
  goto leave;
 }







 VAR_15 = FUNC_9(VAR_7,
      FUNC_0(VAR_8),
      VAR_9,
      VAR_3);
 if (VAR_15 < 0) {
  FUNC_7(VAR_15);
  goto leave;
 }



 VAR_16 = (struct ocfs2_dinode *) VAR_14->b_data;
 if (FUNC_2(VAR_8->i_mode))
  FUNC_8(VAR_16, 1);
 FUNC_13(VAR_12, FUNC_12(VAR_16));
 FUNC_10(VAR_7, VAR_14);

 VAR_15 = FUNC_3(VAR_7, VAR_12, VAR_10,
       VAR_18, VAR_8,
       FUNC_1(VAR_8)->ip_blkno,
       VAR_14, VAR_11);
 if (VAR_15 < 0) {
  FUNC_7(VAR_15);
  goto rollback;
 }

 if (VAR_13) {



  VAR_17->i_flags |= FUNC_6(VAR_0);
  VAR_17->i_dio_orphaned_slot = FUNC_5(VAR_6->slot_num);
 } else {
  VAR_17->i_flags |= FUNC_6(VAR_4);
  FUNC_1(VAR_8)->ip_flags &= ~VAR_2;




  VAR_17->i_orphaned_slot = FUNC_5(VAR_6->slot_num);
 }

 FUNC_10(VAR_7, VAR_9);

 FUNC_15((unsigned long long)FUNC_1(VAR_8)->ip_blkno,
       VAR_6->slot_num);

rollback:
 if (VAR_15 < 0) {
  if (FUNC_2(VAR_8->i_mode))
   FUNC_8(VAR_16, -1);
  FUNC_13(VAR_12, FUNC_12(VAR_16));
 }

leave:
 FUNC_4(VAR_14);

 return VAR_15;
}
