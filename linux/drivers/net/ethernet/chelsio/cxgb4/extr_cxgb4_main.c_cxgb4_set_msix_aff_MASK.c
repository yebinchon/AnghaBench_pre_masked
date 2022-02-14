
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int pdev_dev; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned short,int) ;
 int FUNC_5 (unsigned short,int ) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct adapter *VAR_2, unsigned short VAR_3,
         cpumask_var_t *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!FUNC_6(VAR_4, VAR_1)) {
  FUNC_2(VAR_2->pdev_dev, "alloc_cpumask_var failed\n");
  return -VAR_0;
 }

 FUNC_1(FUNC_0(VAR_5, FUNC_3(VAR_2->pdev_dev)),
   *VAR_4);

 VAR_6 = FUNC_5(VAR_3, *VAR_4);
 if (VAR_6)
  FUNC_4(VAR_2->pdev_dev,
    "irq_set_affinity_hint %u failed %d\n",
    VAR_3, VAR_6);

 return 0;
}
