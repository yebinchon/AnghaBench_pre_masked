
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_bhf_priv {size_t tx_dnext; int net_dev; int * tx_descs; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ec_bhf_priv *VAR_0)
{
 if (FUNC_4(FUNC_1(VAR_0->net_dev))) {

  FUNC_3();

  if (FUNC_0(&VAR_0->tx_descs[VAR_0->tx_dnext]))
   FUNC_2(VAR_0->net_dev);
 }
}
