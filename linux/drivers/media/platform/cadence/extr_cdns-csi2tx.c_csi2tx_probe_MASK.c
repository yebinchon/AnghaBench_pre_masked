
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct csi2tx_vops {int dummy; } ;
struct TYPE_8__ {int function; } ;
struct TYPE_7__ {TYPE_3__ entity; int name; int flags; TYPE_5__* dev; int owner; } ;
struct csi2tx_priv {scalar_t__ has_internal_dphy; int max_streams; int max_lanes; int num_lanes; TYPE_1__ subdev; TYPE_4__* pads; int * pad_fmts; struct csi2tx_vops* vops; TYPE_5__* dev; int lock; } ;
struct TYPE_9__ {int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct csi2tx_priv*) ;
 int FUNC_1 (struct csi2tx_priv*,struct platform_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_5__*,char*,int ,int ,int ,char*) ;
 char* FUNC_3 (TYPE_5__*) ;
 int VAR_14 ;
 int FUNC_4 (struct csi2tx_priv*) ;
 struct csi2tx_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,unsigned int,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 struct of_device_id* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct platform_device*,struct csi2tx_priv*) ;
 int FUNC_10 (int ,int ,char*,char*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_15)
{
 struct csi2tx_priv *VAR_16;
 const struct of_device_id *VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;
 FUNC_9(VAR_15, VAR_16);
 FUNC_7(&VAR_16->lock);
 VAR_16->dev = &VAR_15->dev;

 VAR_19 = FUNC_1(VAR_16, VAR_15);
 if (VAR_19)
  goto err_free_priv;

 VAR_17 = FUNC_8(VAR_12, VAR_15->dev.of_node);
 VAR_16->vops = (struct csi2tx_vops *)VAR_17->data;

 FUNC_12(&VAR_16->subdev, &VAR_13);
 VAR_16->subdev.owner = VAR_9;
 VAR_16->subdev.dev = &VAR_15->dev;
 VAR_16->subdev.flags |= VAR_10;
 FUNC_10(VAR_16->subdev.name, VAR_11, "%s.%s",
   VAR_5, FUNC_3(&VAR_15->dev));

 VAR_19 = FUNC_0(VAR_16);
 if (VAR_19)
  goto err_free_priv;


 VAR_16->subdev.entity.function = VAR_6;
 VAR_16->pads[VAR_2].flags = VAR_8;
 for (VAR_18 = VAR_1; VAR_18 < VAR_0; VAR_18++)
  VAR_16->pads[VAR_18].flags = VAR_7;







 for (VAR_18 = VAR_1; VAR_18 < VAR_0; VAR_18++)
  VAR_16->pad_fmts[VAR_18] = VAR_14;

 VAR_19 = FUNC_6(&VAR_16->subdev.entity, VAR_0,
         VAR_16->pads);
 if (VAR_19)
  goto err_free_priv;

 VAR_19 = FUNC_11(&VAR_16->subdev);
 if (VAR_19 < 0)
  goto err_free_priv;

 FUNC_2(&VAR_15->dev,
   "Probed CSI2TX with %u/%u lanes, %u streams, %s D-PHY\n",
   VAR_16->num_lanes, VAR_16->max_lanes, VAR_16->max_streams,
   VAR_16->has_internal_dphy ? "internal" : "no");

 return 0;

err_free_priv:
 FUNC_4(VAR_16);
 return VAR_19;
}
