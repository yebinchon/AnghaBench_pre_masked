
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_tlv {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int vif; } ;
struct brcmf_cfg80211_info {scalar_t__ extra_buf; struct brcmf_pub* pub; } ;
struct brcmf_bss_info_le {int ie_length; int ie_offset; } ;
typedef scalar_t__ s32 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,char*,int *) ;
 scalar_t__ FUNC_4 (struct brcmf_cfg80211_info*,struct brcmf_bss_info_le*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct brcmf_tlv* FUNC_6 (int *,size_t,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static s32 FUNC_10(struct brcmf_cfg80211_info *VAR_4,
     struct brcmf_if *VAR_5)
{
 struct brcmf_pub *VAR_6 = VAR_4->pub;
 struct brcmf_bss_info_le *VAR_7;
 const struct brcmf_tlv *VAR_8;
 size_t VAR_9;
 u8 *VAR_10;
 s32 VAR_11 = 0;

 FUNC_1(VAR_1, "Enter\n");
 if (FUNC_5(VAR_5->vif))
  return VAR_11;

 *(__le32 *)VAR_4->extra_buf = FUNC_7(VAR_3);
 VAR_11 = FUNC_2(VAR_5, VAR_0,
         VAR_4->extra_buf, VAR_3);
 if (VAR_11) {
  FUNC_0(VAR_6, "Could not get bss info %d\n", VAR_11);
  goto update_bss_info_out;
 }

 VAR_7 = (struct brcmf_bss_info_le *)(VAR_4->extra_buf + 4);
 VAR_11 = FUNC_4(VAR_4, VAR_7);
 if (VAR_11)
  goto update_bss_info_out;

 VAR_10 = ((u8 *)VAR_7) + FUNC_8(VAR_7->ie_offset);
 VAR_9 = FUNC_9(VAR_7->ie_length);

 VAR_8 = FUNC_6(VAR_10, VAR_9, VAR_2);
 if (!VAR_8) {





  u32 VAR_12;
  VAR_11 = FUNC_3(VAR_5, "dtim_assoc", &VAR_12);
  if (VAR_11) {
   FUNC_0(VAR_6, "wl dtim_assoc failed (%d)\n", VAR_11);
   goto update_bss_info_out;
  }
 }

update_bss_info_out:
 FUNC_1(VAR_1, "Exit");
 return VAR_11;
}
