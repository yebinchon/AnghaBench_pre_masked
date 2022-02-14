
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dev; } ;
struct sun6i_csi_dev {TYPE_1__ csi; TYPE_2__* dev; } ;
struct TYPE_4__ {int dma_pfn_offset; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sun6i_csi_dev* FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (struct platform_device*,struct sun6i_csi_dev*) ;
 int FUNC_2 (struct sun6i_csi_dev*,struct platform_device*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct sun6i_csi_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_4->dev;

 VAR_5->dev->dma_pfn_offset = VAR_3 >> VAR_2;

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_4, VAR_5);

 VAR_5->csi.dev = &VAR_4->dev;
 return FUNC_3(&VAR_5->csi);
}
