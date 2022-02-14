
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_drif_sdr {int dev; int hw_ch_mask; struct rcar_drif** ch; } ;
struct rcar_drif {size_t num; struct rcar_drif_sdr* sdr; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device_node*) ;
 struct rcar_drif* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct rcar_drif_sdr *VAR_2,
        struct device_node *VAR_3)
{
 struct platform_device *VAR_4;
 struct rcar_drif *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_2->dev, "failed to get bonded device from node\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_4->dev);
 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5) {

  VAR_5->sdr = VAR_2;


  VAR_2->ch[VAR_5->num] = VAR_5;
  VAR_2->hw_ch_mask |= FUNC_0(VAR_5->num);
 } else {

  FUNC_2(VAR_2->dev, "defer probe\n");
  VAR_6 = -VAR_1;
 }
 FUNC_4(&VAR_4->dev);

 FUNC_7(&VAR_4->dev);

 return VAR_6;
}
