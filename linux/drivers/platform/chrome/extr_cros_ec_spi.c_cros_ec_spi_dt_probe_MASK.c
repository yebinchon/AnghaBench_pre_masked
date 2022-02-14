
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cros_ec_spi {void* end_of_msg_delay; void* start_of_msg_delay; } ;


 int FUNC_0 (struct device_node*,char*,void**) ;

__attribute__((used)) static void FUNC_1(struct cros_ec_spi *VAR_0, struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, "google,cros-ec-spi-pre-delay", &VAR_3);
 if (!VAR_4)
  VAR_0->start_of_msg_delay = VAR_3;

 VAR_4 = FUNC_0(VAR_2, "google,cros-ec-spi-msg-delay", &VAR_3);
 if (!VAR_4)
  VAR_0->end_of_msg_delay = VAR_3;
}
