
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int i_sem; int i_xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int,char const*,void const*,size_t,struct page*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 int FUNC_9 (struct f2fs_sb_info*) ;
 int FUNC_10 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct inode *VAR_3, int VAR_4, const char *VAR_5,
    const void *VAR_6, size_t VAR_7,
    struct page *VAR_8, int VAR_9)
{
 struct f2fs_sb_info *VAR_10 = FUNC_1(VAR_3);
 int VAR_11;

 if (FUNC_11(FUNC_6(VAR_10)))
  return -VAR_0;
 if (!FUNC_7(VAR_10))
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_3);
 if (VAR_11)
  return VAR_11;


 if (VAR_8)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_9);
 FUNC_5(VAR_10, 1);

 FUNC_8(VAR_10);

 FUNC_3(&FUNC_0(VAR_3)->i_sem);
 FUNC_3(&FUNC_0(VAR_3)->i_xattr_sem);
 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_12(&FUNC_0(VAR_3)->i_xattr_sem);
 FUNC_12(&FUNC_0(VAR_3)->i_sem);
 FUNC_9(VAR_10);

 FUNC_10(VAR_10, VAR_2);
 return VAR_11;
}
