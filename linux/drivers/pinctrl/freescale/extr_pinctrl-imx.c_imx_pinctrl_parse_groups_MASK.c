
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_pinctrl_soc_info {int flags; scalar_t__ generic_pinconf; } ;
struct imx_pinctrl {int dev; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin {int dummy; } ;
struct group_desc {int num_pins; int * pins; void* data; int name; } ;
struct device_node {int name; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,struct device_node*) ;
 int FUNC_1 (int ,char*,struct device_node*) ;
 void* FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (struct imx_pinctrl*,int *,struct imx_pin*,int const**,struct device_node*) ;
 int FUNC_4 (struct imx_pinctrl*,int *,struct imx_pin*,int const**) ;
 int * FUNC_5 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_8,
        struct group_desc *VAR_9,
        struct imx_pinctrl *VAR_10,
        u32 VAR_11)
{
 const struct imx_pinctrl_soc_info *VAR_12 = VAR_10->info;
 struct imx_pin *VAR_13;
 int VAR_14, VAR_15;
 const __be32 *VAR_16;
 int VAR_17;

 FUNC_0(VAR_10->dev, "group(%d): %pOFn\n", VAR_11, VAR_8);

 if (VAR_12->flags & VAR_6)
  VAR_15 = VAR_4;
 else if (VAR_12->flags & VAR_7)
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_3;

 if (VAR_12->generic_pinconf)
  VAR_15 -= 4;


 VAR_9->name = VAR_8->name;
 VAR_16 = FUNC_5(VAR_8, "fsl,pins", &VAR_14);
 if (!VAR_16) {
  VAR_16 = FUNC_5(VAR_8, "pinmux", &VAR_14);
  if (!VAR_16) {
   FUNC_1(VAR_10->dev,
    "no fsl,pins and pins property in node %pOF\n", VAR_8);
   return -VAR_0;
  }
 }


 if (!VAR_14 || VAR_14 % VAR_15) {
  FUNC_1(VAR_10->dev, "Invalid fsl,pins or pins property in node %pOF\n", VAR_8);
  return -VAR_0;
 }

 VAR_9->num_pins = VAR_14 / VAR_15;
 VAR_9->data = FUNC_2(VAR_10->dev,
     VAR_9->num_pins, sizeof(struct imx_pin),
     VAR_5);
 VAR_9->pins = FUNC_2(VAR_10->dev,
     VAR_9->num_pins, sizeof(unsigned int),
     VAR_5);
 if (!VAR_9->pins || !VAR_9->data)
  return -VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_9->num_pins; VAR_17++) {
  VAR_13 = &((struct imx_pin *)(VAR_9->data))[VAR_17];
  if (VAR_12->flags & VAR_6)
   FUNC_4(VAR_10, &VAR_9->pins[VAR_17],
        VAR_13, &VAR_16);
  else
   FUNC_3(VAR_10, &VAR_9->pins[VAR_17],
         VAR_13, &VAR_16, VAR_8);
 }

 return 0;
}
