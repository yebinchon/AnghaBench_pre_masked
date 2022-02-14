
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int net_dev; int phy_mode; } ;


 int FUNC_0 (struct ef4_nic*) ;
 int VAR_0 ;
 int FUNC_1 (struct ef4_nic*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*) ;
 int VAR_1 ;
 int FUNC_7 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(struct ef4_nic *VAR_2, int VAR_3)
{
 bool VAR_4 = FUNC_6(VAR_2);

 if (FUNC_1(VAR_2) & FUNC_0(VAR_2) & VAR_0 ||
     FUNC_2(VAR_2->phy_mode))

  return VAR_4;

 FUNC_5(VAR_2);

 while (!VAR_4 && VAR_3) {
  FUNC_7(VAR_2, VAR_1, VAR_2->net_dev, "bashing xaui\n");
  FUNC_3(VAR_2);
  FUNC_8(200);

  VAR_4 = FUNC_6(VAR_2);
  --VAR_3;
 }

 FUNC_4(VAR_2);

 return VAR_4;
}
