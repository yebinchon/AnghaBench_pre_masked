
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_state {int mipi_phy_regulator; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct csi_state *VAR_0)
{
 VAR_0->mipi_phy_regulator = FUNC_0(VAR_0->dev, "phy");

 return FUNC_1(VAR_0->mipi_phy_regulator, 1000000,
         1000000);
}
