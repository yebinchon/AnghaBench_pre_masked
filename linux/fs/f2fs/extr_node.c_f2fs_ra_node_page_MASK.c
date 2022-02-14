
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
typedef int nid_t ;
struct TYPE_3__ {int i_pages; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,int ) ;
 struct page* FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct page*,int) ;
 int FUNC_4 (struct page*,int ) ;
 struct page* FUNC_5 (int *,int ) ;

void FUNC_6(struct f2fs_sb_info *VAR_1, nid_t VAR_2)
{
 struct page *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;
 if (FUNC_1(VAR_1, VAR_2))
  return;

 VAR_3 = FUNC_5(&FUNC_0(VAR_1)->i_pages, VAR_2);
 if (VAR_3)
  return;

 VAR_3 = FUNC_2(FUNC_0(VAR_1), VAR_2, 0);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_4 ? 1 : 0);
}
