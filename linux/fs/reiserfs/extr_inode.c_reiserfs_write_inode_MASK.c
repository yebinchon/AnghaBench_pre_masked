
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_1 (struct reiserfs_transaction_handle*) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 struct reiserfs_transaction_handle VAR_6;
 int VAR_7 = 1;

 if (FUNC_5(VAR_4->i_sb))
  return -VAR_0;







 if (VAR_5->sync_mode == VAR_2 && !(VAR_3->flags & VAR_1)) {
  FUNC_3(VAR_4->i_sb);
  if (!FUNC_0(&VAR_6, VAR_4->i_sb, VAR_7)) {
   FUNC_2(&VAR_6, VAR_4);
   FUNC_1(&VAR_6);
  }
  FUNC_4(VAR_4->i_sb);
 }
 return 0;
}
