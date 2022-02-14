
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ac_info; } ;
struct rtllib_qos_parameter_info {TYPE_1__ info_element; } ;
struct rtllib_qos_information_element {int ac_info; } ;
struct TYPE_4__ {int param_count; int supported; } ;
struct rtllib_network {TYPE_2__ qos_data; int flags; } ;
struct rtllib_info_element {int dummy; } ;
struct rtllib_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtllib_qos_parameter_info*,TYPE_2__*) ;
 int FUNC_2 (struct rtllib_qos_information_element*,struct rtllib_info_element*) ;
 int FUNC_3 (struct rtllib_qos_parameter_info*,struct rtllib_info_element*) ;

__attribute__((used)) static int FUNC_4(struct rtllib_device *VAR_2,
       struct rtllib_info_element
          *VAR_3,
       struct rtllib_network *VAR_4)
{
 int VAR_5 = 0;
 struct rtllib_qos_information_element VAR_6;

 VAR_5 = FUNC_2(&VAR_6, VAR_3);

 if (VAR_5 == 0) {
  VAR_4->qos_data.param_count = VAR_6.ac_info & 0x0F;
  VAR_4->flags |= VAR_0;
 } else {
  struct rtllib_qos_parameter_info VAR_7;

  VAR_5 = FUNC_3(&VAR_7,
            VAR_3);
  if (VAR_5 == 0) {
   FUNC_1(&VAR_7,
              &(VAR_4->qos_data));
   VAR_4->flags |= VAR_1;
   VAR_4->qos_data.param_count =
       VAR_7.info_element.ac_info & 0x0F;
  }
 }

 if (VAR_5 == 0) {
  FUNC_0(VAR_2->dev, "QoS is supported\n");
  VAR_4->qos_data.supported = 1;
 }
 return VAR_5;
}
