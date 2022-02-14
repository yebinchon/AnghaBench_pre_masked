
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int nqvecs; int comphy; scalar_t__ phylink; TYPE_1__* qvecs; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_0)
{
 int VAR_1;


 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->nqvecs; VAR_1++)
  FUNC_1(&VAR_0->qvecs[VAR_1].napi);

 if (VAR_0->phylink)
  FUNC_3(VAR_0->phylink);
 FUNC_2(VAR_0->comphy);
}
