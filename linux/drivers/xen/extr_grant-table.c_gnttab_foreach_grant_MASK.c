
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xen_grant_fn_t ) (int ,unsigned int,scalar_t__,void*) ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(struct page **VAR_2,
     unsigned int VAR_3,
     xen_grant_fn_t VAR_4,
     void *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned long VAR_7 = 0;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if ((VAR_8 % VAR_1) == 0) {
   VAR_7 = FUNC_0(VAR_2[VAR_8 / VAR_1]);
   VAR_6 = 0;
  }

  VAR_4(FUNC_1(VAR_7), VAR_6, VAR_0, VAR_5);

  VAR_6 += VAR_0;
  VAR_7++;
 }
}
