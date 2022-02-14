
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_dinode {int i_flags; int i_fs_generation; int i_blkno; int i_signature; int i_check; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned long long fs_generation; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 unsigned long long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned long long) ;
 int FUNC_8 (struct super_block*,char*,unsigned long long,...) ;
 int FUNC_9 (struct super_block*,scalar_t__,int *) ;
 int FUNC_10 (unsigned long long) ;

int FUNC_11(struct super_block *VAR_3,
          struct buffer_head *VAR_4)
{
 int VAR_5;
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_4->b_data;

 FUNC_10((unsigned long long)VAR_4->b_blocknr);

 FUNC_0(!FUNC_3(VAR_4));






 VAR_5 = FUNC_9(VAR_3, VAR_4->b_data, &VAR_6->i_check);
 if (VAR_5) {
  FUNC_7(VAR_1, "Checksum failed for dinode %llu\n",
       (unsigned long long)VAR_4->b_blocknr);
  goto bail;
 }





 VAR_5 = -VAR_0;

 if (!FUNC_1(VAR_6)) {
  VAR_5 = FUNC_8(VAR_3, "Invalid dinode #%llu: signature = %.*s\n",
     (unsigned long long)VAR_4->b_blocknr, 7,
     VAR_6->i_signature);
  goto bail;
 }

 if (FUNC_6(VAR_6->i_blkno) != VAR_4->b_blocknr) {
  VAR_5 = FUNC_8(VAR_3, "Invalid dinode #%llu: i_blkno is %llu\n",
     (unsigned long long)VAR_4->b_blocknr,
     (unsigned long long)FUNC_6(VAR_6->i_blkno));
  goto bail;
 }

 if (!(VAR_6->i_flags & FUNC_4(VAR_2))) {
  VAR_5 = FUNC_8(VAR_3,
     "Invalid dinode #%llu: OCFS2_VALID_FL not set\n",
     (unsigned long long)VAR_4->b_blocknr);
  goto bail;
 }

 if (FUNC_5(VAR_6->i_fs_generation) !=
     FUNC_2(VAR_3)->fs_generation) {
  VAR_5 = FUNC_8(VAR_3,
     "Invalid dinode #%llu: fs_generation is %u\n",
     (unsigned long long)VAR_4->b_blocknr,
     FUNC_5(VAR_6->i_fs_generation));
  goto bail;
 }

 VAR_5 = 0;

bail:
 return VAR_5;
}
