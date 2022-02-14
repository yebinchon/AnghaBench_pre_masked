
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysv_dir_entry {int inode; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*,int,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int,int ) ;

void FUNC_11(struct sysv_dir_entry *VAR_1, struct page *VAR_2,
 struct inode *VAR_3)
{
 struct inode *VAR_4 = VAR_2->mapping->host;
 loff_t VAR_5 = FUNC_9(VAR_2) +
   (char *)VAR_1-(char*)FUNC_8(VAR_2);
 int VAR_6;

 FUNC_6(VAR_2);
 VAR_6 = FUNC_10(VAR_2, VAR_5, VAR_0);
 FUNC_0(VAR_6);
 VAR_1->inode = FUNC_2(FUNC_1(VAR_3->i_sb), VAR_3->i_ino);
 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_0);
 FUNC_5(VAR_2);
 VAR_4->i_mtime = VAR_4->i_ctime = FUNC_3(VAR_4);
 FUNC_7(VAR_4);
}
