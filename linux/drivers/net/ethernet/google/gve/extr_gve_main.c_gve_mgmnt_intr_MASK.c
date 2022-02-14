
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {int service_task; int gve_wq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct gve_priv *VAR_3 = VAR_2;

 FUNC_0(VAR_3->gve_wq, &VAR_3->service_task);
 return VAR_0;
}
