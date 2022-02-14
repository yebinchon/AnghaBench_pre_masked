
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct TYPE_2__ {int * mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ,struct page**) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;

__attribute__((used)) static u64 FUNC_5(u64 VAR_5)
{
 u64 VAR_6 = 0;
 struct page *VAR_7 = ((void*)0);

 if (!VAR_5)
  return 0;

 if (VAR_5 >= VAR_1) {

  if (FUNC_3((void *)(uintptr_t)VAR_5) &&
      !(VAR_5 >= VAR_3 && VAR_5 < VAR_2))
   VAR_6 = (u64)FUNC_4((void *)(uintptr_t)VAR_5);
 } else {







  if ((VAR_4->mm != ((void*)0)) &&
      (FUNC_0(VAR_5, 1, 0, &VAR_7) == 1))
   VAR_6 = FUNC_1(VAR_7) + VAR_5 % VAR_0;

  if (VAR_7)
   FUNC_2(VAR_7);
 }

 return VAR_6;
}
