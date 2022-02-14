
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {int service_task; int gve_wq; } ;


 int FUNC_0 (struct gve_priv*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct gve_priv *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->gve_wq, &VAR_0->service_task);
}
