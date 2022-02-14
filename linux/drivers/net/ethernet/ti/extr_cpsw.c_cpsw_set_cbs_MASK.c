
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tc_cbs_qopt_offload {int idleslope; scalar_t__ enable; int queue; } ;
struct net_device {int num_tc; } ;
struct cpsw_slave {TYPE_1__* phy; } ;
struct cpsw_priv {int shp_cfg_speed; int dev; int * fifo_bw; int ndev; struct cpsw_common* cpsw; } ;
struct cpsw_common {int dev; struct cpsw_slave* slaves; } ;
struct TYPE_2__ {int speed; scalar_t__ link; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_priv*,int,int ) ;
 size_t FUNC_1 (struct cpsw_common*,struct cpsw_priv*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1,
   struct tc_cbs_qopt_offload *VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_5(VAR_1);
 struct cpsw_common *VAR_4 = VAR_3->cpsw;
 struct cpsw_slave *VAR_5;
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = 0;

 VAR_7 = FUNC_6(VAR_3->ndev, VAR_2->queue);





 VAR_9 = FUNC_2(VAR_7, VAR_1->num_tc);
 if (!VAR_9) {
  FUNC_3(VAR_3->dev, "Last tc%d can't be rate limited", VAR_7);
  return -VAR_0;
 }


 if (!VAR_2->enable && !VAR_3->fifo_bw[VAR_9])
  return 0;


 VAR_5 = &VAR_4->slaves[FUNC_1(VAR_4, VAR_3)];
 if (VAR_5->phy && VAR_5->phy->link) {
  if (VAR_3->shp_cfg_speed &&
      VAR_3->shp_cfg_speed != VAR_5->phy->speed)
   VAR_6 = VAR_3->shp_cfg_speed;

  VAR_3->shp_cfg_speed = VAR_5->phy->speed;
 }

 if (!VAR_3->shp_cfg_speed) {
  FUNC_3(VAR_3->dev, "Link speed is not known");
  return -1;
 }

 VAR_8 = FUNC_7(VAR_4->dev);
 if (VAR_8 < 0) {
  FUNC_8(VAR_4->dev);
  return VAR_8;
 }

 VAR_10 = VAR_2->enable ? VAR_2->idleslope : 0;
 VAR_8 = FUNC_0(VAR_3, VAR_9, VAR_10);
 if (VAR_8) {
  VAR_3->shp_cfg_speed = VAR_6;
  VAR_6 = 0;
 }

 if (VAR_10 && VAR_6)
  FUNC_4(VAR_3->dev,
    "Speed was changed, CBS shaper speeds are changed!");

 FUNC_9(VAR_4->dev);
 return VAR_8;
}
