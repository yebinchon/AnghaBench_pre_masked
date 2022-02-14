
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regulators; int num_regulators; } ;
struct soc_camera_subdev_desc {TYPE_1__ sd_pdata; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ) ;

int FUNC_1(struct device *VAR_0, struct soc_camera_subdev_desc *VAR_1)
{

 return FUNC_0(VAR_0, VAR_1->sd_pdata.num_regulators,
           VAR_1->sd_pdata.regulators);
}
