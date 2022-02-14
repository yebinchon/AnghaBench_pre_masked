
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int of_node; struct ipu_client_platformdata* platform_data; int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct pinctrl {int dummy; } ;
struct ipu_client_platformdata {scalar_t__ csi; int of_node; } ;
struct TYPE_11__ {int function; int * ops; } ;
struct TYPE_12__ {int flags; int * ctrl_handler; TYPE_5__* dev; int grp_id; int name; int owner; int fwnode; TYPE_1__ entity; int * internal_ops; } ;
struct csi_priv {scalar_t__ csi_id; int smfc_id; struct pinctrl* vdev; int lock; int ctrl_hdlr; TYPE_5__* dev; TYPE_2__ sd; int ipu; int irqlock; int eof_timeout_timer; int active_output_pad; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct pinctrl*) ;
 int VAR_6 ;
 int FUNC_2 (struct pinctrl*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_5__*,char*,int) ;
 int FUNC_4 (int ) ;
 struct csi_priv* FUNC_5 (TYPE_5__*,int,int ) ;
 struct pinctrl* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (struct csi_priv*) ;
 struct pinctrl* FUNC_9 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_10 (struct pinctrl*) ;
 int FUNC_11 (int ,int,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct platform_device*,TYPE_2__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (TYPE_2__*,struct csi_priv*) ;
 int FUNC_22 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_14)
{
 struct ipu_client_platformdata *VAR_15;
 struct pinctrl *VAR_16;
 struct csi_priv *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_5(&VAR_14->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 FUNC_16(VAR_14, &VAR_17->sd);
 VAR_17->dev = &VAR_14->dev;

 VAR_18 = FUNC_7(VAR_17->dev, FUNC_0(32));
 if (VAR_18)
  return VAR_18;


 VAR_17->ipu = FUNC_4(VAR_17->dev->parent);


 VAR_15 = VAR_17->dev->platform_data;
 VAR_17->csi_id = VAR_15->csi;
 VAR_17->smfc_id = (VAR_17->csi_id == 0) ? 0 : 2;

 VAR_17->active_output_pad = VAR_0;

 FUNC_18(&VAR_17->eof_timeout_timer, VAR_11, 0);
 FUNC_17(&VAR_17->irqlock);

 FUNC_22(&VAR_17->sd, &VAR_13);
 FUNC_21(&VAR_17->sd, VAR_17);
 VAR_17->sd.internal_ops = &VAR_12;
 VAR_17->sd.entity.ops = &VAR_10;
 VAR_17->sd.entity.function = VAR_6;
 VAR_17->sd.dev = &VAR_14->dev;
 VAR_17->sd.fwnode = FUNC_15(VAR_15->of_node);
 VAR_17->sd.owner = VAR_7;
 VAR_17->sd.flags = VAR_8 | VAR_9;
 VAR_17->sd.grp_id = VAR_17->csi_id ?
  VAR_5 : VAR_4;
 FUNC_11(VAR_17->sd.name, sizeof(VAR_17->sd.name),
        VAR_17->sd.grp_id, FUNC_12(VAR_17->ipu));

 VAR_17->vdev = FUNC_9(VAR_17->sd.dev, &VAR_17->sd,
         VAR_0);
 if (FUNC_1(VAR_17->vdev))
  return FUNC_2(VAR_17->vdev);

 FUNC_14(&VAR_17->lock);

 FUNC_20(&VAR_17->ctrl_hdlr, 0);
 VAR_17->sd.ctrl_handler = &VAR_17->ctrl_hdlr;







 VAR_17->dev->of_node = VAR_15->of_node;
 VAR_16 = FUNC_6(VAR_17->dev);
 if (FUNC_1(VAR_16)) {
  VAR_18 = FUNC_2(VAR_16);
  FUNC_3(VAR_17->dev,
   "devm_pinctrl_get_select_default() failed: %d\n", VAR_18);
  if (VAR_18 != -VAR_1)
   goto free;
 }

 VAR_18 = FUNC_8(VAR_17);
 if (VAR_18)
  goto free;

 return 0;
free:
 FUNC_19(&VAR_17->ctrl_hdlr);
 FUNC_13(&VAR_17->lock);
 FUNC_10(VAR_17->vdev);
 return VAR_18;
}
