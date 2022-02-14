
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_header {void* j_mount_id; void* j_first_unflushed_offset; void* j_last_flush_trans_id; } ;
struct reiserfs_journal {unsigned int j_last_flush_trans_id; unsigned long j_first_unflushed_offset; unsigned long j_mount_id; TYPE_1__* j_header_bh; } ;
struct TYPE_7__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct reiserfs_journal*) ;
 int FUNC_8 (struct super_block*,char*,char*) ;
 int FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_4,
     unsigned long VAR_5,
     unsigned int VAR_6)
{
 struct reiserfs_journal_header *VAR_7;
 struct reiserfs_journal *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;

 if (FUNC_7(VAR_8))
  return -VAR_0;

 if (VAR_6 >= VAR_8->j_last_flush_trans_id) {
  if (FUNC_3((VAR_8->j_header_bh))) {
   VAR_9 = FUNC_10(VAR_4);
   FUNC_2(VAR_8->j_header_bh);
   FUNC_9(VAR_4, VAR_9);
   if (FUNC_13(!FUNC_4(VAR_8->j_header_bh))) {




    return -VAR_0;
   }
  }
  VAR_8->j_last_flush_trans_id = VAR_6;
  VAR_8->j_first_unflushed_offset = VAR_5;
  VAR_7 = (struct reiserfs_journal_header *)(VAR_8->j_header_bh->
       b_data);
  VAR_7->j_last_flush_trans_id = FUNC_5(VAR_6);
  VAR_7->j_first_unflushed_offset = FUNC_5(VAR_5);
  VAR_7->j_mount_id = FUNC_5(VAR_8->j_mount_id);

  FUNC_11(VAR_8->j_header_bh);
  VAR_9 = FUNC_10(VAR_4);

  if (FUNC_6(VAR_4))
   FUNC_1(VAR_8->j_header_bh,
     VAR_3 | VAR_2 | VAR_1);
  else
   FUNC_12(VAR_8->j_header_bh);

  FUNC_9(VAR_4, VAR_9);
  if (!FUNC_4(VAR_8->j_header_bh)) {
   FUNC_8(VAR_4, "journal-837",
      "IO error during journal replay");
   return -VAR_0;
  }
 }
 return 0;
}
