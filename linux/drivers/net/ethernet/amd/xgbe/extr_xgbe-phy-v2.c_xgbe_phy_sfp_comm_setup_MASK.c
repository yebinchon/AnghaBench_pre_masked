
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev; int pp4; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {unsigned int sfp_mux_address; unsigned int sfp_mux_channel; int sfp_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_6)
{
 struct xgbe_phy_data *VAR_7 = VAR_6->phy_data;
 unsigned int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6->pp4, VAR_5, VAR_0);
 VAR_9 = FUNC_0(VAR_6->pp4, VAR_5, VAR_1);
 if (VAR_9 == VAR_4)
  return;

 VAR_7->sfp_comm = VAR_3;
 VAR_7->sfp_mux_address = (VAR_8 << 2) + VAR_9;
 VAR_7->sfp_mux_channel = FUNC_0(VAR_6->pp4, VAR_5,
      VAR_2);

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_6->dev, "SFP: mux_address=%#x\n",
   VAR_7->sfp_mux_address);
  FUNC_1(VAR_6->dev, "SFP: mux_channel=%u\n",
   VAR_7->sfp_mux_channel);
 }
}
