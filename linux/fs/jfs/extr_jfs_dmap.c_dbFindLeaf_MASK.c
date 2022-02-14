
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dmt_stree; int dmt_leafidx; int dmt_height; } ;
typedef TYPE_1__ dmtree_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(dmtree_t * VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0;




 if (VAR_3 > VAR_2->dmt_stree[VAR_1])
  return -VAR_0;





 for (VAR_7 = FUNC_1(VAR_2->dmt_height), VAR_5 = 1;
      VAR_7 > 0; VAR_7--, VAR_5 = ((VAR_5 + VAR_6) << 2) + 1) {



  for (VAR_8 = VAR_5, VAR_6 = 0; VAR_6 < 4; VAR_6++) {



   if (VAR_3 <= VAR_2->dmt_stree[VAR_8 + VAR_6])
    break;
  }




  FUNC_0(VAR_6 < 4);
 }




 *VAR_4 = VAR_8 + VAR_6 - FUNC_1(VAR_2->dmt_leafidx);

 return (0);
}
