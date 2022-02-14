
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct bnx2x {int pdev; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bnx2x*,scalar_t__) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6,
         struct ethtool_channels *VAR_7)
{
 struct bnx2x *VAR_8 = FUNC_6(VAR_6);

 FUNC_2(VAR_0,
    "set-channels command parameters: rx = %d, tx = %d, other = %d, combined = %d\n",
    VAR_7->rx_count, VAR_7->tx_count, VAR_7->other_count,
    VAR_7->combined_count);

 if (FUNC_8(VAR_8->pdev)) {
  FUNC_2(VAR_1, "VFs are enabled, can not set channels\n");
  return -VAR_3;
 }




 if (VAR_7->rx_count || VAR_7->tx_count || VAR_7->other_count
     || (VAR_7->combined_count == 0) ||
     (VAR_7->combined_count > FUNC_0(VAR_8))) {
  FUNC_2(VAR_0, "command parameters not supported\n");
  return -VAR_2;
 }


 if (VAR_7->combined_count == FUNC_1(VAR_8)) {
  FUNC_2(VAR_0, "No change in active parameters\n");
  return 0;
 }





 if (FUNC_9(!FUNC_7(VAR_6))) {
  FUNC_3(VAR_8, VAR_7->combined_count);
  return 0;
 }
 FUNC_5(VAR_8, VAR_5, 1);
 FUNC_3(VAR_8, VAR_7->combined_count);
 return FUNC_4(VAR_8, VAR_4);
}
