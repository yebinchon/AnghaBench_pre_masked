
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int nid_t ;


 int FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct page*,int ) ;
 struct page* FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct f2fs_sb_info *VAR_0, nid_t VAR_1)
{
 struct page *VAR_2 = FUNC_4(FUNC_0(VAR_0), VAR_1);
 bool VAR_3 = 0;

 if ((VAR_2 && FUNC_1(VAR_2)) || FUNC_2(VAR_0, VAR_1))
  VAR_3 = 1;
 FUNC_3(VAR_2, 0);
 return VAR_3;
}
