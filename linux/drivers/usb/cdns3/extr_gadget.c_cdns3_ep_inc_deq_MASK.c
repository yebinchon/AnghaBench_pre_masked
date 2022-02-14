
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_endpoint {int num_trbs; int ccs; int dequeue; int free_trbs; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct cdns3_endpoint *VAR_0)
{
 VAR_0->free_trbs++;
 FUNC_0(&VAR_0->dequeue, &VAR_0->ccs, VAR_0->num_trbs);
}
