
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm_wb {int use; scalar_t__ len; } ;
struct acm {struct acm_wb* wb; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acm *VAR_1)
{
 int VAR_2, VAR_3;
 struct acm_wb *VAR_4;

 VAR_3 = 0;
 VAR_2 = 0;
 for (;;) {
  VAR_4 = &VAR_1->wb[VAR_3];
  if (!VAR_4->use) {
   VAR_4->use = 1;
   VAR_4->len = 0;
   return VAR_3;
  }
  VAR_3 = (VAR_3 + 1) % VAR_0;
  if (++VAR_2 >= VAR_0)
   return -1;
 }
}
