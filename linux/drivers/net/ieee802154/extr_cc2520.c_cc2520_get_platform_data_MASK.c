
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cc2520_platform_data* platform_data; struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct cc2520_private {int amplified; void* fifo_pin; } ;
struct cc2520_platform_data {void* reset; void* vreg; void* cca; void* sfd; void* fifop; void* fifo; } ;


 int VAR_0 ;
 void* FUNC_0 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 struct cc2520_private* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1,
        struct cc2520_platform_data *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct cc2520_private *VAR_4 = FUNC_2(VAR_1);

 if (!VAR_3) {
  struct cc2520_platform_data *VAR_5 = VAR_1->dev.platform_data;

  if (!VAR_5)
   return -VAR_0;
  *VAR_2 = *VAR_5;
  VAR_4->fifo_pin = VAR_2->fifo;
  return 0;
 }

 VAR_2->fifo = FUNC_0(VAR_3, "fifo-gpio", 0);
 VAR_4->fifo_pin = VAR_2->fifo;

 VAR_2->fifop = FUNC_0(VAR_3, "fifop-gpio", 0);

 VAR_2->sfd = FUNC_0(VAR_3, "sfd-gpio", 0);
 VAR_2->cca = FUNC_0(VAR_3, "cca-gpio", 0);
 VAR_2->vreg = FUNC_0(VAR_3, "vreg-gpio", 0);
 VAR_2->reset = FUNC_0(VAR_3, "reset-gpio", 0);


 if (FUNC_1(VAR_3, "amplified"))
  VAR_4->amplified = 1;

 return 0;
}
