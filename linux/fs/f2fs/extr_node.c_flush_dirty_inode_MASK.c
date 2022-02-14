
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int sb; } ;
typedef int nid_t ;


 struct f2fs_sb_info* FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct page*) ;
 struct inode* FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static bool FUNC_6(struct page *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct inode *VAR_3;
 nid_t VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_2->sb, VAR_4, VAR_0, ((void*)0));
 if (!VAR_3)
  return 0;

 FUNC_1(VAR_3, VAR_1);
 FUNC_5(VAR_1);

 FUNC_4(VAR_3);
 return 1;
}
