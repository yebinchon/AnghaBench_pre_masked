
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct btrfs_ordered_extent {int flags; int wait; scalar_t__ len; scalar_t__ file_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct inode*,struct btrfs_ordered_extent*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct inode *VAR_2,
           struct btrfs_ordered_extent *VAR_3,
           int VAR_4)
{
 u64 VAR_5 = VAR_3->file_offset;
 u64 VAR_6 = VAR_5 + VAR_3->len - 1;

 FUNC_2(VAR_2, VAR_3);






 if (!FUNC_1(VAR_1, &VAR_3->flags))
  FUNC_0(VAR_2->i_mapping, VAR_5, VAR_6);
 if (VAR_4) {
  FUNC_3(VAR_3->wait, FUNC_1(VAR_0,
       &VAR_3->flags));
 }
}
