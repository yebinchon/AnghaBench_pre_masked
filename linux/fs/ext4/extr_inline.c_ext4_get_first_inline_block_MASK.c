
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_block; } ;


 int FUNC_0 (struct inode*,struct ext4_iloc*) ;
 TYPE_1__* FUNC_1 (struct ext4_iloc*) ;

struct buffer_head *FUNC_2(struct inode *VAR_0,
     struct ext4_dir_entry_2 **VAR_1,
     int *VAR_2)
{
 struct ext4_iloc VAR_3;

 *VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (*VAR_2)
  return ((void*)0);

 *VAR_1 = (struct ext4_dir_entry_2 *)FUNC_1(&VAR_3)->i_block;

 return VAR_3.bh;
}
