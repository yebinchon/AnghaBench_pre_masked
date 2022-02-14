
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct file {int dummy; } ;
struct bio {int dummy; } ;
typedef int erofs_off_t ;


 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int *,int ,struct page*,int *,int,int) ;
 int FUNC_4 (struct page*,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, struct page *VAR_1)
{
 erofs_off_t VAR_2;
 struct bio *VAR_3;

 FUNC_4(VAR_1, 1);

 VAR_3 = FUNC_3(((void*)0), VAR_1->mapping,
      VAR_1, &VAR_2, 1, 0);

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 FUNC_0(VAR_3);
 return 0;
}
