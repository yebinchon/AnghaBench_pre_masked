
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int variant; int major; int minor; int role; int bottom; int top; } ;
typedef TYPE_1__ u8 ;
typedef int u16 ;
struct wlandevice {TYPE_2__* netdev; int nsdcaps; struct hfa384x* priv; } ;
struct hfa384x_compident {int dummy; } ;
struct hfa384x_caplevel {int dummy; } ;
struct hfa384x {int mm_mods; int dbmadjust; TYPE_1__ ident_sta_fw; TYPE_1__ cap_act_sta_mfi; TYPE_1__ cap_act_sta_cfi; TYPE_1__ cap_act_pri_cfi; TYPE_1__ cap_sup_sta; TYPE_1__ cap_sup_pri; TYPE_1__ cap_sup_cfi; TYPE_1__ cap_sup_mfi; TYPE_1__ ident_nic; TYPE_1__ ident_pri_fw; } ;
struct TYPE_6__ {TYPE_1__* dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct hfa384x*,int ,TYPE_1__*,int) ;
 int FUNC_3 (struct hfa384x*,int ,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*,int,...) ;

__attribute__((used)) static int FUNC_7(struct wlandevice *VAR_19)
{
 int VAR_20 = 0;
 struct hfa384x *VAR_21 = VAR_19->priv;
 u16 VAR_22;
 u8 VAR_23[VAR_7];




 VAR_20 = FUNC_2(VAR_21, VAR_5,
     &VAR_21->ident_nic,
     sizeof(struct hfa384x_compident));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve NICIDENTITY\n");
  goto failed;
 }


 FUNC_4(&VAR_21->ident_nic.id);
 FUNC_4(&VAR_21->ident_nic.variant);
 FUNC_4(&VAR_21->ident_nic.major);
 FUNC_4(&VAR_21->ident_nic.minor);

 FUNC_6(VAR_19->netdev, "ident: nic h/w: id=0x%02x %d.%d.%d\n",
      VAR_21->ident_nic.id, VAR_21->ident_nic.major,
      VAR_21->ident_nic.minor, VAR_21->ident_nic.variant);


 VAR_20 = FUNC_2(VAR_21, VAR_8,
     &VAR_21->ident_pri_fw,
     sizeof(struct hfa384x_compident));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve PRIIDENTITY\n");
  goto failed;
 }


 FUNC_4(&VAR_21->ident_pri_fw.id);
 FUNC_4(&VAR_21->ident_pri_fw.variant);
 FUNC_4(&VAR_21->ident_pri_fw.major);
 FUNC_4(&VAR_21->ident_pri_fw.minor);

 FUNC_6(VAR_19->netdev, "ident: pri f/w: id=0x%02x %d.%d.%d\n",
      VAR_21->ident_pri_fw.id, VAR_21->ident_pri_fw.major,
      VAR_21->ident_pri_fw.minor, VAR_21->ident_pri_fw.variant);


 VAR_20 = FUNC_2(VAR_21, VAR_12,
     &VAR_21->ident_sta_fw,
     sizeof(struct hfa384x_compident));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve STAIDENTITY\n");
  goto failed;
 }

 if (VAR_21->ident_nic.id < 0x8000) {
  FUNC_5(VAR_19->netdev,
      "FATAL: Card is not an Intersil Prism2/2.5/3\n");
  VAR_20 = -1;
  goto failed;
 }


 FUNC_4(&VAR_21->ident_sta_fw.id);
 FUNC_4(&VAR_21->ident_sta_fw.variant);
 FUNC_4(&VAR_21->ident_sta_fw.major);
 FUNC_4(&VAR_21->ident_sta_fw.minor);


 VAR_21->mm_mods = VAR_21->ident_sta_fw.variant & FUNC_0(15, 14);
 VAR_21->ident_sta_fw.variant &= ~((u16)FUNC_0(15, 14));

 if (VAR_21->ident_sta_fw.id == 0x1f) {
  FUNC_6(VAR_19->netdev,
       "ident: sta f/w: id=0x%02x %d.%d.%d\n",
       VAR_21->ident_sta_fw.id, VAR_21->ident_sta_fw.major,
       VAR_21->ident_sta_fw.minor, VAR_21->ident_sta_fw.variant);
 } else {
  FUNC_6(VAR_19->netdev,
       "ident:  ap f/w: id=0x%02x %d.%d.%d\n",
       VAR_21->ident_sta_fw.id, VAR_21->ident_sta_fw.major,
       VAR_21->ident_sta_fw.minor, VAR_21->ident_sta_fw.variant);
  FUNC_5(VAR_19->netdev, "Unsupported Tertiary AP firmware loaded!\n");
  goto failed;
 }


 VAR_20 = FUNC_2(VAR_21, VAR_4,
     &VAR_21->cap_sup_mfi,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve MFISUPRANGE\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_sup_mfi.role);
 FUNC_4(&VAR_21->cap_sup_mfi.id);
 FUNC_4(&VAR_21->cap_sup_mfi.variant);
 FUNC_4(&VAR_21->cap_sup_mfi.bottom);
 FUNC_4(&VAR_21->cap_sup_mfi.top);

 FUNC_6(VAR_19->netdev,
      "MFI:SUP:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_sup_mfi.role, VAR_21->cap_sup_mfi.id,
      VAR_21->cap_sup_mfi.variant, VAR_21->cap_sup_mfi.bottom,
      VAR_21->cap_sup_mfi.top);


 VAR_20 = FUNC_2(VAR_21, VAR_1,
     &VAR_21->cap_sup_cfi,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve CFISUPRANGE\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_sup_cfi.role);
 FUNC_4(&VAR_21->cap_sup_cfi.id);
 FUNC_4(&VAR_21->cap_sup_cfi.variant);
 FUNC_4(&VAR_21->cap_sup_cfi.bottom);
 FUNC_4(&VAR_21->cap_sup_cfi.top);

 FUNC_6(VAR_19->netdev,
      "CFI:SUP:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_sup_cfi.role, VAR_21->cap_sup_cfi.id,
      VAR_21->cap_sup_cfi.variant, VAR_21->cap_sup_cfi.bottom,
      VAR_21->cap_sup_cfi.top);


 VAR_20 = FUNC_2(VAR_21, VAR_9,
     &VAR_21->cap_sup_pri,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve PRISUPRANGE\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_sup_pri.role);
 FUNC_4(&VAR_21->cap_sup_pri.id);
 FUNC_4(&VAR_21->cap_sup_pri.variant);
 FUNC_4(&VAR_21->cap_sup_pri.bottom);
 FUNC_4(&VAR_21->cap_sup_pri.top);

 FUNC_6(VAR_19->netdev,
      "PRI:SUP:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_sup_pri.role, VAR_21->cap_sup_pri.id,
      VAR_21->cap_sup_pri.variant, VAR_21->cap_sup_pri.bottom,
      VAR_21->cap_sup_pri.top);


 VAR_20 = FUNC_2(VAR_21, VAR_13,
     &VAR_21->cap_sup_sta,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve STASUPRANGE\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_sup_sta.role);
 FUNC_4(&VAR_21->cap_sup_sta.id);
 FUNC_4(&VAR_21->cap_sup_sta.variant);
 FUNC_4(&VAR_21->cap_sup_sta.bottom);
 FUNC_4(&VAR_21->cap_sup_sta.top);

 if (VAR_21->cap_sup_sta.id == 0x04) {
  FUNC_6(VAR_19->netdev,
       "STA:SUP:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
       VAR_21->cap_sup_sta.role, VAR_21->cap_sup_sta.id,
       VAR_21->cap_sup_sta.variant, VAR_21->cap_sup_sta.bottom,
       VAR_21->cap_sup_sta.top);
 } else {
  FUNC_6(VAR_19->netdev,
       "AP:SUP:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
       VAR_21->cap_sup_sta.role, VAR_21->cap_sup_sta.id,
       VAR_21->cap_sup_sta.variant, VAR_21->cap_sup_sta.bottom,
       VAR_21->cap_sup_sta.top);
 }


 VAR_20 = FUNC_2(VAR_21, VAR_11,
     &VAR_21->cap_act_pri_cfi,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve PRI_CFIACTRANGES\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_act_pri_cfi.role);
 FUNC_4(&VAR_21->cap_act_pri_cfi.id);
 FUNC_4(&VAR_21->cap_act_pri_cfi.variant);
 FUNC_4(&VAR_21->cap_act_pri_cfi.bottom);
 FUNC_4(&VAR_21->cap_act_pri_cfi.top);

 FUNC_6(VAR_19->netdev,
      "PRI-CFI:ACT:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_act_pri_cfi.role, VAR_21->cap_act_pri_cfi.id,
      VAR_21->cap_act_pri_cfi.variant, VAR_21->cap_act_pri_cfi.bottom,
      VAR_21->cap_act_pri_cfi.top);


 VAR_20 = FUNC_2(VAR_21, VAR_14,
     &VAR_21->cap_act_sta_cfi,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve STA_CFIACTRANGES\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_act_sta_cfi.role);
 FUNC_4(&VAR_21->cap_act_sta_cfi.id);
 FUNC_4(&VAR_21->cap_act_sta_cfi.variant);
 FUNC_4(&VAR_21->cap_act_sta_cfi.bottom);
 FUNC_4(&VAR_21->cap_act_sta_cfi.top);

 FUNC_6(VAR_19->netdev,
      "STA-CFI:ACT:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_act_sta_cfi.role, VAR_21->cap_act_sta_cfi.id,
      VAR_21->cap_act_sta_cfi.variant, VAR_21->cap_act_sta_cfi.bottom,
      VAR_21->cap_act_sta_cfi.top);


 VAR_20 = FUNC_2(VAR_21, VAR_15,
     &VAR_21->cap_act_sta_mfi,
     sizeof(struct hfa384x_caplevel));
 if (VAR_20) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve STA_MFIACTRANGES\n");
  goto failed;
 }




 FUNC_4(&VAR_21->cap_act_sta_mfi.role);
 FUNC_4(&VAR_21->cap_act_sta_mfi.id);
 FUNC_4(&VAR_21->cap_act_sta_mfi.variant);
 FUNC_4(&VAR_21->cap_act_sta_mfi.bottom);
 FUNC_4(&VAR_21->cap_act_sta_mfi.top);

 FUNC_6(VAR_19->netdev,
      "STA-MFI:ACT:role=0x%02x:id=0x%02x:var=0x%02x:b/t=%d/%d\n",
      VAR_21->cap_act_sta_mfi.role, VAR_21->cap_act_sta_mfi.id,
      VAR_21->cap_act_sta_mfi.variant, VAR_21->cap_act_sta_mfi.bottom,
      VAR_21->cap_act_sta_mfi.top);


 VAR_20 = FUNC_2(VAR_21, VAR_6,
     VAR_23, VAR_7);
 if (!VAR_20) {
  FUNC_6(VAR_19->netdev, "Prism2 card SN: %*pE\n",
       VAR_7, VAR_23);
 } else {
  FUNC_5(VAR_19->netdev, "Failed to retrieve Prism2 Card SN\n");
  goto failed;
 }


 VAR_20 = FUNC_2(VAR_21, VAR_3,
     VAR_19->netdev->dev_addr, VAR_0);
 if (VAR_20 != 0) {
  FUNC_5(VAR_19->netdev, "Failed to retrieve mac address\n");
  goto failed;
 }


 VAR_19->nsdcaps |= VAR_18;


 FUNC_3(VAR_21, VAR_10, &VAR_22);
 if (VAR_22)
  VAR_19->nsdcaps |= VAR_16;


 FUNC_3(VAR_21, VAR_2, &VAR_22);
 VAR_21->dbmadjust = VAR_22;


 if (FUNC_1(VAR_21->ident_sta_fw.major,
         VAR_21->ident_sta_fw.minor,
         VAR_21->ident_sta_fw.variant) <
     FUNC_1(1, 5, 5)) {
  VAR_19->nsdcaps |= VAR_17;
 }



 goto done;
failed:
 FUNC_5(VAR_19->netdev, "Failed, result=%d\n", VAR_20);
done:
 return VAR_20;
}
