
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dio_submit {size_t head; } ;
struct dio {struct page** pages; } ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dio_submit*) ;
 int FUNC_3 (struct dio*,struct dio_submit*) ;

__attribute__((used)) static inline struct page *FUNC_4(struct dio *VAR_0,
     struct dio_submit *VAR_1)
{
 if (FUNC_2(VAR_1) == 0) {
  int VAR_2;

  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2)
   return FUNC_1(VAR_2);
  FUNC_0(FUNC_2(VAR_1) == 0);
 }
 return VAR_0->pages[VAR_1->head];
}
