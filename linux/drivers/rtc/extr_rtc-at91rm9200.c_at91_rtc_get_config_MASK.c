
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct at91_rtc_config {int dummy; } ;


 int VAR_0 ;
 struct at91_rtc_config const VAR_1 ;
 struct of_device_id* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static const struct at91_rtc_config *
FUNC_1(struct platform_device *VAR_2)
{
 const struct of_device_id *VAR_3;

 if (VAR_2->dev.of_node) {
  VAR_3 = FUNC_0(VAR_0, VAR_2->dev.of_node);
  if (!VAR_3)
   return ((void*)0);
  return (const struct at91_rtc_config *)VAR_3->data;
 }

 return &VAR_1;
}
