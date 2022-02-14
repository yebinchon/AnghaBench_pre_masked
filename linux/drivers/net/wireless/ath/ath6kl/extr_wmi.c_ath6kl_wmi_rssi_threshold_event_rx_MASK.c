
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_rssi_threshold_params_cmd {int poll_time; int weight; void* thresh_below1_val; void* thresh_above1_val; } ;
struct wmi_rssi_threshold_event {int rssi; scalar_t__ range; } ;
struct wmi {struct sq_threshold_params* sq_threshld; } ;
struct sq_threshold_params {scalar_t__* upper_threshold; scalar_t__* lower_threshold; int polling_interval; int weight; int upper_threshold_valid_count; int lower_threshold_valid_count; } ;
typedef scalar_t__ s16 ;
typedef enum wmi_rssi_threshold_val { ____Placeholder_wmi_rssi_threshold_val } wmi_rssi_threshold_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
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
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,struct sq_threshold_params*,int ) ;
 int FUNC_5 (scalar_t__,struct sq_threshold_params*,int ) ;
 int FUNC_6 (struct wmi*,struct wmi_rssi_threshold_params_cmd*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct wmi *VAR_16, u8 *VAR_17,
           int VAR_18)
{
 struct wmi_rssi_threshold_event *VAR_19;
 struct wmi_rssi_threshold_params_cmd VAR_20;
 struct sq_threshold_params *VAR_21;
 enum wmi_rssi_threshold_val VAR_22;
 u8 VAR_23, VAR_24;
 s16 VAR_25;
 int VAR_26;

 if (VAR_18 < sizeof(struct wmi_rssi_threshold_event))
  return -VAR_1;

 VAR_19 = (struct wmi_rssi_threshold_event *) VAR_17;
 VAR_22 = (enum wmi_rssi_threshold_val) VAR_19->range;
 VAR_25 = FUNC_1(VAR_19->rssi);

 VAR_21 = &VAR_16->sq_threshld[VAR_3];






 if (VAR_22) {

  if (VAR_25 < VAR_21->upper_threshold[0]) {
   FUNC_2(VAR_0,
       "spurious upper rssi threshold event: %d\n",
       VAR_25);
  } else if ((VAR_25 < VAR_21->upper_threshold[1]) &&
      (VAR_25 >= VAR_21->upper_threshold[0])) {
   VAR_22 = VAR_4;
  } else if ((VAR_25 < VAR_21->upper_threshold[2]) &&
      (VAR_25 >= VAR_21->upper_threshold[1])) {
   VAR_22 = VAR_6;
  } else if ((VAR_25 < VAR_21->upper_threshold[3]) &&
      (VAR_25 >= VAR_21->upper_threshold[2])) {
   VAR_22 = VAR_8;
  } else if ((VAR_25 < VAR_21->upper_threshold[4]) &&
      (VAR_25 >= VAR_21->upper_threshold[3])) {
   VAR_22 = VAR_10;
  } else if ((VAR_25 < VAR_21->upper_threshold[5]) &&
      (VAR_25 >= VAR_21->upper_threshold[4])) {
   VAR_22 = VAR_12;
  } else if (VAR_25 >= VAR_21->upper_threshold[5]) {
   VAR_22 = VAR_14;
  }
 } else {

  if (VAR_25 > VAR_21->lower_threshold[0]) {
   FUNC_2(VAR_0,
       "spurious lower rssi threshold event: %d %d\n",
    VAR_25, VAR_21->lower_threshold[0]);
  } else if ((VAR_25 > VAR_21->lower_threshold[1]) &&
      (VAR_25 <= VAR_21->lower_threshold[0])) {
   VAR_22 = VAR_15;
  } else if ((VAR_25 > VAR_21->lower_threshold[2]) &&
      (VAR_25 <= VAR_21->lower_threshold[1])) {
   VAR_22 = VAR_13;
  } else if ((VAR_25 > VAR_21->lower_threshold[3]) &&
      (VAR_25 <= VAR_21->lower_threshold[2])) {
   VAR_22 = VAR_11;
  } else if ((VAR_25 > VAR_21->lower_threshold[4]) &&
      (VAR_25 <= VAR_21->lower_threshold[3])) {
   VAR_22 = VAR_9;
  } else if ((VAR_25 > VAR_21->lower_threshold[5]) &&
      (VAR_25 <= VAR_21->lower_threshold[4])) {
   VAR_22 = VAR_7;
  } else if (VAR_25 <= VAR_21->lower_threshold[5]) {
   VAR_22 = VAR_5;
  }
 }


 VAR_24 = FUNC_4(VAR_25, VAR_21,
           VAR_21->lower_threshold_valid_count);
 VAR_23 = FUNC_5(VAR_25, VAR_21,
           VAR_21->upper_threshold_valid_count);


 VAR_20.thresh_above1_val = FUNC_0(VAR_23);
 VAR_20.thresh_below1_val = FUNC_0(VAR_24);
 VAR_20.weight = VAR_21->weight;
 VAR_20.poll_time = FUNC_7(VAR_21->polling_interval);

 VAR_26 = FUNC_6(VAR_16, &VAR_20);
 if (VAR_26) {
  FUNC_3("unable to configure rssi thresholds\n");
  return -VAR_2;
 }

 return 0;
}
