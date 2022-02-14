
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq {int pwrseq_node; int dev; int ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct mmc_pwrseq *VAR_3)
{
 if (!VAR_3 || !VAR_3->ops || !VAR_3->dev)
  return -VAR_0;

 FUNC_1(&VAR_2);
 FUNC_0(&VAR_3->pwrseq_node, &VAR_1);
 FUNC_2(&VAR_2);

 return 0;
}
