
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_mdm6600_map {int name; int direction; } ;
struct phy_mdm6600 {struct gpio_desc* cmd_gpios; struct gpio_desc* status_gpios; struct gpio_desc* mode_gpios; struct gpio_desc** ctrl_gpios; struct device* dev; } ;
struct gpio_desc {scalar_t__ ndescs; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct phy_mdm6600_map*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 struct gpio_desc* FUNC_4 (struct device*,int ,int ) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct phy_mdm6600_map* VAR_6 ;

__attribute__((used)) static int FUNC_6(struct phy_mdm6600 *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  const struct phy_mdm6600_map *VAR_10 =
   &VAR_6[VAR_9];
  struct gpio_desc **VAR_11 = &VAR_7->ctrl_gpios[VAR_9];

  *VAR_11 = FUNC_4(VAR_8, VAR_10->name, VAR_10->direction);
  if (FUNC_1(*VAR_11)) {
   FUNC_3(VAR_8, "gpio %s error %li\n",
     VAR_10->name, FUNC_2(*VAR_11));
   return FUNC_2(*VAR_11);
  }
 }


 VAR_7->mode_gpios = FUNC_5(VAR_8, "motorola,mode",
       VAR_2);
 if (FUNC_1(VAR_7->mode_gpios))
  return FUNC_2(VAR_7->mode_gpios);

 if (VAR_7->mode_gpios->ndescs != VAR_4)
  return -VAR_0;


 VAR_7->status_gpios = FUNC_5(VAR_8, "motorola,status",
         VAR_1);
 if (FUNC_1(VAR_7->status_gpios))
  return FUNC_2(VAR_7->status_gpios);

 if (VAR_7->status_gpios->ndescs != VAR_5)
  return -VAR_0;


 VAR_7->cmd_gpios = FUNC_5(VAR_8, "motorola,cmd",
      VAR_2);
 if (FUNC_1(VAR_7->cmd_gpios))
  return FUNC_2(VAR_7->cmd_gpios);

 if (VAR_7->cmd_gpios->ndescs != VAR_3)
  return -VAR_0;

 return 0;
}
