
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct minix_sb_info {int s_dirsize; scalar_t__ s_version; } ;
struct inode {int i_ino; int i_sb; int i_mapping; } ;
struct TYPE_5__ {int name; int inode; } ;
typedef TYPE_1__ minix_dirent ;
typedef TYPE_1__ minix3_dirent ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*,int ,int) ;
 struct page* FUNC_1 (int ,int ) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,struct minix_sb_info*) ;
 int FUNC_6 (struct page*,int ,int) ;
 struct minix_sb_info* FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct inode *VAR_3, struct inode *VAR_4)
{
 struct page *VAR_5 = FUNC_1(VAR_3->i_mapping, 0);
 struct minix_sb_info *VAR_6 = FUNC_7(VAR_3->i_sb);
 char *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;
 VAR_8 = FUNC_6(VAR_5, 0, 2 * VAR_6->s_dirsize);
 if (VAR_8) {
  FUNC_10(VAR_5);
  goto fail;
 }

 VAR_7 = FUNC_2(VAR_5);
 FUNC_4(VAR_7, 0, VAR_2);

 if (VAR_6->s_version == VAR_1) {
  minix3_dirent *VAR_9 = (minix3_dirent *)VAR_7;

  VAR_9->inode = VAR_3->i_ino;
  FUNC_9(VAR_9->name, ".");
  VAR_9 = FUNC_5(VAR_9, VAR_6);
  VAR_9->inode = VAR_4->i_ino;
  FUNC_9(VAR_9->name, "..");
 } else {
  minix_dirent *VAR_10 = (minix_dirent *)VAR_7;

  VAR_10->inode = VAR_3->i_ino;
  FUNC_9(VAR_10->name, ".");
  VAR_10 = FUNC_5(VAR_10, VAR_6);
  VAR_10->inode = VAR_4->i_ino;
  FUNC_9(VAR_10->name, "..");
 }
 FUNC_3(VAR_7);

 VAR_8 = FUNC_0(VAR_5, 0, 2 * VAR_6->s_dirsize);
fail:
 FUNC_8(VAR_5);
 return VAR_8;
}
