
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int target_unpopulated; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(int VAR_3, struct page **VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4[VAR_5])
   FUNC_0(VAR_4[VAR_5]);
 }

 VAR_1.target_unpopulated -= VAR_3;


 if (FUNC_1())
  FUNC_4(&VAR_2, 0);

 FUNC_3(&VAR_0);
}
