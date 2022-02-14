
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct inode*) ;

int FUNC_5(struct inode *VAR_3, struct writeback_control *VAR_4)
{
 int VAR_5 = VAR_4->sync_mode == VAR_2;

 if (VAR_3->i_nlink == 0)
  return 0;





 if (!FUNC_4(VAR_0, VAR_3)) {

  FUNC_3(FUNC_0(VAR_3->i_sb)->log, VAR_5);
  return 0;
 }

 if (FUNC_1(VAR_3, VAR_5)) {
  FUNC_2("jfs_write_inode: jfs_commit_inode failed!");
  return -VAR_1;
 } else
  return 0;
}
