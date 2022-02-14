
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct omap_usb_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; int * resource; } ;
struct TYPE_7__ {int notifier_call; } ;
struct otg_device {void* vbus; void* id; int base; TYPE_4__ vbus_nb; TYPE_4__ id_nb; struct extcon_dev* extcon; } ;
struct omap_usb_config {int extcon; } ;
struct extcon_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,int ,void*,void*) ;
 int FUNC_3 (TYPE_1__*,struct extcon_dev*,int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 struct otg_device* FUNC_5 (TYPE_1__*,int,int ) ;
 struct extcon_dev* FUNC_6 (int ) ;
 void* FUNC_7 (struct extcon_dev*,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct otg_device*) ;
 int VAR_7 ;
 int FUNC_9 (struct platform_device*,struct otg_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 const struct omap_usb_config *VAR_9 = VAR_8->dev.platform_data;
 struct otg_device *VAR_10;
 struct extcon_dev *VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (!VAR_9 || !VAR_9->extcon)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_9->extcon);
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->base = FUNC_4(&VAR_8->dev, &VAR_8->resource[0]);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->extcon = VAR_11;
 VAR_10->id_nb.notifier_call = VAR_6;
 VAR_10->vbus_nb.notifier_call = VAR_7;

 VAR_12 = FUNC_3(&VAR_8->dev, VAR_11,
     VAR_4, &VAR_10->id_nb);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_3(&VAR_8->dev, VAR_11,
     VAR_3, &VAR_10->vbus_nb);
 if (VAR_12) {
  return VAR_12;
 }

 VAR_10->id = FUNC_7(VAR_11, VAR_4);
 VAR_10->vbus = FUNC_7(VAR_11, VAR_3);
 FUNC_8(VAR_10);

 VAR_13 = FUNC_10(VAR_10->base);

 FUNC_2(&VAR_8->dev,
   "OMAP USB OTG controller rev %d.%d (%s, id=%d, vbus=%d)\n",
   (VAR_13 >> 4) & 0xf, VAR_13 & 0xf, VAR_9->extcon, VAR_10->id,
   VAR_10->vbus);

 FUNC_9(VAR_8, VAR_10);

 return 0;
}
