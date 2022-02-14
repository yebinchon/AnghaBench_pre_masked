
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gnttab_unmap_grant_ref {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct gnttab_unmap_grant_ref*,unsigned int) ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,struct gnttab_unmap_grant_ref*,struct page**,unsigned int) ;

int FUNC_3(struct gnttab_unmap_grant_ref *VAR_1,
        struct gnttab_unmap_grant_ref *VAR_2,
        struct page **VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_4);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(VAR_3[VAR_5]);

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
