
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_slave {int slave_list; scalar_t__ phy; } ;
struct gbe_priv {scalar_t__ dummy_ndev; int secondary_slaves; } ;


 struct gbe_slave* FUNC_0 (struct gbe_priv*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct gbe_priv *VAR_0)
{
 struct gbe_slave *VAR_1;

 while (!FUNC_3(&VAR_0->secondary_slaves)) {
  VAR_1 = FUNC_0(VAR_0);

  if (VAR_1->phy)
   FUNC_4(VAR_1->phy);
  FUNC_2(&VAR_1->slave_list);
 }
 if (VAR_0->dummy_ndev)
  FUNC_1(VAR_0->dummy_ndev);
}
