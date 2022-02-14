
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; } ;
struct ext2_dir_entry_2 {int inode; int rec_len; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*,int,unsigned int) ;
 int FUNC_5 (struct page*,int,unsigned int) ;
 int FUNC_6 (struct page*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct ext2_dir_entry_2*,struct inode*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;

void FUNC_13(struct inode *VAR_1, struct ext2_dir_entry_2 *VAR_2,
     struct page *VAR_3, struct inode *VAR_4, int VAR_5)
{
 loff_t VAR_6 = FUNC_12(VAR_3) +
   (char *) VAR_2 - (char *) FUNC_11(VAR_3);
 unsigned VAR_7 = FUNC_7(VAR_2->rec_len);
 int VAR_8;

 FUNC_9(VAR_3);
 VAR_8 = FUNC_5(VAR_3, VAR_6, VAR_7);
 FUNC_0(VAR_8);
 VAR_2->inode = FUNC_2(VAR_4->i_ino);
 FUNC_8(VAR_2, VAR_4);
 VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_7);
 FUNC_6(VAR_3);
 if (VAR_5)
  VAR_1->i_mtime = VAR_1->i_ctime = FUNC_3(VAR_1);
 FUNC_1(VAR_1)->i_flags &= ~VAR_0;
 FUNC_10(VAR_1);
}
