
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ds2404_platform_data {int gpio_dq; int gpio_clk; int gpio_rst; } ;
struct ds2404 {TYPE_1__* gpio; } ;
struct TYPE_3__ {int gpio; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,char*,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ds2404 *VAR_4, struct platform_device *VAR_5,
     struct ds2404_platform_data *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_3[VAR_2].gpio = VAR_6->gpio_rst;
 VAR_3[VAR_0].gpio = VAR_6->gpio_clk;
 VAR_3[VAR_1].gpio = VAR_6->gpio_dq;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  VAR_8 = FUNC_4(VAR_3[VAR_7].gpio, VAR_3[VAR_7].name);
  if (VAR_8) {
   FUNC_1(&VAR_5->dev, "error mapping gpio %s: %d\n",
    VAR_3[VAR_7].name, VAR_8);
   goto err_request;
  }
  if (VAR_7 != VAR_1)
   FUNC_2(VAR_3[VAR_7].gpio, 1);
 }

 VAR_4->gpio = VAR_3;
 return 0;

err_request:
 while (--VAR_7 >= 0)
  FUNC_3(VAR_3[VAR_7].gpio);
 return VAR_8;
}
