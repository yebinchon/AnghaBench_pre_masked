
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_cache_entry {int dummy; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,scalar_t__) ;
 int FUNC_6 (void*,struct squashfs_cache_entry*,int,int) ;

void FUNC_7(struct page *VAR_1, struct squashfs_cache_entry *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_3(VAR_1);
 VAR_5 = FUNC_6(VAR_6, VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_6 + VAR_5, 0, VAR_0 - VAR_5);
 FUNC_4(VAR_6);

 FUNC_2(VAR_1);
 if (VAR_5 == VAR_4)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
