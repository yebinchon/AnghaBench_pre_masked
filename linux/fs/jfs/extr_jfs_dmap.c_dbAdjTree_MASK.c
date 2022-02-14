
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dmt_stree; int dmt_height; int dmt_leafidx; } ;
typedef TYPE_1__ dmtree_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(dmtree_t * VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;



 VAR_3 = VAR_1 + FUNC_1(VAR_0->dmt_leafidx);




 if (VAR_0->dmt_stree[VAR_3] == VAR_2)
  return;



 VAR_0->dmt_stree[VAR_3] = VAR_2;



 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_0->dmt_height); VAR_5++) {



  VAR_3 = ((VAR_3 - 1) & ~0x03) + 1;



  VAR_4 = (VAR_3 - 1) >> 2;



  VAR_6 = FUNC_0(&VAR_0->dmt_stree[VAR_3]);




  if (VAR_0->dmt_stree[VAR_4] == VAR_6)
   break;



  VAR_0->dmt_stree[VAR_4] = VAR_6;



  VAR_3 = VAR_4;
 }
}
