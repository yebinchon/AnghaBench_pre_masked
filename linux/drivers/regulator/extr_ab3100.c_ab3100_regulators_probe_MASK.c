
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct regulator_desc {int id; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct ab3100_platform_data {int * reg_initvals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 struct regulator_desc* VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct platform_device*,struct device_node*) ;
 int FUNC_2 (struct platform_device*,struct ab3100_platform_data*,int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 struct ab3100_platform_data* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,struct device_node*,int *,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct ab3100_platform_data *VAR_6 = FUNC_6(&VAR_5->dev);
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 int VAR_8 = 0;
 u8 VAR_9;
 int VAR_10;


 VAR_8 = FUNC_3(&VAR_5->dev, 0,
      VAR_0, &VAR_9);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "could not read initial status of LDO_D\n");
  return VAR_8;
 }
 if (VAR_9 & 0x10)
  FUNC_7(&VAR_5->dev,
      "chip is already in active mode (Warm start)\n");
 else
  FUNC_7(&VAR_5->dev,
      "chip is in inactive mode (Cold start)\n");

 if (VAR_7) {
  VAR_8 = FUNC_8(&VAR_5->dev, VAR_7,
      VAR_4,
      FUNC_0(VAR_4));
  if (VAR_8 < 0) {
   FUNC_5(&VAR_5->dev,
    "Error parsing regulator init data: %d\n", VAR_8);
   return VAR_8;
  }
  return FUNC_1(VAR_5, VAR_7);
 }


 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  VAR_8 = FUNC_4(&VAR_5->dev, 0,
     VAR_2[VAR_10],
     VAR_6->reg_initvals[VAR_10]);
  if (VAR_8) {
   FUNC_5(&VAR_5->dev, "regulator initialization failed with error %d\n",
    VAR_8);
   return VAR_8;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  const struct regulator_desc *VAR_11 = &VAR_3[VAR_10];

  VAR_8 = FUNC_2(VAR_5, VAR_6, ((void*)0), ((void*)0),
      VAR_11->id);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
