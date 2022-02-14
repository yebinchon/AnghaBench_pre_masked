
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_device_attribute {char* machine; char* family; int soc_id; } ;
struct soc_device {int dummy; } ;
typedef struct soc_device regmap ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct soc_device*) ;
 int FUNC_1 (struct soc_device*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct soc_device_attribute*) ;
 struct soc_device_attribute* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct soc_device*,int ,int*) ;
 struct soc_device* FUNC_8 (struct soc_device_attribute*) ;
 int FUNC_9 (struct soc_device*) ;
 struct soc_device* FUNC_10 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct regmap *VAR_11;
 struct soc_device *VAR_12;
 struct soc_device_attribute *VAR_13;
 struct device_node *VAR_14 = VAR_10->dev.of_node;
 int VAR_15;

 VAR_11 = FUNC_10(VAR_14, "regmap");
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_15 = FUNC_6(VAR_14, "compatible",
          &VAR_13->soc_id);
 if (VAR_15)
  return -VAR_0;

 VAR_13->machine = "RealView";
 VAR_13->family = "Versatile";
 VAR_12 = FUNC_8(VAR_13);
 if (FUNC_0(VAR_12)) {
  FUNC_4(VAR_13);
  return -VAR_1;
 }
 VAR_15 = FUNC_7(VAR_11, VAR_4,
     &VAR_8);
 if (VAR_15)
  return -VAR_1;

 FUNC_3(FUNC_9(VAR_12), &VAR_9);
 FUNC_3(FUNC_9(VAR_12), &VAR_6);
 FUNC_3(FUNC_9(VAR_12), &VAR_5);
 FUNC_3(FUNC_9(VAR_12), &VAR_7);

 FUNC_2(&VAR_10->dev, "RealView Syscon Core ID: 0x%08x, HBI-%03x\n",
   VAR_8,
   ((VAR_8 >> 16) & 0xfff));

 return 0;
}
