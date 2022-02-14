
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cqspi_st {void* rclk_en; int trigger_address; int fifo_width; int fifo_depth; void* is_decoded_cs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 void* FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 struct cqspi_st* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct cqspi_st *VAR_3 = FUNC_3(VAR_1);

 VAR_3->is_decoded_cs = FUNC_1(VAR_2, "cdns,is-decoded-cs");

 if (FUNC_2(VAR_2, "cdns,fifo-depth", &VAR_3->fifo_depth)) {
  FUNC_0(&VAR_1->dev, "couldn't determine fifo-depth\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2, "cdns,fifo-width", &VAR_3->fifo_width)) {
  FUNC_0(&VAR_1->dev, "couldn't determine fifo-width\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2, "cdns,trigger-address",
     &VAR_3->trigger_address)) {
  FUNC_0(&VAR_1->dev, "couldn't determine trigger-address\n");
  return -VAR_0;
 }

 VAR_3->rclk_en = FUNC_1(VAR_2, "cdns,rclk-en");

 return 0;
}
