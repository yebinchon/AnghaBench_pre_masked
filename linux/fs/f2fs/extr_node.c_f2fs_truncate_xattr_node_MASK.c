
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int dummy; } ;
typedef int nid_t ;
struct TYPE_2__ {int i_xattr_nid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct dnode_of_data*,struct inode*,int *,struct page*,int ) ;
 int FUNC_8 (struct dnode_of_data*) ;

int FUNC_9(struct inode *VAR_0)
{
 struct f2fs_sb_info *VAR_1 = FUNC_1(VAR_0);
 nid_t VAR_2 = FUNC_0(VAR_0)->i_xattr_nid;
 struct dnode_of_data VAR_3;
 struct page *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_2(VAR_4))
  return FUNC_3(VAR_4);

 FUNC_7(&VAR_3, VAR_0, ((void*)0), VAR_4, VAR_2);
 VAR_5 = FUNC_8(&VAR_3);
 if (VAR_5) {
  FUNC_6(VAR_4, 1);
  return VAR_5;
 }

 FUNC_5(VAR_0, 0);

 return 0;
}
