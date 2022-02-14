
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; TYPE_1__* id_entry; } ;
struct device_node {int dummy; } ;
struct atmel_nand_controller_caps {TYPE_2__* ops; int has_dma; scalar_t__ legacy_of_bindings; } ;
struct TYPE_6__ {int (* probe ) (struct platform_device*,struct atmel_nand_controller_caps const*) ;} ;
struct TYPE_5__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 struct atmel_nand_controller_caps VAR_1 ;
 struct atmel_nand_controller_caps VAR_2 ;
 struct atmel_nand_controller_caps VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct atmel_nand_controller_caps* FUNC_1 (TYPE_3__*) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (struct platform_device*,struct atmel_nand_controller_caps const*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 const struct atmel_nand_controller_caps *VAR_5;

 if (VAR_4->id_entry)
  VAR_5 = (void *)VAR_4->id_entry->driver_data;
 else
  VAR_5 = FUNC_1(&VAR_4->dev);

 if (!VAR_5) {
  FUNC_0(&VAR_4->dev, "Could not retrieve NFC caps\n");
  return -VAR_0;
 }

 if (VAR_5->legacy_of_bindings) {
  struct device_node *VAR_6;
  u32 VAR_7 = 21;





  VAR_6 = FUNC_2(VAR_4->dev.of_node,
         "atmel,sama5d3-nfc");
  if (VAR_6) {
   VAR_5 = &VAR_3;
   FUNC_3(VAR_6);
  }







  if (!VAR_5->has_dma &&
      FUNC_4(VAR_4->dev.of_node,
       "atmel,nand-has-dma"))
   VAR_5 = &VAR_2;






  FUNC_5(VAR_4->dev.of_node,
         "atmel,nand-addr-offset", &VAR_7);
  if (VAR_7 != 21)
   VAR_5 = &VAR_1;
 }

 return VAR_5->ops->probe(VAR_4, VAR_5);
}
