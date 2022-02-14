
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcmf_pub {TYPE_1__* settings; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;
typedef int roamtrigger ;
typedef int roam_delta ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ roamoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,int ,void*,int) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,char*,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static s32 FUNC_5(struct brcmf_if *VAR_8)
{
 struct brcmf_pub *VAR_9 = VAR_8->drvr;
 s32 VAR_10;
 u32 VAR_11;
 __le32 VAR_12[2];
 __le32 VAR_13[2];


 if (VAR_8->drvr->settings->roamoff)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_3;
 VAR_10 = FUNC_3(VAR_8, "bcn_timeout", VAR_11);
 if (VAR_10) {
  FUNC_0(VAR_9, "bcn_timeout error (%d)\n", VAR_10);
  goto roam_setup_done;
 }




 FUNC_1(VAR_5, "Internal Roaming = %s\n",
    VAR_8->drvr->settings->roamoff ? "Off" : "On");
 VAR_10 = FUNC_3(VAR_8, "roam_off",
          VAR_8->drvr->settings->roamoff);
 if (VAR_10) {
  FUNC_0(VAR_9, "roam_off error (%d)\n", VAR_10);
  goto roam_setup_done;
 }

 VAR_12[0] = FUNC_4(VAR_7);
 VAR_12[1] = FUNC_4(VAR_4);
 VAR_10 = FUNC_2(VAR_8, VAR_1,
         (void *)VAR_12, sizeof(VAR_12));
 if (VAR_10) {
  FUNC_0(VAR_9, "WLC_SET_ROAM_TRIGGER error (%d)\n", VAR_10);
  goto roam_setup_done;
 }

 VAR_13[0] = FUNC_4(VAR_6);
 VAR_13[1] = FUNC_4(VAR_4);
 VAR_10 = FUNC_2(VAR_8, VAR_0,
         (void *)VAR_13, sizeof(VAR_13));
 if (VAR_10) {
  FUNC_0(VAR_9, "WLC_SET_ROAM_DELTA error (%d)\n", VAR_10);
  goto roam_setup_done;
 }

roam_setup_done:
 return VAR_10;
}
