
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int d_ino; int d_reclen; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_mode; int i_sb; int i_ino; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int,unsigned int) ;
 int FUNC_9 (struct page*,int,unsigned int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int ,struct ufs_dir_entry*,int ) ;

void FUNC_12(struct inode *VAR_0, struct ufs_dir_entry *VAR_1,
    struct page *VAR_2, struct inode *VAR_3,
    bool VAR_4)
{
 loff_t VAR_5 = FUNC_7(VAR_2) +
   (char *) VAR_1 - (char *) FUNC_6(VAR_2);
 unsigned VAR_6 = FUNC_3(VAR_0->i_sb, VAR_1->d_reclen);
 int VAR_7;

 FUNC_4(VAR_2);
 VAR_7 = FUNC_9(VAR_2, VAR_5, VAR_6);
 FUNC_0(VAR_7);

 VAR_1->d_ino = FUNC_1(VAR_0->i_sb, VAR_3->i_ino);
 FUNC_11(VAR_0->i_sb, VAR_1, VAR_3->i_mode);

 VAR_7 = FUNC_8(VAR_2, VAR_5, VAR_6);
 FUNC_10(VAR_2);
 if (VAR_4)
  VAR_0->i_mtime = VAR_0->i_ctime = FUNC_2(VAR_0);
 FUNC_5(VAR_0);
}
