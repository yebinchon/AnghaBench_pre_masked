
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {int valid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvpp2*,int) ;

void FUNC_3(struct mvpp2_port *VAR_0)
{
 struct mvpp2 *VAR_1 = VAR_0->priv;
 int VAR_2;

 for (VAR_2 = FUNC_0(VAR_0->id);
      VAR_2 <= FUNC_1(VAR_0->id); VAR_2++) {
  if (VAR_1->prs_shadow[VAR_2].valid) {
   FUNC_2(VAR_1, VAR_2);
   VAR_1->prs_shadow[VAR_2].valid = 0;
  }
 }
}
