
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tenxpress_phy_data {int bad_lp_tries; } ;
struct ef4_nic {int net_dev; struct tenxpress_phy_data* phy_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ef4_nic*,int ,int ) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,int) ;
 int VAR_11 ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_12, bool VAR_13)
{
 struct tenxpress_phy_data *VAR_14 = VAR_12->phy_data;
 bool VAR_15;
 int VAR_16;

 if (VAR_13) {
  VAR_15 = 0;
 } else {

  VAR_16 = FUNC_0(VAR_12, VAR_3, VAR_5);
  if (!(VAR_16 & VAR_2))
   return;
  VAR_15 = !(VAR_16 & VAR_1);
  if (VAR_15)
   VAR_14->bad_lp_tries++;
 }


 if (!VAR_14->bad_lp_tries)
  return;



 if (!VAR_15 || VAR_14->bad_lp_tries == VAR_0) {
  VAR_16 = FUNC_0(VAR_12, VAR_4,
        VAR_9);
  VAR_16 &= ~(VAR_7 << VAR_10);
  if (!VAR_15) {
   VAR_16 |= VAR_8 << VAR_10;
  } else {
   VAR_16 |= VAR_6 << VAR_10;
   FUNC_2(VAR_12, VAR_11, VAR_12->net_dev,
      "appears to be plugged into a port"
      " that is not 10GBASE-T capable. The PHY"
      " supports 10GBASE-T ONLY, so no link can"
      " be established\n");
  }
  FUNC_1(VAR_12, VAR_4,
          VAR_9, VAR_16);
  VAR_14->bad_lp_tries = VAR_15;
 }
}
