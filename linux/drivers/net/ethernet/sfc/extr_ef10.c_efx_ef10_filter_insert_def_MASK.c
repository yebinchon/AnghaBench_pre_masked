
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct efx_nic {int net_dev; int rss_context; struct efx_ef10_nic_data* nic_data; } ;
struct efx_filter_spec {int dummy; } ;
struct efx_ef10_nic_data {int datapath_caps; int workaround_26807; } ;
struct efx_ef10_filter_vlan {int* default_filters; int vid; } ;
typedef enum efx_filter_flags { ____Placeholder_efx_filter_flags } efx_filter_flags ;
typedef enum efx_encap_type { ____Placeholder_efx_encap_type } efx_encap_type ;
typedef enum efx_ef10_default_filters { ____Placeholder_efx_ef10_default_filters } efx_ef10_default_filters ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct efx_nic*,struct efx_filter_spec*,int) ;
 int FUNC_6 (struct efx_nic*,int ,int) ;
 int FUNC_7 (struct efx_filter_spec*,int ,int,int ) ;
 int FUNC_8 (struct efx_filter_spec*,int) ;
 int FUNC_9 (struct efx_filter_spec*,int ,int *) ;
 int FUNC_10 (struct efx_filter_spec*) ;
 int FUNC_11 (struct efx_filter_spec*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct efx_nic*,int ,int ,int,int ,char*,char const*,char const*,char const*,int) ;
 int FUNC_15 (struct efx_nic*,int ,int ,char*,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_16(struct efx_nic *VAR_12,
          struct efx_ef10_filter_vlan *VAR_13,
          enum efx_encap_type VAR_14,
          bool VAR_15, bool VAR_16)
{
 struct efx_ef10_nic_data *VAR_17 = VAR_12->nic_data;
 enum efx_filter_flags VAR_18;
 struct efx_filter_spec VAR_19;
 u8 VAR_20[VAR_8];
 int VAR_21;
 u16 *VAR_22;

 VAR_18 = FUNC_12(&VAR_12->rss_context) ? VAR_3 : 0;

 FUNC_7(&VAR_19, VAR_4, VAR_18, 0);

 if (VAR_15)
  FUNC_10(&VAR_19);
 else
  FUNC_11(&VAR_19);

 if (VAR_14) {
  if (VAR_17->datapath_caps &
      (1 << VAR_9))
   FUNC_8(&VAR_19, VAR_14);
  else



   return 0;
 }

 if (VAR_13->vid != VAR_5)
  FUNC_9(&VAR_19, VAR_13->vid, ((void*)0));

 VAR_21 = FUNC_5(VAR_12, &VAR_19, 1);
 if (VAR_21 < 0) {
  const char *VAR_23 = VAR_15 ? "Multicast" : "Unicast";
  const char *VAR_24 = "";
  const char *VAR_25 = "";

  if ((VAR_14 & VAR_2) ==
      128)
   VAR_24 = "VXLAN ";
  else if ((VAR_14 & VAR_2) ==
    129)
   VAR_24 = "NVGRE ";
  else if ((VAR_14 & VAR_2) ==
    131)
   VAR_24 = "GENEVE ";
  if (VAR_14 & 132)
   VAR_25 = "IPv6 ";
  else if (VAR_14)
   VAR_25 = "IPv4 ";





  FUNC_14(VAR_12, VAR_10, VAR_12->net_dev,
          VAR_21 == -VAR_7 && (VAR_14 || !VAR_15), VAR_11,
          "%s%s%s mismatch filter insert failed rc=%d\n",
          VAR_24, VAR_25, VAR_23, VAR_21);
 } else if (VAR_15) {

  static enum efx_ef10_default_filters VAR_26[] = {
   [130] = 142,
   [128] = 136,
   [129] = 141,
   [131] = 146,
   [128 | 132] =
    134,
   [129 | 132] =
    139,
   [131 | 132] =
    144,
  };


  FUNC_1(VAR_0 != 0);
  if (VAR_14 >= FUNC_0(VAR_26) || VAR_26[VAR_14] == 0) {
   FUNC_3(1);
   return -VAR_6;
  }

  VAR_22 = &VAR_13->default_filters[VAR_26[VAR_14]];

  FUNC_2(*VAR_22 != VAR_1);
  *VAR_22 = FUNC_4(VAR_21);
  if (!VAR_17->workaround_26807 && !VAR_14) {

   FUNC_7(&VAR_19, VAR_4,
        VAR_18, 0);
   FUNC_13(VAR_20);
   FUNC_9(&VAR_19, VAR_13->vid, VAR_20);
   VAR_21 = FUNC_5(VAR_12, &VAR_19, 1);
   if (VAR_21 < 0) {
    FUNC_15(VAR_12, VAR_10, VAR_12->net_dev,
        "Broadcast filter insert failed rc=%d\n",
        VAR_21);
    if (VAR_16) {

     FUNC_6(
       VAR_12, VAR_4,
       *VAR_22);
     *VAR_22 = VAR_1;
     return VAR_21;
    }
   } else {
    FUNC_2(
     VAR_13->default_filters[VAR_0] !=
     VAR_1);
    VAR_13->default_filters[VAR_0] =
     FUNC_4(VAR_21);
   }
  }
  VAR_21 = 0;
 } else {

  static enum efx_ef10_default_filters VAR_27[] = {
   [130] = 137,
   [128] = 135,
   [129] = 140,
   [131] = 145,
   [128 | 132] =
    133,
   [129 | 132] =
    138,
   [131 | 132] =
    143,
  };


  FUNC_1(VAR_0 != 0);
  if (VAR_14 >= FUNC_0(VAR_27) || VAR_27[VAR_14] == 0) {
   FUNC_3(1);
   return -VAR_6;
  }

  VAR_22 = &VAR_13->default_filters[VAR_27[VAR_14]];
  FUNC_2(*VAR_22 != VAR_1);
  *VAR_22 = VAR_21;
  VAR_21 = 0;
 }
 return VAR_21;
}
