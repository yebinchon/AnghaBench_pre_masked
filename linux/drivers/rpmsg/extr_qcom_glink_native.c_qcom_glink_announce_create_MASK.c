
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct rpmsg_device {TYPE_1__ dev; int ept; } ;
struct qcom_glink {scalar_t__ intentless; } ;
struct property {int length; int * value; } ;
struct glink_core_rx_intent {int dummy; } ;
struct glink_channel {struct qcom_glink* glink; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct property* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct qcom_glink*,struct glink_channel*,struct glink_core_rx_intent*) ;
 struct glink_core_rx_intent* FUNC_4 (struct qcom_glink*,struct glink_channel*,int,int) ;
 struct glink_channel* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rpmsg_device *VAR_1)
{
 struct glink_channel *VAR_2 = FUNC_5(VAR_1->ept);
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct qcom_glink *VAR_4 = VAR_2->glink;
 struct glink_core_rx_intent *VAR_5;
 const struct property *VAR_6 = ((void*)0);
 __be32 VAR_7[] = { FUNC_1(VAR_0), FUNC_1(5) };
 int VAR_8;
 int VAR_9 = 1;
 __be32 *VAR_10 = VAR_7;
 int VAR_11;

 if (VAR_4->intentless)
  return 0;

 VAR_6 = FUNC_2(VAR_3, "qcom,intents", ((void*)0));
 if (VAR_6) {
  VAR_10 = VAR_6->value;
  VAR_9 = VAR_6->length / sizeof(u32) / 2;
 }


 while (VAR_9--) {
  VAR_11 = FUNC_0(VAR_10++);
  VAR_8 = FUNC_0(VAR_10++);
  while (VAR_8--) {
   VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_11,
        1);
   if (!VAR_5)
    break;

   FUNC_3(VAR_4, VAR_2, VAR_5);
  }
 }
 return 0;
}
