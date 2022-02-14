
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int phy_lock; int port; int hw; } ;


 int FUNC_0 (struct sky2_port*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sky2_port *VAR_0)
{
 FUNC_2(&VAR_0->phy_lock);
 FUNC_1(VAR_0->hw, VAR_0->port);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->phy_lock);
}
