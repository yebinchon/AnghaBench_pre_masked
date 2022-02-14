
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_7__ {int function; } ;
struct TYPE_6__ {TYPE_4__ entity; int name; int * dev; int owner; } ;
struct csi2rx_priv {int notifier; scalar_t__ has_internal_dphy; int max_streams; int max_lanes; int num_lanes; TYPE_1__ subdev; TYPE_5__* pads; int lock; int * dev; } ;
struct TYPE_8__ {int flags; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct csi2rx_priv*,struct platform_device*) ;
 int FUNC_1 (struct csi2rx_priv*) ;
 int VAR_11 ;
 int FUNC_2 (int *,char*,int ,int ,int ,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct csi2rx_priv*) ;
 struct csi2rx_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_4__*,unsigned int,TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct csi2rx_priv*) ;
 int FUNC_9 (int ,int ,char*,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 struct csi2rx_priv *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;
 FUNC_8(VAR_12, VAR_13);
 VAR_13->dev = &VAR_12->dev;
 FUNC_7(&VAR_13->lock);

 VAR_15 = FUNC_0(VAR_13, VAR_12);
 if (VAR_15)
  goto err_free_priv;

 VAR_15 = FUNC_1(VAR_13);
 if (VAR_15)
  goto err_free_priv;

 VAR_13->subdev.owner = VAR_9;
 VAR_13->subdev.dev = &VAR_12->dev;
 FUNC_13(&VAR_13->subdev, &VAR_11);
 FUNC_12(&VAR_13->subdev, &VAR_12->dev);
 FUNC_9(VAR_13->subdev.name, VAR_10, "%s.%s",
   VAR_5, FUNC_3(&VAR_12->dev));


 VAR_13->subdev.entity.function = VAR_6;
 VAR_13->pads[VAR_1].flags = VAR_7;
 for (VAR_14 = VAR_2; VAR_14 < VAR_0; VAR_14++)
  VAR_13->pads[VAR_14].flags = VAR_8;

 VAR_15 = FUNC_6(&VAR_13->subdev.entity, VAR_0,
         VAR_13->pads);
 if (VAR_15)
  goto err_cleanup;

 VAR_15 = FUNC_11(&VAR_13->subdev);
 if (VAR_15 < 0)
  goto err_cleanup;

 FUNC_2(&VAR_12->dev,
   "Probed CSI2RX with %u/%u lanes, %u streams, %s D-PHY\n",
   VAR_13->num_lanes, VAR_13->max_lanes, VAR_13->max_streams,
   VAR_13->has_internal_dphy ? "internal" : "no");

 return 0;

err_cleanup:
 FUNC_10(&VAR_13->notifier);
err_free_priv:
 FUNC_4(VAR_13);
 return VAR_15;
}
