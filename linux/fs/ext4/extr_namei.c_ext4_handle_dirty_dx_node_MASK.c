
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_dir_entry {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*,struct ext4_dir_entry*) ;
 int FUNC_1 (int *,struct inode*,struct buffer_head*) ;

__attribute__((used)) static inline int FUNC_2(handle_t *VAR_0,
         struct inode *VAR_1,
         struct buffer_head *VAR_2)
{
 FUNC_0(VAR_1, (struct ext4_dir_entry *)VAR_2->b_data);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
