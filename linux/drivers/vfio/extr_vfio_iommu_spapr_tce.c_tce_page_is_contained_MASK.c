
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned int,unsigned long*) ;
 unsigned int FUNC_2 (int ) ;
 struct page* FUNC_3 (unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct mm_struct *VAR_1, unsigned long VAR_2,
  unsigned int VAR_3)
{
 struct page *VAR_4;
 unsigned long VAR_5 = 0;

 if (FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5))
  return VAR_5 == (1UL << VAR_3);

 VAR_4 = FUNC_3(VAR_2 >> VAR_0);





 return FUNC_2(FUNC_0(VAR_4)) >= VAR_3;
}
