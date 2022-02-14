
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_port {int nrxqs; int * rxqs; } ;


 int FUNC_0 (struct mvpp2_port*,int ) ;

__attribute__((used)) static void FUNC_1(struct mvpp2_port *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nrxqs; VAR_1++)
  FUNC_0(VAR_0, VAR_0->rxqs[VAR_1]);
}
