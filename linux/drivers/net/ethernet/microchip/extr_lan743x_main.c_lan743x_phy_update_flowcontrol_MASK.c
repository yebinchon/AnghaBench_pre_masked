
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lan743x_phy {int fc_request_control; scalar_t__ fc_autoneg; } ;
struct lan743x_adapter {struct lan743x_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lan743x_adapter *VAR_2,
        u8 VAR_3, u16 VAR_4,
        u16 VAR_5)
{
 struct lan743x_phy *VAR_6 = &VAR_2->phy;
 u8 VAR_7;

 if (VAR_6->fc_autoneg)
  VAR_7 = FUNC_1(VAR_4, VAR_5);
 else
  VAR_7 = VAR_6->fc_request_control;

 FUNC_0(VAR_2,
       VAR_7 & VAR_1,
       VAR_7 & VAR_0);
}
