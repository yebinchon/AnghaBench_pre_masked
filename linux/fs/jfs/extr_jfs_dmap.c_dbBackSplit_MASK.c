
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s8 ;
struct TYPE_4__ {int* dmt_stree; int dmt_nleafs; int dmt_budmin; int dmt_l2nleafs; int dmt_leafidx; } ;
typedef TYPE_1__ dmtree_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(dmtree_t * VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 s8 *VAR_10 = VAR_2->dmt_stree + FUNC_5(VAR_2->dmt_leafidx);




 FUNC_2(VAR_10[VAR_3] == VAR_1);
 VAR_8 =
     FUNC_1(VAR_3, FUNC_5(VAR_2->dmt_l2nleafs),
        VAR_2->dmt_budmin);





 VAR_4 = FUNC_0(VAR_8, VAR_2->dmt_budmin);



 while (VAR_10[VAR_3] == VAR_1) {


  for (VAR_6 = VAR_3, VAR_7 = VAR_4;; VAR_7 <<= 1,
       VAR_6 = (VAR_6 < VAR_5) ? VAR_6 : VAR_5) {
   if (VAR_7 >= FUNC_5(VAR_2->dmt_nleafs)) {
    FUNC_4("JFS: block map error in dbBackSplit");
    return -VAR_0;
   }



   VAR_5 = VAR_6 ^ VAR_7;



   if (VAR_10[VAR_5] != VAR_1) {



    VAR_9 = VAR_10[VAR_5] - 1;
    FUNC_3(VAR_2, VAR_5, VAR_9, VAR_9);
    break;
   }
  }
 }

 if (VAR_10[VAR_3] != VAR_8) {
  FUNC_4("JFS: wrong leaf value in dbBackSplit");
  return -VAR_0;
 }
 return 0;
}
