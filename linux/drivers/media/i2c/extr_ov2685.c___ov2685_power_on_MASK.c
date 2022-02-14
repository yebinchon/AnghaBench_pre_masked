
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ov2685 {int xvclk; int supplies; TYPE_1__* cur_mode; TYPE_2__* client; int reset_gpio; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int reg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct ov2685 *VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 struct device *VAR_4 = &VAR_1->client->dev;

 VAR_2 = FUNC_1(VAR_1->xvclk);
 if (VAR_2 < 0) {
  FUNC_2(VAR_4, "Failed to enable xvclk\n");
  return VAR_2;
 }

 FUNC_3(VAR_1->reset_gpio, 1);

 VAR_2 = FUNC_7(VAR_0, VAR_1->supplies);
 if (VAR_2 < 0) {
  FUNC_2(VAR_4, "Failed to enable regulators\n");
  goto disable_clk;
 }


 FUNC_3(VAR_1->reset_gpio, 0);

 VAR_3 = FUNC_4(8192);
 FUNC_8(VAR_3, VAR_3 * 2);




 VAR_2 = FUNC_5(VAR_1->client, VAR_1->cur_mode->reg_list);
 if (VAR_2)
  goto disable_supplies;

 return 0;

disable_supplies:
 FUNC_6(VAR_0, VAR_1->supplies);
disable_clk:
 FUNC_0(VAR_1->xvclk);

 return VAR_2;
}
