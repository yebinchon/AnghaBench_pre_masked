
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {struct device_node** blist; } ;
struct emac_depentry {scalar_t__ phandle; int * drvdata; int * ofdev; int * node; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (struct device_node*) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct emac_instance *VAR_2,
      struct emac_depentry *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct device_node *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  if (VAR_3[VAR_4].phandle == 0) {
   VAR_5++;
   continue;
  }

  if (VAR_4 == VAR_1) {
   VAR_6 = *(VAR_2->blist - 1);
   if (VAR_6 == ((void*)0)) {
    VAR_3[VAR_4].phandle = 0;
    VAR_5++;
    continue;
   }
   if (VAR_3[VAR_4].node == ((void*)0))
    VAR_3[VAR_4].node = FUNC_2(VAR_6);
  }
  if (VAR_3[VAR_4].node == ((void*)0))
   VAR_3[VAR_4].node = FUNC_1(VAR_3[VAR_4].phandle);
  if (VAR_3[VAR_4].node == ((void*)0))
   continue;
  if (VAR_3[VAR_4].ofdev == ((void*)0))
   VAR_3[VAR_4].ofdev = FUNC_0(VAR_3[VAR_4].node);
  if (VAR_3[VAR_4].ofdev == ((void*)0))
   continue;
  if (VAR_3[VAR_4].drvdata == ((void*)0))
   VAR_3[VAR_4].drvdata = FUNC_3(VAR_3[VAR_4].ofdev);
  if (VAR_3[VAR_4].drvdata != ((void*)0))
   VAR_5++;
 }
 return VAR_5 == VAR_0;
}
