
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_inline_data {int id_data; } ;
struct ocfs2_dir_entry {int dummy; } ;
struct TYPE_2__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,int ,int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static inline int FUNC_5(handle_t *VAR_0,
     struct inode *VAR_1,
     struct ocfs2_dir_entry *VAR_2,
     struct buffer_head *VAR_3)
{
 int VAR_4;
 struct buffer_head *VAR_5 = ((void*)0);
 struct ocfs2_dinode *VAR_6;
 struct ocfs2_inline_data *VAR_7;

 VAR_4 = FUNC_4(VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_4);
  goto out;
 }

 VAR_6 = (struct ocfs2_dinode *)VAR_5->b_data;
 VAR_7 = &VAR_6->id2.i_data;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7->id_data,
       FUNC_2(VAR_1));

 FUNC_1(VAR_5);
out:
 return VAR_4;
}
