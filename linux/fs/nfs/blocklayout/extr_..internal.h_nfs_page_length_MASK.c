
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static inline
unsigned int FUNC_3(struct page *VAR_3)
{
 loff_t VAR_4 = FUNC_0(FUNC_1(VAR_3)->host);

 if (VAR_4 > 0) {
  pgoff_t VAR_5 = FUNC_2(VAR_3);
  pgoff_t VAR_6 = (VAR_4 - 1) >> VAR_1;
  if (VAR_5 < VAR_6)
   return VAR_2;
  if (VAR_5 == VAR_6)
   return ((VAR_4 - 1) & ~VAR_0) + 1;
 }
 return 0;
}
