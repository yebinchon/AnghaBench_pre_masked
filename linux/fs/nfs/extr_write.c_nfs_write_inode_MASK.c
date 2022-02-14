
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct TYPE_2__ {int rpcs_out; int ncommit; } ;
struct nfs_inode {TYPE_1__ commit_info; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int,struct writeback_control*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

int FUNC_6(struct inode *VAR_4, struct writeback_control *VAR_5)
{
 struct nfs_inode *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = VAR_0;
 int VAR_8 = 0;

 if (VAR_5->sync_mode == VAR_3) {

  if (!FUNC_3(&VAR_6->commit_info.ncommit))
   goto check_requests_outstanding;




  if (FUNC_5(VAR_4->i_mapping, VAR_2))
   goto out_mark_dirty;


  VAR_7 = 0;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_5);
 if (!VAR_8) {
  if (VAR_7 & VAR_0)
   return 0;
 } else if (FUNC_3(&VAR_6->commit_info.ncommit))
  goto out_mark_dirty;

check_requests_outstanding:
 if (!FUNC_4(&VAR_6->commit_info.rpcs_out))
  return VAR_8;
out_mark_dirty:
 FUNC_1(VAR_4, VAR_1);
 return VAR_8;
}
