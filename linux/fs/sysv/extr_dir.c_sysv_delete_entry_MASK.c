
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysv_dir_entry {scalar_t__ inode; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_mtime; int i_ctime; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct page*,int,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int,int ) ;

int FUNC_9(struct sysv_dir_entry *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mapping->host;
 char *VAR_4 = (char*)FUNC_6(VAR_2);
 loff_t VAR_5 = FUNC_7(VAR_2) + (char *)VAR_1 - VAR_4;
 int VAR_6;

 FUNC_4(VAR_2);
 VAR_6 = FUNC_8(VAR_2, VAR_5, VAR_0);
 FUNC_0(VAR_6);
 VAR_1->inode = 0;
 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_0);
 FUNC_3(VAR_2);
 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_1(VAR_3);
 FUNC_5(VAR_3);
 return VAR_6;
}
