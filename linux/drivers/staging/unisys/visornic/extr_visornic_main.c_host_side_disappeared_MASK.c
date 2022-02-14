
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visornic_devdata {int priv_lock; int * dev; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct visornic_devdata *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->priv_lock, VAR_1);

 VAR_0->dev = ((void*)0);
 FUNC_1(&VAR_0->priv_lock, VAR_1);
}
