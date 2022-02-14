
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gnttab_map_grant_ref {scalar_t__ status; int handle; } ;
typedef int grant_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct gnttab_map_grant_ref*,int *,struct page**,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct gnttab_map_grant_ref *VAR_3,
 struct page **VAR_4, grant_handle_t *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_2(VAR_3, ((void*)0), VAR_4, VAR_6);
 FUNC_0(VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (FUNC_4(VAR_3[VAR_8].status != VAR_1)) {
   FUNC_3("invalid buffer -- could not remap it\n");
   VAR_3[VAR_8].handle = VAR_2;
   VAR_7 = -VAR_0;
  } else {
   FUNC_1(VAR_4[VAR_8]);
  }
  VAR_5[VAR_8] = VAR_3[VAR_8].handle;
 }
 return VAR_7;
}
