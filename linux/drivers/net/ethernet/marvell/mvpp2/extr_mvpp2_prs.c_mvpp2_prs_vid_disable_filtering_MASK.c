
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {struct mvpp2* priv; int id; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {int valid; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct mvpp2*,unsigned int) ;

void FUNC_2(struct mvpp2_port *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0->id);
 struct mvpp2 *VAR_2 = VAR_0->priv;


 FUNC_1(VAR_2, VAR_1);

 VAR_2->prs_shadow[VAR_1].valid = 0;
}
