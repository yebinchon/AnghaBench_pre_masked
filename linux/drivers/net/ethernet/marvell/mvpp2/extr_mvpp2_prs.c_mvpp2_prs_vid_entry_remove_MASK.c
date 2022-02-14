
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mvpp2_port {struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {int valid; } ;


 int FUNC_0 (struct mvpp2*,int) ;
 int FUNC_1 (struct mvpp2_port*,int ,int) ;

void FUNC_2(struct mvpp2_port *VAR_0, u16 VAR_1)
{
 struct mvpp2 *VAR_2 = VAR_0->priv;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_0, VAR_1, 0xfff);


 if (VAR_3 < 0)
  return;

 FUNC_0(VAR_2, VAR_3);
 VAR_2->prs_shadow[VAR_3].valid = 0;
}
