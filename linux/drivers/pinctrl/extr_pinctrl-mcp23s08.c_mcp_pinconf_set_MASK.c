
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct mcp23s08 {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mcp23s08*,int ,unsigned int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct mcp23s08* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
         unsigned long *VAR_4, unsigned int VAR_5)
{
 struct mcp23s08 *VAR_6 = FUNC_4(VAR_2);
 enum pin_config_param VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_7 = FUNC_3(VAR_4[VAR_10]);
  VAR_8 = FUNC_2(VAR_4[VAR_10]);

  switch (VAR_7) {
  case 128:
   VAR_9 = FUNC_1(VAR_6, VAR_1, VAR_3, VAR_8);
   break;
  default:
   FUNC_0(VAR_6->dev, "Invalid config param %04x\n", VAR_7);
   return -VAR_0;
  }
 }

 return VAR_9;
}
