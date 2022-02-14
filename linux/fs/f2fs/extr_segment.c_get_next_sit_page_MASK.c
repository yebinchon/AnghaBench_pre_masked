
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_info {int dummy; } ;
struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int pgoff_t ;


 struct sit_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 struct page* FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,struct page*,unsigned int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct sit_info*,unsigned int) ;

__attribute__((used)) static struct page *FUNC_7(struct f2fs_sb_info *VAR_0,
     unsigned int VAR_1)
{
 struct sit_info *VAR_2 = FUNC_0(VAR_0);
 struct page *VAR_3;
 pgoff_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 VAR_5 = FUNC_3(VAR_0, VAR_4);

 VAR_3 = FUNC_2(VAR_0, VAR_5);
 FUNC_4(VAR_0, VAR_3, VAR_1);

 FUNC_5(VAR_3);
 FUNC_6(VAR_2, VAR_1);

 return VAR_3;
}
