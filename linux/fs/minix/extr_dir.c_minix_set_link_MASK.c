
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct minix_sb_info {scalar_t__ s_version; int s_dirsize; } ;
struct minix_dir_entry {int inode; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct TYPE_4__ {int inode; } ;
typedef TYPE_2__ minix3_dirent ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*,int,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*,int,int ) ;
 struct minix_sb_info* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct minix_dir_entry *VAR_1, struct page *VAR_2,
 struct inode *VAR_3)
{
 struct inode *VAR_4 = VAR_2->mapping->host;
 struct minix_sb_info *VAR_5 = FUNC_6(VAR_4->i_sb);
 loff_t VAR_6 = FUNC_8(VAR_2) +
   (char *)VAR_1-(char*)FUNC_7(VAR_2);
 int VAR_7;

 FUNC_3(VAR_2);

 VAR_7 = FUNC_5(VAR_2, VAR_6, VAR_5->s_dirsize);
 if (VAR_7 == 0) {
  if (VAR_5->s_version == VAR_0)
   ((minix3_dirent *) VAR_1)->inode = VAR_3->i_ino;
  else
   VAR_1->inode = VAR_3->i_ino;
  VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_5->s_dirsize);
 } else {
  FUNC_9(VAR_2);
 }
 FUNC_2(VAR_2);
 VAR_4->i_mtime = VAR_4->i_ctime = FUNC_0(VAR_4);
 FUNC_4(VAR_4);
}
