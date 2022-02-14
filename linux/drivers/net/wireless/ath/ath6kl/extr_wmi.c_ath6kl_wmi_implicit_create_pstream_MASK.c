
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_data_hdr {int info2; } ;
struct wmi_create_pstream_cmd {int traffic_class; int user_pri; int tsid; int inactivity_int; } ;
struct wmi {scalar_t__ traffic_class; int fat_pipe_exist; int lock; } ;
struct sk_buff {int* data; scalar_t__ protocol; } ;
struct ethhdr {int dummy; } ;
struct ath6kl_llc_snap_hdr {scalar_t__ eth_type; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct wmi*,int,struct wmi_create_pstream_cmd*) ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wmi_create_pstream_cmd*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int* VAR_11 ;
 int FUNC_10 (struct wmi_data_hdr*,int) ;

int FUNC_11(struct wmi *VAR_12, u8 VAR_13,
           struct sk_buff *VAR_14,
           u32 VAR_15, bool VAR_16,
           u8 *VAR_17)
{
 struct wmi_data_hdr *VAR_18;
 struct ath6kl_llc_snap_hdr *VAR_19;
 struct wmi_create_pstream_cmd VAR_20;
 u32 VAR_21, VAR_22;
 u16 VAR_23 = VAR_2;
 u8 VAR_24, VAR_25;
 u8 VAR_26 = VAR_9;
 u8 *VAR_27;

 if (FUNC_0(VAR_14 == ((void*)0)))
  return -VAR_0;

 VAR_27 = VAR_14->data;
 VAR_18 = (struct wmi_data_hdr *) VAR_27;

 VAR_21 = ((FUNC_6(VAR_18->info2) >> VAR_4) &
       VAR_3) ? VAR_7 : 0;

 if (!VAR_16) {

  VAR_25 = 0;
 } else {
  VAR_22 = sizeof(struct ethhdr);

  VAR_19 = (struct ath6kl_llc_snap_hdr *)(VAR_27 +
        sizeof(struct
        wmi_data_hdr) +
        VAR_21 + VAR_22);

  if (VAR_19->eth_type == FUNC_5(VAR_23)) {




   VAR_25 =
      FUNC_2(((u8 *) VAR_19) +
     sizeof(struct ath6kl_llc_snap_hdr),
     VAR_15);
  } else {
   VAR_25 = VAR_15 & 0x7;
  }





  if (VAR_14->protocol == FUNC_3(VAR_1))
   VAR_25 = VAR_8;
 }







 if ((VAR_12->traffic_class == VAR_10) &&
     ((VAR_25 == 5) || (VAR_25 == 4)))
  VAR_25 = 1;


 VAR_26 = VAR_11[VAR_25 & 0x7];

 FUNC_10(VAR_18, VAR_25);

 FUNC_8(&VAR_12->lock);
 VAR_24 = VAR_12->fat_pipe_exist;
 FUNC_9(&VAR_12->lock);

 if (!(VAR_24 & (1 << VAR_26))) {
  FUNC_7(&VAR_20, 0, sizeof(VAR_20));
  VAR_20.traffic_class = VAR_26;
  VAR_20.user_pri = VAR_25;
  VAR_20.inactivity_int =
   FUNC_4(VAR_6);

  VAR_20.tsid = VAR_5;
  FUNC_1(VAR_12, VAR_13, &VAR_20);
 }

 *VAR_17 = VAR_26;

 return 0;
}
