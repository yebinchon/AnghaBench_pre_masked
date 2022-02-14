
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct buffer_head {scalar_t__ b_data; } ;
struct btrfs_super_block {int dummy; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct block_device*,int,struct buffer_head**) ;
 scalar_t__ FUNC_3 (struct btrfs_super_block*) ;

struct buffer_head *FUNC_4(struct block_device *VAR_1)
{
 struct buffer_head *VAR_2;
 struct buffer_head *VAR_3 = ((void*)0);
 struct btrfs_super_block *VAR_4;
 int VAR_5;
 u64 VAR_6 = 0;
 int VAR_7 = -VAR_0;






 for (VAR_5 = 0; VAR_5 < 1; VAR_5++) {
  VAR_7 = FUNC_2(VAR_1, VAR_5, &VAR_2);
  if (VAR_7)
   continue;

  VAR_4 = (struct btrfs_super_block *)VAR_2->b_data;

  if (!VAR_3 || FUNC_3(VAR_4) > VAR_6) {
   FUNC_1(VAR_3);
   VAR_3 = VAR_2;
   VAR_6 = FUNC_3(VAR_4);
  } else {
   FUNC_1(VAR_2);
  }
 }

 if (!VAR_3)
  return FUNC_0(VAR_7);

 return VAR_3;
}
