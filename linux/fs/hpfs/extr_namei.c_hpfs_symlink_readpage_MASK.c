
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; int i_ino; } ;
struct fnode {int dummy; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 struct fnode* FUNC_4 (int ,int ,struct buffer_head**) ;
 int FUNC_5 (int ,struct fnode*,char*,char*,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2, struct page *VAR_3)
{
 char *VAR_4 = FUNC_7(VAR_3);
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct fnode *VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_0;
 FUNC_3(VAR_5->i_sb);
 if (!(VAR_6 = FUNC_4(VAR_5->i_sb, VAR_5->i_ino, &VAR_7)))
  goto fail;
 VAR_8 = FUNC_5(VAR_5->i_sb, VAR_6, "SYMLINK", VAR_4, VAR_1);
 FUNC_2(VAR_7);
 if (VAR_8)
  goto fail;
 FUNC_6(VAR_5->i_sb);
 FUNC_1(VAR_3);
 FUNC_8(VAR_3);
 return 0;

fail:
 FUNC_6(VAR_5->i_sb);
 FUNC_0(VAR_3);
 FUNC_8(VAR_3);
 return VAR_8;
}
