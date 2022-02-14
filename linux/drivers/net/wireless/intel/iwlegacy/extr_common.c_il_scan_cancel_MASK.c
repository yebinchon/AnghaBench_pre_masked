
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int abort_scan; int workqueue; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;

int
FUNC_2(struct il_priv *VAR_0)
{
 FUNC_0("Queuing abort scan\n");
 FUNC_1(VAR_0->workqueue, &VAR_0->abort_scan);
 return 0;
}
