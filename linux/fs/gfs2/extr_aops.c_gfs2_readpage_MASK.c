
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct file*,struct page*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2, struct page *VAR_3)
{
 struct address_space *VAR_4 = VAR_3->mapping;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4->host);
 struct gfs2_holder VAR_6;
 int VAR_7;

 FUNC_9(VAR_3);
 FUNC_5(VAR_5->i_gl, VAR_1, 0, &VAR_6);
 VAR_7 = FUNC_4(&VAR_6);
 if (FUNC_8(VAR_7))
  goto out;
 VAR_7 = VAR_0;
 FUNC_7(VAR_3);
 if (VAR_3->mapping == VAR_4 && !FUNC_1(VAR_3))
  VAR_7 = FUNC_2(VAR_2, VAR_3);
 else
  FUNC_9(VAR_3);
 FUNC_3(&VAR_6);
out:
 FUNC_6(&VAR_6);
 if (VAR_7 && VAR_7 != VAR_0)
  FUNC_7(VAR_3);
 return VAR_7;
}
