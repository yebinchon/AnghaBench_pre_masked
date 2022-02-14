
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (size_t) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (unsigned int,int,int ) ;
 scalar_t__ FUNC_3 (struct sg_table*,struct page**,unsigned int,int ,size_t,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t) ;
 struct page* FUNC_6 (void*) ;

__attribute__((used)) static void *FUNC_7(struct sg_table *VAR_3, size_t VAR_4)
{
 struct page **VAR_5;
 void *VAR_6, *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_4) >> VAR_1;
 VAR_5 = FUNC_2(VAR_8, sizeof(struct page *), VAR_0);
 if (!VAR_5) {
  FUNC_4(VAR_6);

  return ((void*)0);
 }
 for (VAR_9 = 0, VAR_7 = VAR_6; VAR_9 < VAR_8; ++VAR_9, VAR_7 += VAR_2)
  VAR_5[VAR_9] = FUNC_6(VAR_7);

 if (FUNC_3(VAR_3, VAR_5, VAR_8, 0, VAR_4, VAR_0)) {
  FUNC_1(VAR_5);
  FUNC_4(VAR_6);

  return ((void*)0);
 }
 FUNC_1(VAR_5);

 return VAR_6;
}
