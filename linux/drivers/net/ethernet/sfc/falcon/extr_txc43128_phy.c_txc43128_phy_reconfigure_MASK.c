
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txc43128_data {int phy_mode; int loopback_mode; } ;
struct ef4_nic {int phy_mode; int loopback_mode; struct txc43128_data* phy_data; } ;
typedef enum ef4_phy_mode { ____Placeholder_ef4_phy_mode } ef4_phy_mode ;


 int FUNC_0 (struct txc43128_data*,struct ef4_nic*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_8(struct ef4_nic *VAR_3)
{
 struct txc43128_data *VAR_4 = VAR_3->phy_data;
 enum ef4_phy_mode VAR_5 = VAR_3->phy_mode ^ VAR_4->phy_mode;
 bool VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_2);

 if (VAR_3->phy_mode & VAR_5 & VAR_1) {
  FUNC_6(VAR_3);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  VAR_5 &= ~VAR_1;
 }

 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 if (VAR_5 & VAR_0)
  FUNC_7(VAR_3);





 if (VAR_6 || VAR_5)
  FUNC_5(VAR_3);

 VAR_4->phy_mode = VAR_3->phy_mode;
 VAR_4->loopback_mode = VAR_3->loopback_mode;

 return 0;
}
