
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_dinode {int i_flags; int i_fs_generation; int i_check; int i_blkno; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_4__ {int fs_generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocfs2_dinode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ,char*,unsigned long long,...) ;
 int FUNC_9 (struct super_block*,scalar_t__,int *) ;
 int FUNC_10 (struct super_block*,struct buffer_head*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (struct super_block*,scalar_t__,int *) ;
 int FUNC_14 (unsigned long long) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_6,
           struct buffer_head *VAR_7)
{
 int VAR_8 = 0;
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_7->b_data;

 if (!FUNC_10(VAR_6, VAR_7))
  return 0;

 FUNC_14(
  (unsigned long long)VAR_7->b_blocknr);

 if (FUNC_11(FUNC_1(VAR_6)) ||
     FUNC_12(FUNC_1(VAR_6))) {
  FUNC_8(VAR_0,
       "Filecheck: cannot repair dinode #%llu "
       "on readonly filesystem\n",
       (unsigned long long)VAR_7->b_blocknr);
  return -VAR_3;
 }

 if (FUNC_2(VAR_7)) {
  FUNC_8(VAR_0,
       "Filecheck: cannot repair dinode #%llu, "
       "its buffer is in jbd\n",
       (unsigned long long)VAR_7->b_blocknr);
  return -VAR_1;
 }

 if (!FUNC_0(VAR_9)) {

  return -VAR_2;
 }

 if (!(VAR_9->i_flags & FUNC_3(VAR_5))) {



  return -VAR_4;
 }

 if (FUNC_6(VAR_9->i_blkno) != VAR_7->b_blocknr) {
  VAR_9->i_blkno = FUNC_4(VAR_7->b_blocknr);
  VAR_8 = 1;
  FUNC_8(VAR_0,
       "Filecheck: reset dinode #%llu: i_blkno to %llu\n",
       (unsigned long long)VAR_7->b_blocknr,
       (unsigned long long)FUNC_6(VAR_9->i_blkno));
 }

 if (FUNC_5(VAR_9->i_fs_generation) !=
     FUNC_1(VAR_6)->fs_generation) {
  VAR_9->i_fs_generation = FUNC_3(FUNC_1(VAR_6)->fs_generation);
  VAR_8 = 1;
  FUNC_8(VAR_0,
       "Filecheck: reset dinode #%llu: fs_generation to %u\n",
       (unsigned long long)VAR_7->b_blocknr,
       FUNC_5(VAR_9->i_fs_generation));
 }

 if (VAR_8 || FUNC_13(VAR_6, VAR_7->b_data, &VAR_9->i_check)) {
  FUNC_9(VAR_6, VAR_7->b_data, &VAR_9->i_check);
  FUNC_7(VAR_7);
  FUNC_8(VAR_0,
       "Filecheck: reset dinode #%llu: compute meta ecc\n",
       (unsigned long long)VAR_7->b_blocknr);
 }

 return 0;
}
