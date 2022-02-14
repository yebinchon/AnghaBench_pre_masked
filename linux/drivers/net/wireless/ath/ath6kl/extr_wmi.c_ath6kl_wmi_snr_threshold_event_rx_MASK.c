
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wmi_snr_threshold_params_cmd {int poll_time; int weight; void* thresh_below1_val; void* thresh_above1_val; } ;
struct wmi_snr_threshold_event {scalar_t__ snr; scalar_t__ range; } ;
struct wmi {struct sq_threshold_params* sq_threshld; } ;
struct sq_threshold_params {scalar_t__* upper_threshold; scalar_t__* lower_threshold; int polling_interval; int weight; int upper_threshold_valid_count; int lower_threshold_valid_count; } ;
typedef scalar_t__ s16 ;
typedef enum wmi_snr_threshold_val { ____Placeholder_wmi_snr_threshold_val } wmi_snr_threshold_val ;


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
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (scalar_t__,struct sq_threshold_params*,int ) ;
 void* FUNC_3 (scalar_t__,struct sq_threshold_params*,int ) ;
 int FUNC_4 (struct wmi*,struct wmi_snr_threshold_params_cmd*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct wmi *VAR_12, u8 *VAR_13,
          int VAR_14)
{
 struct wmi_snr_threshold_event *VAR_15;
 struct sq_threshold_params *VAR_16;
 struct wmi_snr_threshold_params_cmd VAR_17;
 enum wmi_snr_threshold_val VAR_18;
 u8 VAR_19, VAR_20;
 s16 VAR_21;
 int VAR_22;

 if (VAR_14 < sizeof(struct wmi_snr_threshold_event))
  return -VAR_1;

 VAR_15 = (struct wmi_snr_threshold_event *) VAR_13;

 VAR_18 = (enum wmi_snr_threshold_val) VAR_15->range;
 VAR_21 = VAR_15->snr;

 VAR_16 = &VAR_12->sq_threshld[VAR_3];






 if (VAR_18) {

  if (VAR_21 < VAR_16->upper_threshold[0]) {
   FUNC_0(VAR_0,
       "spurious upper snr threshold event: %d\n",
       VAR_21);
  } else if ((VAR_21 < VAR_16->upper_threshold[1]) &&
      (VAR_21 >= VAR_16->upper_threshold[0])) {
   VAR_18 = VAR_4;
  } else if ((VAR_21 < VAR_16->upper_threshold[2]) &&
      (VAR_21 >= VAR_16->upper_threshold[1])) {
   VAR_18 = VAR_6;
  } else if ((VAR_21 < VAR_16->upper_threshold[3]) &&
      (VAR_21 >= VAR_16->upper_threshold[2])) {
   VAR_18 = VAR_8;
  } else if (VAR_21 >= VAR_16->upper_threshold[3]) {
   VAR_18 = VAR_10;
  }
 } else {

  if (VAR_21 > VAR_16->lower_threshold[0]) {
   FUNC_0(VAR_0,
       "spurious lower snr threshold event: %d\n",
       VAR_16->lower_threshold[0]);
  } else if ((VAR_21 > VAR_16->lower_threshold[1]) &&
      (VAR_21 <= VAR_16->lower_threshold[0])) {
   VAR_18 = VAR_11;
  } else if ((VAR_21 > VAR_16->lower_threshold[2]) &&
      (VAR_21 <= VAR_16->lower_threshold[1])) {
   VAR_18 = VAR_9;
  } else if ((VAR_21 > VAR_16->lower_threshold[3]) &&
      (VAR_21 <= VAR_16->lower_threshold[2])) {
   VAR_18 = VAR_7;
  } else if (VAR_21 <= VAR_16->lower_threshold[3]) {
   VAR_18 = VAR_5;
  }
 }


 VAR_20 = FUNC_2(VAR_21, VAR_16,
           VAR_16->lower_threshold_valid_count);
 VAR_19 = FUNC_3(VAR_21, VAR_16,
           VAR_16->upper_threshold_valid_count);


 VAR_17.thresh_above1_val = VAR_19;
 VAR_17.thresh_below1_val = VAR_20;
 VAR_17.weight = VAR_16->weight;
 VAR_17.poll_time = FUNC_5(VAR_16->polling_interval);

 FUNC_0(VAR_0,
     "snr: %d, threshold: %d, lower: %d, upper: %d\n",
     VAR_21, VAR_18,
     VAR_20, VAR_19);

 VAR_22 = FUNC_4(VAR_12, &VAR_17);
 if (VAR_22) {
  FUNC_1("unable to configure snr threshold\n");
  return -VAR_2;
 }

 return 0;
}
