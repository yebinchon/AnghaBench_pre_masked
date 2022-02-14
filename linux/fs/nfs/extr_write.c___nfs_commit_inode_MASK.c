
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int nr_to_write; } ;
struct nfs_commit_info {int mds; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int *,int,struct nfs_commit_info*) ;
 int FUNC_5 (struct nfs_commit_info*,struct inode*) ;
 int FUNC_6 (struct inode*,int *,struct nfs_commit_info*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, int VAR_5,
  struct writeback_control *VAR_6)
{
 FUNC_0(VAR_3);
 struct nfs_commit_info VAR_7;
 int VAR_8 = VAR_5 & VAR_0;
 int VAR_9, VAR_10;

 FUNC_5(&VAR_7, VAR_4);
 FUNC_2(VAR_7.mds);
 for (;;) {
  VAR_9 = VAR_10 = FUNC_6(VAR_4, &VAR_3, &VAR_7);
  if (VAR_9 <= 0)
   break;
  VAR_9 = FUNC_4(VAR_4, &VAR_3, VAR_5, &VAR_7);
  if (VAR_9 < 0)
   break;
  VAR_9 = 0;
  if (VAR_6 && VAR_6->sync_mode == VAR_2) {
   if (VAR_10 < VAR_6->nr_to_write)
    VAR_6->nr_to_write -= VAR_10;
   else
    VAR_6->nr_to_write = 0;
  }
  if (VAR_10 < VAR_1)
   break;
  FUNC_1();
 }
 FUNC_3(VAR_7.mds);
 if (VAR_9 || !VAR_8)
  return VAR_9;
 return FUNC_7(VAR_7.mds);
}
