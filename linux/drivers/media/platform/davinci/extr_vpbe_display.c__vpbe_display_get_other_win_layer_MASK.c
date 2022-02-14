
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpbe_layer {int device_id; } ;
struct vpbe_display {struct vpbe_layer** dev; } ;
typedef enum vpbe_display_device_id { ____Placeholder_vpbe_display_device_id } vpbe_display_device_id ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
struct vpbe_layer*
FUNC_0(struct vpbe_display *VAR_2,
   struct vpbe_layer *VAR_3)
{
 enum vpbe_display_device_id VAR_4, VAR_5;
 VAR_4 = VAR_3->device_id;

 VAR_5 = (VAR_4 == VAR_0) ?
 VAR_1 : VAR_0;
 return VAR_2->dev[VAR_5];
}
