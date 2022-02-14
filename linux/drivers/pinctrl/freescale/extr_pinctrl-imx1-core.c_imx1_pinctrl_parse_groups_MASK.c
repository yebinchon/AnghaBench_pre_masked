
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imx1_pinctrl_soc_info {int dev; } ;
struct imx1_pin_group {int npins; TYPE_1__* pins; void** pin_ids; int name; } ;
struct imx1_pin {int dummy; } ;
struct device_node {int name; } ;
typedef int __be32 ;
struct TYPE_2__ {void* pin_id; void* config; void* mux_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,struct device_node*) ;
 int FUNC_2 (int ,char*,struct device_node*) ;
 void* FUNC_3 (int ,int,int,int ) ;
 int * FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_3,
        struct imx1_pin_group *VAR_4,
        struct imx1_pinctrl_soc_info *VAR_5,
        u32 VAR_6)
{
 int VAR_7;
 const __be32 *VAR_8;
 int VAR_9;

 FUNC_1(VAR_5->dev, "group(%d): %pOFn\n", VAR_6, VAR_3);


 VAR_4->name = VAR_3->name;




 VAR_8 = FUNC_4(VAR_3, "fsl,pins", &VAR_7);

 if (!VAR_7 || VAR_7 % 12) {
  FUNC_2(VAR_5->dev, "Not a valid fsl,pins property (%pOFn)\n",
    VAR_3);
  return -VAR_0;
 }

 VAR_4->npins = VAR_7 / 12;
 VAR_4->pins = FUNC_3(VAR_5->dev,
   VAR_4->npins, sizeof(struct imx1_pin), VAR_2);
 VAR_4->pin_ids = FUNC_3(VAR_5->dev,
   VAR_4->npins, sizeof(unsigned int), VAR_2);

 if (!VAR_4->pins || !VAR_4->pin_ids)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4->npins; VAR_9++) {
  VAR_4->pins[VAR_9].pin_id = FUNC_0(*VAR_8++);
  VAR_4->pins[VAR_9].mux_id = FUNC_0(*VAR_8++);
  VAR_4->pins[VAR_9].config = FUNC_0(*VAR_8++);

  VAR_4->pin_ids[VAR_9] = VAR_4->pins[VAR_9].pin_id;
 }

 return 0;
}
