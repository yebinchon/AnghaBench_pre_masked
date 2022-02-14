
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_qos_parameters {int dummy; } ;
struct TYPE_3__ {int ac_info; } ;
struct ieee80211_qos_parameter_info {TYPE_1__ info_element; } ;
struct ieee80211_qos_information_element {int ac_info; } ;
struct TYPE_4__ {int param_count; int supported; struct ieee80211_qos_parameters parameters; } ;
struct ieee80211_network {TYPE_2__ qos_data; int flags; } ;
struct ieee80211_info_element {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_qos_parameter_info*,struct ieee80211_qos_parameters*) ;
 int FUNC_2 (struct ieee80211_qos_information_element*,struct ieee80211_info_element*) ;
 int FUNC_3 (struct ieee80211_qos_parameter_info*,struct ieee80211_info_element*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_info_element
          *VAR_2,
          struct ieee80211_network *VAR_3)
{
 int VAR_4 = 0;
 struct ieee80211_qos_parameters *VAR_5 = ((void*)0);
 struct ieee80211_qos_information_element VAR_6;

 VAR_4 = FUNC_2(&VAR_6, VAR_2);

 if (VAR_4 == 0) {
  VAR_3->qos_data.param_count = VAR_6.ac_info & 0x0F;
  VAR_3->flags |= VAR_0;
 } else {
  struct ieee80211_qos_parameter_info VAR_7;

  VAR_4 = FUNC_3(&VAR_7,
            VAR_2);
  if (VAR_4 == 0) {
   VAR_5 = &(VAR_3->qos_data.parameters);
   FUNC_1(&VAR_7,
              VAR_5);
   VAR_3->flags |= VAR_1;
   VAR_3->qos_data.param_count =
       VAR_7.info_element.ac_info & 0x0F;
  }
 }

 if (VAR_4 == 0) {
  FUNC_0("QoS is supported\n");
  VAR_3->qos_data.supported = 1;
 }
 return VAR_4;
}
