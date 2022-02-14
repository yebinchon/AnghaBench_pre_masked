
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft_sess {int kref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ft_sess *VAR_1)
{
 int VAR_2 = FUNC_2(&VAR_1->kref);

 FUNC_0(!VAR_2);
 FUNC_1(&VAR_1->kref, VAR_0);
}
