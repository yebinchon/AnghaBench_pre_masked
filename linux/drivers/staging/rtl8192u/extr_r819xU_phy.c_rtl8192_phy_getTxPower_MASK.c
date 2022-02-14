
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int SifsTime; int framesync; int framesyncC34; int * DefaultInitialGain; int * MCSTxPowerLevelOriginalOffset; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int VAR_1 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_device*,int ,int *) ;
 int FUNC_3 (struct net_device*,int ,int *) ;
 int FUNC_4 (struct net_device*,int ,int *) ;

void FUNC_5(struct net_device *VAR_14)
{
 struct r8192_priv *VAR_15 = FUNC_1(VAR_14);
 u8 VAR_16;

 FUNC_3(VAR_14, VAR_12,
         &VAR_15->MCSTxPowerLevelOriginalOffset[0]);
 FUNC_3(VAR_14, VAR_13,
         &VAR_15->MCSTxPowerLevelOriginalOffset[1]);
 FUNC_3(VAR_14, VAR_8,
         &VAR_15->MCSTxPowerLevelOriginalOffset[2]);
 FUNC_3(VAR_14, VAR_9,
         &VAR_15->MCSTxPowerLevelOriginalOffset[3]);
 FUNC_3(VAR_14, VAR_10,
         &VAR_15->MCSTxPowerLevelOriginalOffset[4]);
 FUNC_3(VAR_14, VAR_11,
         &VAR_15->MCSTxPowerLevelOriginalOffset[5]);


 FUNC_2(VAR_14, VAR_4, &VAR_15->DefaultInitialGain[0]);
 FUNC_2(VAR_14, VAR_5, &VAR_15->DefaultInitialGain[1]);
 FUNC_2(VAR_14, VAR_6, &VAR_15->DefaultInitialGain[2]);
 FUNC_2(VAR_14, VAR_7, &VAR_15->DefaultInitialGain[3]);
 FUNC_0(VAR_0,
   "Default initial gain (c50=0x%x, c58=0x%x, c60=0x%x, c68=0x%x)\n",
   VAR_15->DefaultInitialGain[0], VAR_15->DefaultInitialGain[1],
   VAR_15->DefaultInitialGain[2], VAR_15->DefaultInitialGain[3]);


 FUNC_2(VAR_14, VAR_3, &VAR_15->framesync);
 FUNC_2(VAR_14, VAR_2, &VAR_16);
 VAR_15->framesyncC34 = VAR_16;
 FUNC_0(VAR_0, "Default framesync (0x%x) = 0x%x\n",
  VAR_3, VAR_15->framesync);


 FUNC_4(VAR_14, VAR_1, &VAR_15->SifsTime);
}
