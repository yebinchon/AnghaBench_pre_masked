
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wmi_create_pstream_cmd {int user_pri; int traffic_class; scalar_t__ traffic_direc; scalar_t__ traffic_type; scalar_t__ voice_psc_cap; int tsid; int nominal_phy; int min_phy_rate; } ;
struct wmi {int fat_pipe_exist; int* stream_exist_for_ac; int parent_dev; int lock; } ;
struct sk_buff {scalar_t__ data; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct wmi*,int,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wmi_create_pstream_cmd*,struct wmi_create_pstream_cmd*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int* VAR_15 ;

int FUNC_8(struct wmi *VAR_16, u8 VAR_17,
      struct wmi_create_pstream_cmd *VAR_18)
{
 struct sk_buff *VAR_19;
 struct wmi_create_pstream_cmd *VAR_20;
 u8 VAR_21 = 0;
 s32 VAR_22 = 0;
 s32 VAR_23 = 0;
 int VAR_24;

 if (!((VAR_18->user_pri <= 0x7) &&
       (VAR_15[VAR_18->user_pri & 0x7] == VAR_18->traffic_class) &&
       (VAR_18->traffic_direc == VAR_11 ||
        VAR_18->traffic_direc == VAR_3 ||
        VAR_18->traffic_direc == VAR_1) &&
       (VAR_18->traffic_type == VAR_9 ||
        VAR_18->traffic_type == VAR_10) &&
       (VAR_18->voice_psc_cap == VAR_2 ||
        VAR_18->voice_psc_cap == VAR_6 ||
        VAR_18->voice_psc_cap == VAR_5) &&
       (VAR_18->tsid == VAR_13 ||
        VAR_18->tsid <= VAR_14))) {
  return -VAR_4;
 }







 VAR_22 = ((FUNC_4(VAR_18->min_phy_rate) / 1000) / 1000);


 if (VAR_18->nominal_phy >= VAR_22) {

  VAR_23 = (VAR_18->nominal_phy * 1000) / 500;
  FUNC_0(VAR_0,
      "TSRS IE enabled::MinPhy %x->NominalPhy ===> %x\n",
      VAR_22, VAR_23);

  VAR_18->nominal_phy = VAR_23;
 } else {
  VAR_18->nominal_phy = 0;
 }

 VAR_19 = FUNC_3(sizeof(*VAR_20));
 if (!VAR_19)
  return -VAR_7;

 FUNC_0(VAR_0,
     "sending create_pstream_cmd: ac=%d  tsid:%d\n",
     VAR_18->traffic_class, VAR_18->tsid);

 VAR_20 = (struct wmi_create_pstream_cmd *) VAR_19->data;
 FUNC_5(VAR_20, VAR_18, sizeof(*VAR_20));


 if ((u32) VAR_18->tsid == (u32) VAR_13) {
  FUNC_6(&VAR_16->lock);
  VAR_21 = (VAR_16->fat_pipe_exist &
     (1 << VAR_18->traffic_class));
  VAR_16->fat_pipe_exist |= (1 << VAR_18->traffic_class);
  FUNC_7(&VAR_16->lock);
 } else {

  FUNC_6(&VAR_16->lock);
  VAR_21 = (VAR_16->fat_pipe_exist &
     (1 << VAR_18->traffic_class));
  VAR_16->stream_exist_for_ac[VAR_18->traffic_class] |=
      (1 << VAR_18->tsid);




  VAR_16->fat_pipe_exist |= (1 << VAR_18->traffic_class);
  FUNC_7(&VAR_16->lock);
 }






 if (!VAR_21)
  FUNC_1(VAR_16->parent_dev,
         VAR_18->traffic_class, 1);

 VAR_24 = FUNC_2(VAR_16, VAR_17, VAR_19, VAR_12,
      VAR_8);
 return VAR_24;
}
