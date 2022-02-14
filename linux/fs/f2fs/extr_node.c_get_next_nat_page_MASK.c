
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int dummy; } ;
typedef int pgoff_t ;
typedef int nid_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct page*,int) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (void*,void*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct f2fs_nm_info*,int ) ;

__attribute__((used)) static struct page *FUNC_13(struct f2fs_sb_info *VAR_1, nid_t VAR_2)
{
 struct page *VAR_3;
 struct page *VAR_4;
 pgoff_t VAR_5;
 void *VAR_6;
 void *VAR_7;
 struct f2fs_nm_info *VAR_8 = FUNC_1(VAR_1);

 VAR_5 = FUNC_9(VAR_1, FUNC_3(VAR_1, VAR_2));


 VAR_3 = FUNC_7(VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return VAR_3;
 VAR_4 = FUNC_5(VAR_1, VAR_5);
 FUNC_4(VAR_1, FUNC_2(VAR_3));

 VAR_6 = FUNC_10(VAR_3);
 VAR_7 = FUNC_10(VAR_4);
 FUNC_8(VAR_7, VAR_6, VAR_0);
 FUNC_11(VAR_4);
 FUNC_6(VAR_3, 1);

 FUNC_12(VAR_8, VAR_2);

 return VAR_4;
}
