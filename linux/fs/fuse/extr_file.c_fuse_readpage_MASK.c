
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct page*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mapping->host;
 int VAR_4;

 VAR_4 = -VAR_0;
 if (FUNC_2(VAR_3))
  goto out;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_3);
 out:
 FUNC_3(VAR_2);
 return VAR_4;
}
