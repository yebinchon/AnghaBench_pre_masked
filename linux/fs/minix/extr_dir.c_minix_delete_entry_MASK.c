
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct minix_sb_info {unsigned int s_dirsize; scalar_t__ s_version; } ;
struct minix_dir_entry {scalar_t__ inode; } ;
struct inode {int i_mtime; int i_ctime; int i_sb; } ;
struct TYPE_4__ {scalar_t__ inode; } ;
typedef TYPE_2__ minix3_dirent ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*,int,unsigned int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*,int,unsigned int) ;
 struct minix_sb_info* FUNC_6 (int ) ;
 char* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(struct minix_dir_entry *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_2->mapping->host;
 char *VAR_4 = FUNC_7(VAR_2);
 loff_t VAR_5 = FUNC_8(VAR_2) + (char*)VAR_1 - VAR_4;
 struct minix_sb_info *VAR_6 = FUNC_6(VAR_3->i_sb);
 unsigned VAR_7 = VAR_6->s_dirsize;
 int VAR_8;

 FUNC_3(VAR_2);
 VAR_8 = FUNC_5(VAR_2, VAR_5, VAR_7);
 if (VAR_8 == 0) {
  if (VAR_6->s_version == VAR_0)
   ((minix3_dirent *) VAR_1)->inode = 0;
  else
   VAR_1->inode = 0;
  VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_7);
 } else {
  FUNC_9(VAR_2);
 }
 FUNC_2(VAR_2);
 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 return VAR_8;
}
