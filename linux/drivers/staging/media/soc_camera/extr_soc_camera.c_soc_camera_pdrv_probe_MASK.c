
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int regulators; int num_regulators; } ;
struct soc_camera_subdev_desc {TYPE_1__ sd_pdata; } ;
struct soc_camera_device {int user_height; int user_width; TYPE_3__* pdev; struct soc_camera_desc* sdesc; int iface; } ;
struct TYPE_6__ {int bus_id; } ;
struct soc_camera_desc {TYPE_2__ host_desc; struct soc_camera_subdev_desc subdev_desc; } ;
struct TYPE_7__ {struct soc_camera_desc* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct soc_camera_device* FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct platform_device*,struct soc_camera_device*) ;
 int FUNC_3 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct soc_camera_desc *VAR_6 = VAR_5->dev.platform_data;
 struct soc_camera_subdev_desc *VAR_7 = &VAR_6->subdev_desc;
 struct soc_camera_device *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_0(&VAR_5->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;
 VAR_9 = FUNC_1(&VAR_5->dev, VAR_7->sd_pdata.num_regulators,
          VAR_7->sd_pdata.regulators);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->iface = VAR_6->host_desc.bus_id;
 VAR_8->sdesc = VAR_6;
 VAR_8->pdev = &VAR_5->dev;
 FUNC_2(VAR_5, VAR_8);

 VAR_8->user_width = VAR_1;
 VAR_8->user_height = VAR_0;

 return FUNC_3(VAR_8);
}
