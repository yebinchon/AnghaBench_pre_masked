
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_2__* mapping; } ;
struct TYPE_3__ {scalar_t__ i_symlink; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,char const*,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct buffer_head**) ;
 size_t FUNC_8 (char const*,int ) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0, struct page *VAR_1)
{
 struct inode *VAR_2 = VAR_1->mapping->host;
 struct buffer_head *VAR_3 = ((void*)0);
 int VAR_4 = FUNC_7(VAR_2, &VAR_3);
 struct ocfs2_dinode *VAR_5;
 const char *VAR_6;
 void *VAR_7;
 size_t VAR_8;

 if (VAR_4 < 0) {
  FUNC_5(VAR_4);
  return VAR_4;
 }

 VAR_5 = (struct ocfs2_dinode *) VAR_3->b_data;
 VAR_6 = (char *) VAR_5->id2.i_symlink;

 VAR_8 = FUNC_8(VAR_6, FUNC_6(VAR_2->i_sb));
 VAR_7 = FUNC_2(VAR_1);
 FUNC_4(VAR_7, VAR_6, VAR_8 + 1);
 FUNC_3(VAR_7);
 FUNC_0(VAR_1);
 FUNC_9(VAR_1);
 FUNC_1(VAR_3);
 return 0;
}
