
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int nid_t ;


 struct f2fs_sb_info* FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct f2fs_sb_info*,int ,struct page*,int) ;
 int FUNC_2 (struct page*,int,int) ;

struct page *FUNC_3(struct page *VAR_0, int VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_0(VAR_0);
 nid_t VAR_3 = FUNC_2(VAR_0, VAR_1, 0);

 return FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);
}
