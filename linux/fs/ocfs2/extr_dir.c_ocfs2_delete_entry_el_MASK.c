
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_size; int b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(handle_t *VAR_0,
     struct inode *VAR_1,
     struct ocfs2_dir_entry *VAR_2,
     struct buffer_head *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_3->b_data,
        VAR_3->b_size);
}
