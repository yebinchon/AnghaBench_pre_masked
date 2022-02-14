
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int frag_threshold; int rts_threshold; int retry_long; } ;
struct mwifiex_uap_bss_param {int retry_limit; int frag_threshold; int rts_threshold; } ;
struct mwifiex_private {int bss_role; int media_connected; int bss_started; } ;
struct mwifiex_adapter {int dummy; } ;


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
 int FUNC_0 (struct mwifiex_uap_bss_param*) ;
 struct mwifiex_uap_bss_param* FUNC_1 (int,int ) ;
 struct mwifiex_adapter* FUNC_2 (struct wiphy*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 struct mwifiex_private* FUNC_4 (struct mwifiex_adapter*,int ) ;
 int FUNC_5 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_uap_bss_param*,int) ;
 int FUNC_6 (struct mwifiex_private*,int ) ;
 int FUNC_7 (struct mwifiex_private*,int ) ;
 int FUNC_8 (struct mwifiex_uap_bss_param*) ;

__attribute__((used)) static int
FUNC_9(struct wiphy *VAR_11, u32 VAR_12)
{
 struct mwifiex_adapter *VAR_13 = FUNC_2(VAR_11);
 struct mwifiex_private *VAR_14;
 struct mwifiex_uap_bss_param *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_4(VAR_13, VAR_6);

 switch (VAR_14->bss_role) {
 case 128:
  if (VAR_14->bss_started) {
   FUNC_3(VAR_13, VAR_2,
        "cannot change wiphy params when bss started");
   return -VAR_0;
  }

  VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_3);
  if (!VAR_15)
   return -VAR_1;

  FUNC_8(VAR_15);

  if (VAR_12 & VAR_10)
   VAR_15->rts_threshold = VAR_11->rts_threshold;
  if (VAR_12 & VAR_8)
   VAR_15->frag_threshold = VAR_11->frag_threshold;
  if (VAR_12 & VAR_9)
   VAR_15->retry_limit = VAR_11->retry_long;

  VAR_16 = FUNC_5(VAR_14, VAR_5,
           VAR_4,
           VAR_7, VAR_15,
           0);

  FUNC_0(VAR_15);
  if (VAR_16) {
   FUNC_3(VAR_13, VAR_2,
        "Failed to set wiphy phy params\n");
   return VAR_16;
  }
  break;

 case 129:
  if (VAR_14->media_connected) {
   FUNC_3(VAR_13, VAR_2,
        "cannot change wiphy params when connected");
   return -VAR_0;
  }
  if (VAR_12 & VAR_10) {
   VAR_16 = FUNC_7(VAR_14,
           VAR_11->rts_threshold);
   if (VAR_16)
    return VAR_16;
  }
  if (VAR_12 & VAR_8) {
   VAR_16 = FUNC_6(VAR_14,
            VAR_11->frag_threshold);
   if (VAR_16)
    return VAR_16;
  }
  break;
 }

 return 0;
}
