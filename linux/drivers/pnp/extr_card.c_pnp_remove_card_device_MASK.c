
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int card_list; int * card; } ;


 int FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct pnp_dev *VAR_1)
{
 FUNC_2(&VAR_0);
 VAR_1->card = ((void*)0);
 FUNC_1(&VAR_1->card_list);
 FUNC_3(&VAR_0);
 FUNC_0(VAR_1);
}
