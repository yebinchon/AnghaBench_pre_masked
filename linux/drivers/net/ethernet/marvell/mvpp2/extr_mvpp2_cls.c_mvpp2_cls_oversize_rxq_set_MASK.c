
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int first_rxq; int priv; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct mvpp2_port *VAR_3)
{
 u32 VAR_4;

 FUNC_4(VAR_3->priv, FUNC_0(VAR_3->id),
      VAR_3->first_rxq & VAR_1);

 FUNC_4(VAR_3->priv, FUNC_1(VAR_3->id),
      (VAR_3->first_rxq >> VAR_0));

 VAR_4 = FUNC_3(VAR_3->priv, VAR_2);
 VAR_4 |= FUNC_2(VAR_3->id);
 FUNC_4(VAR_3->priv, VAR_2, VAR_4);
}
