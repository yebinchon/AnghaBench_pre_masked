
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mvpp2_port {int nrxqs; TYPE_2__* dev; } ;
struct mvpp2 {int port_count; int percpu_pools; struct mvpp2_port** port_list; int * bm_pools; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct mvpp2*) ;
 int FUNC_2 (int ,struct mvpp2*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mvpp2_port*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct mvpp2 *VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_0, VAR_5;
 struct mvpp2_port *VAR_6 = ((void*)0);
 bool VAR_7[VAR_1];

 for (VAR_5 = 0; VAR_5 < VAR_2->port_count; VAR_5++) {
  VAR_6 = VAR_2->port_list[VAR_5];
  VAR_7[VAR_5] = FUNC_6(VAR_6->dev);
  if (VAR_7[VAR_5])
   FUNC_4(VAR_6->dev);
 }


 if (VAR_2->percpu_pools)
  VAR_4 = VAR_6->nrxqs * 2;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_2(VAR_6->dev->dev.parent, VAR_2, &VAR_2->bm_pools[VAR_5]);

 FUNC_0(VAR_6->dev->dev.parent, VAR_2->bm_pools);
 VAR_2->percpu_pools = VAR_3;
 FUNC_1(VAR_6->dev->dev.parent, VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->port_count; VAR_5++) {
  VAR_6 = VAR_2->port_list[VAR_5];
  FUNC_5(VAR_6);
  if (VAR_7[VAR_5])
   FUNC_3(VAR_6->dev);
 }

 return 0;
}
