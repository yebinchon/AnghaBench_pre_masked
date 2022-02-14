
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_inode {scalar_t__ index_cnt; } ;


 int FUNC_0 (struct btrfs_inode*) ;
 int FUNC_1 (struct btrfs_inode*) ;

int FUNC_2(struct btrfs_inode *VAR_0, u64 *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->index_cnt == (u64)-1) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2) {
   VAR_2 = FUNC_1(VAR_0);
   if (VAR_2)
    return VAR_2;
  }
 }

 *VAR_1 = VAR_0->index_cnt;
 VAR_0->index_cnt++;

 return VAR_2;
}
