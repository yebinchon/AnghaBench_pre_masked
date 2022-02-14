
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int nid_t ;
struct TYPE_2__ {int i_xattr_nid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct page*,int) ;
 unsigned int FUNC_6 (struct inode*) ;
 int FUNC_7 (void*,void*,int ) ;
 void* FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, void *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_1(VAR_1);
 nid_t VAR_4 = FUNC_0(VAR_1)->i_xattr_nid;
 unsigned int VAR_5 = FUNC_6(VAR_1);
 struct page *VAR_6;
 void *VAR_7;


 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_2(VAR_6))
  return FUNC_3(VAR_6);

 VAR_7 = FUNC_8(VAR_6);
 FUNC_7(VAR_2 + VAR_5, VAR_7, VAR_0);
 FUNC_5(VAR_6, 1);

 return 0;
}
