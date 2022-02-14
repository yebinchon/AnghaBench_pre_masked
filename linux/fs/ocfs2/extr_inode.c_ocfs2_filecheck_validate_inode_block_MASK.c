
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int VAR_6 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 unsigned long long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned long long,...) ;
 int FUNC_8 (struct super_block*,scalar_t__,int *) ;
 int FUNC_9 (unsigned long long) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_7,
      struct buffer_head *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_8->b_data;

 FUNC_9(
  (unsigned long long)VAR_8->b_blocknr);

 FUNC_0(!FUNC_3(VAR_8));







 VAR_9 = FUNC_8(VAR_7, VAR_8->b_data, &VAR_10->i_check);
 if (VAR_9) {
  FUNC_7(VAR_0,
       "Filecheck: checksum failed for dinode %llu\n",
       (unsigned long long)VAR_8->b_blocknr);
  VAR_9 = -VAR_1;
 }

 if (!FUNC_1(VAR_10)) {
  FUNC_7(VAR_0,
       "Filecheck: invalid dinode #%llu: signature = %.*s\n",
       (unsigned long long)VAR_8->b_blocknr, 7, VAR_10->i_signature);
  VAR_9 = -VAR_4;
  goto bail;
 } else if (VAR_9)
  goto bail;

 if (FUNC_6(VAR_10->i_blkno) != VAR_8->b_blocknr) {
  FUNC_7(VAR_0,
       "Filecheck: invalid dinode #%llu: i_blkno is %llu\n",
       (unsigned long long)VAR_8->b_blocknr,
       (unsigned long long)FUNC_6(VAR_10->i_blkno));
  VAR_9 = -VAR_2;
  goto bail;
 }

 if (!(VAR_10->i_flags & FUNC_4(VAR_6))) {
  FUNC_7(VAR_0,
       "Filecheck: invalid dinode #%llu: OCFS2_VALID_FL "
       "not set\n",
       (unsigned long long)VAR_8->b_blocknr);
  VAR_9 = -VAR_5;
  goto bail;
 }

 if (FUNC_5(VAR_10->i_fs_generation) !=
     FUNC_2(VAR_7)->fs_generation) {
  FUNC_7(VAR_0,
       "Filecheck: invalid dinode #%llu: fs_generation is %u\n",
       (unsigned long long)VAR_8->b_blocknr,
       FUNC_5(VAR_10->i_fs_generation));
  VAR_9 = -VAR_3;
 }

bail:
 return VAR_9;
}
