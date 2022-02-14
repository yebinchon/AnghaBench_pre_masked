
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct btrfs_ordered_extent {scalar_t__ file_offset; scalar_t__ len; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__) ;
 struct btrfs_ordered_extent* FUNC_2 (struct inode*,scalar_t__) ;
 int FUNC_3 (struct btrfs_ordered_extent*) ;
 int FUNC_4 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct inode *VAR_3, u64 VAR_4, u64 VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 u64 VAR_8;
 u64 VAR_9;
 struct btrfs_ordered_extent *VAR_10;

 if (VAR_4 + VAR_5 < VAR_4) {
  VAR_9 = FUNC_0(VAR_2);
 } else {
  VAR_9 = VAR_4 + VAR_5 - 1;
  if (VAR_9 > FUNC_0(VAR_2))
   VAR_9 = FUNC_0(VAR_2);
 }




 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_9);
 if (VAR_6)
  return VAR_6;
 VAR_7 = FUNC_5(VAR_3->i_mapping, VAR_4, VAR_9);

 VAR_8 = VAR_9;
 while (1) {
  VAR_10 = FUNC_2(VAR_3, VAR_8);
  if (!VAR_10)
   break;
  if (VAR_10->file_offset > VAR_9) {
   FUNC_3(VAR_10);
   break;
  }
  if (VAR_10->file_offset + VAR_10->len <= VAR_4) {
   FUNC_3(VAR_10);
   break;
  }
  FUNC_4(VAR_3, VAR_10, 1);
  VAR_8 = VAR_10->file_offset;
  if (FUNC_6(VAR_0, &VAR_10->flags))
   VAR_6 = -VAR_1;
  FUNC_3(VAR_10);
  if (VAR_6 || VAR_8 == 0 || VAR_8 == VAR_4)
   break;
  VAR_8--;
 }
 return VAR_7 ? VAR_7 : VAR_6;
}
