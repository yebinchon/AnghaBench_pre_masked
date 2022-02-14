
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int vif; struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,char*,int*) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,int ,int) ;
 int FUNC_4 (int ) ;
 struct brcmf_if* FUNC_5 (struct net_device*) ;

__attribute__((used)) static s32
FUNC_6(struct wiphy *VAR_5, struct net_device *VAR_6,
      u8 VAR_7, bool VAR_8, bool VAR_9)
{
 struct brcmf_if *VAR_10 = FUNC_5(VAR_6);
 struct brcmf_pub *VAR_11 = VAR_10->drvr;
 u32 VAR_12;
 u32 VAR_13;
 s32 VAR_14 = 0;

 FUNC_1(VAR_3, "Enter\n");
 FUNC_1(VAR_1, "key index (%d)\n", VAR_7);
 if (!FUNC_4(VAR_10->vif))
  return -VAR_2;

 VAR_14 = FUNC_2(VAR_10, "wsec", &VAR_13);
 if (VAR_14) {
  FUNC_0(VAR_11, "WLC_GET_WSEC error (%d)\n", VAR_14);
  goto done;
 }

 if (VAR_13 & VAR_4) {

  VAR_12 = VAR_7;
  VAR_14 = FUNC_3(VAR_10,
         VAR_0, VAR_12);
  if (VAR_14)
   FUNC_0(VAR_11, "error (%d)\n", VAR_14);
 }
done:
 FUNC_1(VAR_3, "Exit\n");
 return VAR_14;
}
