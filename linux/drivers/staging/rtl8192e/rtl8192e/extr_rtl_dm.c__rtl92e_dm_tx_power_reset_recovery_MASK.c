
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {size_t rfa_txpowertrackingindex; size_t CCKPresentAttentuation; size_t rfc_txpowertrackingindex; int bcck_in_ch14; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 size_t FUNC_1 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int ,size_t) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_4(VAR_5);

 FUNC_0(VAR_0, "Start Reset Recovery ==>\n");
 FUNC_3(VAR_5, VAR_3, VAR_1,
     VAR_2[VAR_6->rfa_txpowertrackingindex]);
 FUNC_0(VAR_0, "Reset Recovery: Fill in 0xc80 is %08x\n",
   VAR_2[VAR_6->rfa_txpowertrackingindex]);
 FUNC_0(VAR_0,
   "Reset Recovery: Fill in RFA_txPowerTrackingIndex is %x\n",
   VAR_6->rfa_txpowertrackingindex);
 FUNC_0(VAR_0,
   "Reset Recovery : RF A I/Q Amplify Gain is %d\n",
   FUNC_1(VAR_6->rfa_txpowertrackingindex));
 FUNC_0(VAR_0,
   "Reset Recovery: CCK Attenuation is %d dB\n",
   VAR_6->CCKPresentAttentuation);
 FUNC_2(VAR_5, VAR_6->bcck_in_ch14);

 FUNC_3(VAR_5, VAR_4, VAR_1,
     VAR_2[VAR_6->rfc_txpowertrackingindex]);
 FUNC_0(VAR_0, "Reset Recovery: Fill in 0xc90 is %08x\n",
   VAR_2[VAR_6->rfc_txpowertrackingindex]);
 FUNC_0(VAR_0,
   "Reset Recovery: Fill in RFC_txPowerTrackingIndex is %x\n",
   VAR_6->rfc_txpowertrackingindex);
 FUNC_0(VAR_0,
   "Reset Recovery : RF C I/Q Amplify Gain is %d\n",
   FUNC_1(VAR_6->rfc_txpowertrackingindex));
}
