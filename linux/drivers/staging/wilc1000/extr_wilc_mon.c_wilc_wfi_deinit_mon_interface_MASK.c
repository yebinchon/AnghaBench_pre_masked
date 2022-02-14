
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {int * monitor_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wilc *VAR_0, bool VAR_1)
{
 if (!VAR_0->monitor_dev)
  return;

 if (VAR_1)
  FUNC_1(VAR_0->monitor_dev);
 else
  FUNC_0(VAR_0->monitor_dev);
 VAR_0->monitor_dev = ((void*)0);
}
