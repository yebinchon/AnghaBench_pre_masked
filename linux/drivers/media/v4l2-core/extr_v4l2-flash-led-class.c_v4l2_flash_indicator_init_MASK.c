
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_flash_config {int dummy; } ;
struct v4l2_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 struct v4l2_flash* FUNC_0 (struct device*,struct fwnode_handle*,int *,struct led_classdev*,int *,struct v4l2_flash_config*) ;

struct v4l2_flash *FUNC_1(
 struct device *VAR_0, struct fwnode_handle *VAR_1,
 struct led_classdev *VAR_2,
 struct v4l2_flash_config *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_2, ((void*)0), VAR_3);
}
