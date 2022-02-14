
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {int port; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static u16 FUNC_5(struct bnx2x *VAR_4,
         struct bnx2x_phy *VAR_5,
         struct link_params *VAR_6)
{
 u16 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
  if (VAR_5->type == VAR_3)
   FUNC_1(VAR_4, VAR_5,
    VAR_1, &VAR_8);
  else
   FUNC_2(VAR_4, VAR_5,
    VAR_0,
    VAR_1, &VAR_8);
  if (!(VAR_8 & (1<<15)))
   break;
  FUNC_4(1000, 2000);
 }

 if (VAR_7 == 1000)
  FUNC_3(VAR_4->dev, "Warning: PHY was not initialized,"
          " Port %d\n",
    VAR_6->port);
 FUNC_0(VAR_2, "control reg 0x%x (after %d ms)\n", VAR_8, VAR_7);
 return VAR_7;
}
