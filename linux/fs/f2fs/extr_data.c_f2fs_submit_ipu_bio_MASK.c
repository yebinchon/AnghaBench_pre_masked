
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int *,struct page*,int ) ;
 int FUNC_1 (struct f2fs_sb_info*,struct bio*,int ) ;

__attribute__((used)) static void FUNC_2(struct f2fs_sb_info *VAR_1, struct bio **VAR_2,
       struct page *VAR_3)
{
 if (!VAR_2)
  return;

 if (!FUNC_0(*VAR_2, ((void*)0), VAR_3, 0))
  return;

 FUNC_1(VAR_1, *VAR_2, VAR_0);
 *VAR_2 = ((void*)0);
}
