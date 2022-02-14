
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct fec_enet_private {int ptp_clk_on; scalar_t__ clk_enet_out; scalar_t__ clk_ref; int ptp_clk_mutex; scalar_t__ clk_ptp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, bool VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_2->clk_enet_out);
  if (VAR_3)
   return VAR_3;

  if (VAR_2->clk_ptp) {
   FUNC_2(&VAR_2->ptp_clk_mutex);
   VAR_3 = FUNC_1(VAR_2->clk_ptp);
   if (VAR_3) {
    FUNC_3(&VAR_2->ptp_clk_mutex);
    goto failed_clk_ptp;
   } else {
    VAR_2->ptp_clk_on = 1;
   }
   FUNC_3(&VAR_2->ptp_clk_mutex);
  }

  VAR_3 = FUNC_1(VAR_2->clk_ref);
  if (VAR_3)
   goto failed_clk_ref;

  FUNC_5(VAR_0->phydev);
 } else {
  FUNC_0(VAR_2->clk_enet_out);
  if (VAR_2->clk_ptp) {
   FUNC_2(&VAR_2->ptp_clk_mutex);
   FUNC_0(VAR_2->clk_ptp);
   VAR_2->ptp_clk_on = 0;
   FUNC_3(&VAR_2->ptp_clk_mutex);
  }
  FUNC_0(VAR_2->clk_ref);
 }

 return 0;

failed_clk_ref:
 if (VAR_2->clk_ref)
  FUNC_0(VAR_2->clk_ref);
failed_clk_ptp:
 if (VAR_2->clk_enet_out)
  FUNC_0(VAR_2->clk_enet_out);

 return VAR_3;
}
