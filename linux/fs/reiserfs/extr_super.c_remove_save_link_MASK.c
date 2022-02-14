
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_key {int k_objectid; int k_dir_id; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_6__ {int k_objectid; } ;
struct TYPE_5__ {int i_flags; } ;
struct TYPE_4__ {int s_blocksize; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct reiserfs_transaction_handle*,TYPE_1__*,int ) ;
 int FUNC_4 (struct reiserfs_transaction_handle*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int *,struct reiserfs_key*) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ) ;
 int FUNC_7 (int ,struct reiserfs_key*,int) ;
 int FUNC_8 (int ,struct reiserfs_key*,int ) ;

int FUNC_9(struct inode *VAR_7, int VAR_8)
{
 struct reiserfs_transaction_handle VAR_9;
 struct reiserfs_key VAR_10;
 int VAR_11;


 VAR_11 = FUNC_3(&VAR_9, VAR_7->i_sb, VAR_0);
 if (VAR_11)
  return VAR_11;


 VAR_10.k_dir_id = FUNC_2(VAR_2);
 VAR_10.k_objectid = FUNC_0(VAR_7)->k_objectid;
 if (!VAR_8) {

  FUNC_7(VAR_1, &VAR_10,
        1 + VAR_7->i_sb->s_blocksize);
  FUNC_8(VAR_1, &VAR_10, VAR_3);
 } else {

  FUNC_7(VAR_1, &VAR_10, 1);
  FUNC_8(VAR_1, &VAR_10, VAR_4);
 }

 if ((VAR_8 &&
      (FUNC_1(VAR_7)->i_flags & VAR_5)) ||
     (!VAR_8 &&
      (FUNC_1(VAR_7)->i_flags & VAR_6)))

  FUNC_5(&VAR_9, ((void*)0), &VAR_10);
 if (!VAR_8) {
  FUNC_6(&VAR_9, VAR_7->i_ino);
  FUNC_1(VAR_7)->i_flags &= ~VAR_6;
 } else
  FUNC_1(VAR_7)->i_flags &= ~VAR_5;

 return FUNC_4(&VAR_9);
}
