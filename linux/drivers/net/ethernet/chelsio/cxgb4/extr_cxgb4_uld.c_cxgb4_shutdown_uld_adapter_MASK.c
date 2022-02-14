
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {int flags; TYPE_1__* uld; } ;
typedef enum cxgb4_uld { ____Placeholder_cxgb4_uld } cxgb4_uld ;
struct TYPE_2__ {int * add; int * handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,int) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_2, enum cxgb4_uld VAR_3)
{
 if (VAR_2->uld[VAR_3].handle) {
  VAR_2->uld[VAR_3].handle = ((void*)0);
  VAR_2->uld[VAR_3].add = ((void*)0);
  FUNC_4(VAR_2, VAR_3);

  if (VAR_2->flags & VAR_0)
   FUNC_3(VAR_2, VAR_3);

  if (VAR_2->flags & VAR_1)
   FUNC_0(VAR_2, VAR_3);

  FUNC_2(VAR_2, VAR_3);
  FUNC_1(VAR_2, VAR_3);
 }
}
