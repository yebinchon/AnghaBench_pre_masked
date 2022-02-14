
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_inode {scalar_t__ disk_i_size; } ;


 int FUNC_0 (int *,struct btrfs_inode*) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_inode *VAR_0,
  u64 VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{

 if (VAR_3 < VAR_4 &&
     (VAR_1 > 0 || VAR_2 + 1 < VAR_0->disk_i_size))
  FUNC_0(((void*)0), VAR_0);
}
