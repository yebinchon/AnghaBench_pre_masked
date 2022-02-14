
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct f2fs_sb_info {int sb; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct page*) ;
 struct inode* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static void FUNC_11(struct f2fs_sb_info *VAR_2, nid_t VAR_3)
{
 struct inode *VAR_4;
 struct page *VAR_5;
 int VAR_6;


 VAR_4 = FUNC_7(VAR_2->sb, VAR_3);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_3(VAR_4->i_mapping, 0,
     VAR_0|VAR_1, 0);
 if (!VAR_5)
  goto iput_out;

 if (!FUNC_1(VAR_5))
  goto page_out;

 if (!FUNC_0(VAR_5))
  goto page_out;

 if (!FUNC_2(VAR_5))
  goto page_out;

 VAR_6 = FUNC_6(VAR_4, VAR_5);
 FUNC_8(VAR_4);
 FUNC_5(VAR_4);
 if (VAR_6)
  FUNC_10(VAR_5);
page_out:
 FUNC_4(VAR_5, 1);
iput_out:
 FUNC_9(VAR_4);
}
