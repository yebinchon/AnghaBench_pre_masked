
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct registry_priv {int beamform_cap; int stbc_cap; int ldpc_cap; int short_gi; scalar_t__ wifi_spec; } ;
struct ht_priv {int bss_coexist; int sgi_40m; int sgi_20m; scalar_t__ beamform_cap; scalar_t__ stbc_cap; scalar_t__ ldpc_cap; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct adapter {struct registry_priv registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int *) ;

void FUNC_5(struct adapter *VAR_16)
{
 struct mlme_priv *VAR_17 = &VAR_16->mlmepriv;
 struct ht_priv *VAR_18 = &VAR_17->htpriv;
 struct registry_priv *VAR_19 = &VAR_16->registrypriv;
 bool VAR_20 = 0, VAR_21 = 0;
 bool VAR_22 = 0, VAR_23 = 0;

 if (VAR_19->wifi_spec)
  VAR_18->bss_coexist = 1;
 else
  VAR_18->bss_coexist = 0;

 VAR_18->sgi_40m = FUNC_3(VAR_19->short_gi, VAR_3) ? 1 : 0;
 VAR_18->sgi_20m = FUNC_3(VAR_19->short_gi, VAR_2) ? 1 : 0;


 FUNC_4(VAR_16, VAR_8, (u8 *)&VAR_20);
 FUNC_0(VAR_18->ldpc_cap);
 if (VAR_20) {
  if (FUNC_3(VAR_19->ldpc_cap, VAR_4))
   FUNC_2(VAR_18->ldpc_cap, VAR_12);
 }
 FUNC_4(VAR_16, VAR_10, (u8 *)&VAR_20);
 if (VAR_20) {
  if (FUNC_3(VAR_19->ldpc_cap, VAR_5))
   FUNC_2(VAR_18->ldpc_cap, VAR_13);
 }
 if (VAR_18->ldpc_cap)
  FUNC_1("[HT] Support LDPC = 0x%02X\n", VAR_18->ldpc_cap);


 FUNC_4(VAR_16, VAR_11, (u8 *)&VAR_21);
 FUNC_0(VAR_18->stbc_cap);
 if (VAR_21) {
  if (FUNC_3(VAR_19->stbc_cap, VAR_5))
   FUNC_2(VAR_18->stbc_cap, VAR_15);
 }
 FUNC_4(VAR_16, VAR_9, (u8 *)&VAR_21);
 if (VAR_21) {
  if (FUNC_3(VAR_19->stbc_cap, VAR_4))
   FUNC_2(VAR_18->stbc_cap, VAR_14);
 }
 if (VAR_18->stbc_cap)
  FUNC_1("[HT] Support STBC = 0x%02X\n", VAR_18->stbc_cap);


 FUNC_4(VAR_16, VAR_7, (u8 *)&VAR_22);
 FUNC_4(VAR_16, VAR_6, (u8 *)&VAR_23);
 FUNC_0(VAR_18->beamform_cap);
 if (FUNC_3(VAR_19->beamform_cap, VAR_4) && VAR_22) {
  FUNC_2(VAR_18->beamform_cap, VAR_1);
  FUNC_1("[HT] Support Beamformer\n");
 }
 if (FUNC_3(VAR_19->beamform_cap, VAR_5) && VAR_23) {
  FUNC_2(VAR_18->beamform_cap, VAR_0);
  FUNC_1("[HT] Support Beamformee\n");
 }
}
