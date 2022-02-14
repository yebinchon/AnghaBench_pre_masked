
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct w5500_spi_priv {int dummy; } ;
struct w5200_spi_priv {int dummy; } ;
struct w5100_ops {int dummy; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct spi_device {int irq; TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
typedef int kernel_ulong_t ;
struct TYPE_5__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;



 void* FUNC_0 (scalar_t__) ;
 struct of_device_id* FUNC_1 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (struct spi_device*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,struct w5100_ops const*,int,void const*,int ,int) ;
 struct w5100_ops VAR_3 ;
 struct w5100_ops VAR_4 ;
 struct w5100_ops VAR_5 ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_6)
{
 const struct of_device_id *VAR_7;
 const struct w5100_ops *VAR_8;
 kernel_ulong_t VAR_9;
 int VAR_10;
 const void *VAR_11 = FUNC_0(VAR_6->dev.of_node);

 if (VAR_6->dev.of_node) {
  VAR_7 = FUNC_1(VAR_2, &VAR_6->dev);
  if (!VAR_7)
   return -VAR_1;
  VAR_9 = (kernel_ulong_t)VAR_7->data;
 } else {
  VAR_9 = FUNC_2(VAR_6)->driver_data;
 }

 switch (VAR_9) {
 case 130:
  VAR_8 = &VAR_3;
  VAR_10 = 0;
  break;
 case 129:
  VAR_8 = &VAR_4;
  VAR_10 = sizeof(struct w5200_spi_priv);
  break;
 case 128:
  VAR_8 = &VAR_5;
  VAR_10 = sizeof(struct w5500_spi_priv);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_3(&VAR_6->dev, VAR_8, VAR_10, VAR_11, VAR_6->irq, -VAR_0);
}
