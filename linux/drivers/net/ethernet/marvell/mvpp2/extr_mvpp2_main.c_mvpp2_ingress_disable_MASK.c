
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {int nrxqs; int priv; TYPE_1__** rxqs; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mvpp2_port *VAR_1)
{
 u32 VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->nrxqs; VAR_3++) {
  VAR_4 = VAR_1->rxqs[VAR_3]->id;
  VAR_2 = FUNC_1(VAR_1->priv, FUNC_0(VAR_4));
  VAR_2 |= VAR_0;
  FUNC_2(VAR_1->priv, FUNC_0(VAR_4), VAR_2);
 }
}
