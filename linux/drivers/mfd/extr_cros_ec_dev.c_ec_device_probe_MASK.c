
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct cros_ec_platform {int ec_name; int cmd_offset; } ;
struct TYPE_14__ {int release; struct device* parent; int * class; } ;
struct cros_ec_dev {unsigned int* features; TYPE_2__ class_dev; struct device* dev; TYPE_7__* ec_dev; int cmd_offset; } ;
struct TYPE_16__ {TYPE_1__* dev; } ;
struct TYPE_15__ {int num_cells; int name; struct TYPE_15__* mfd_cells; int id; int desc; } ;
struct TYPE_13__ {struct device_node* of_node; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cros_ec_dev*) ;
 scalar_t__ FUNC_2 (struct cros_ec_dev*,int ) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (struct cros_ec_dev*) ;
 TYPE_3__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_4 (struct device*,char*,int,...) ;
 TYPE_7__* FUNC_5 (int ) ;
 struct cros_ec_platform* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,int ) ;
 int FUNC_8 (struct device*,struct cros_ec_dev*) ;
 int FUNC_9 (TYPE_2__*,char*,int ) ;
 int FUNC_10 (struct device*,char*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 struct cros_ec_dev* FUNC_13 (int,int ) ;
 int FUNC_14 (struct device*,TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_9)
{
 int VAR_10 = -VAR_1;
 struct device_node *VAR_11;
 struct device *VAR_12 = &VAR_9->dev;
 struct cros_ec_platform *VAR_13 = FUNC_6(VAR_12);
 struct cros_ec_dev *VAR_14 = FUNC_13(sizeof(*VAR_14), VAR_2);
 int VAR_15;

 if (!VAR_14)
  return VAR_10;

 FUNC_8(VAR_12, VAR_14);
 VAR_14->ec_dev = FUNC_5(VAR_12->parent);
 VAR_14->dev = VAR_12;
 VAR_14->cmd_offset = VAR_13->cmd_offset;
 VAR_14->features[0] = -1U;
 VAR_14->features[1] = -1U;
 FUNC_12(&VAR_14->class_dev);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_7); VAR_15++) {




  if (FUNC_2(VAR_14, VAR_7[VAR_15].id)) {
   FUNC_7(VAR_12, "CrOS %s MCU detected\n",
     VAR_7[VAR_15].desc);




   VAR_13->ec_name = VAR_7[VAR_15].name;
   break;
  }
 }




 VAR_14->class_dev.class = &VAR_3;
 VAR_14->class_dev.parent = VAR_12;
 VAR_14->class_dev.release = VAR_4;

 VAR_10 = FUNC_9(&VAR_14->class_dev, "%s", VAR_13->ec_name);
 if (VAR_10) {
  FUNC_4(VAR_12, "dev_set_name failed => %d\n", VAR_10);
  goto failed;
 }

 VAR_10 = FUNC_11(&VAR_14->class_dev);
 if (VAR_10)
  goto failed;


 if (FUNC_2(VAR_14, VAR_0))
  FUNC_3(VAR_14);
 else

  FUNC_1(VAR_14);





 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
  if (FUNC_2(VAR_14, VAR_8[VAR_15].id)) {
   VAR_10 = FUNC_14(VAR_14->dev,
      VAR_8[VAR_15].mfd_cells,
      VAR_8[VAR_15].num_cells);
   if (VAR_10)
    FUNC_4(VAR_14->dev,
     "failed to add %s subdevice: %d\n",
     VAR_8[VAR_15].mfd_cells->name,
     VAR_10);
  }
 }





 VAR_10 = FUNC_14(VAR_14->dev, VAR_5,
      FUNC_0(VAR_5));
 if (VAR_10)
  FUNC_10(VAR_14->dev,
    "failed to add cros-ec platform devices: %d\n",
    VAR_10);


 VAR_11 = VAR_14->ec_dev->dev->of_node;
 if (FUNC_15(VAR_11, "google,has-vbc-nvram")) {
  VAR_10 = FUNC_14(VAR_14->dev, VAR_6,
      FUNC_0(VAR_6));
  if (VAR_10)
   FUNC_10(VAR_14->dev, "failed to add VBC devices: %d\n",
     VAR_10);
 }

 return 0;

failed:
 FUNC_16(&VAR_14->class_dev);
 return VAR_10;
}
