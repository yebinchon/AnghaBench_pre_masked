
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v3020_platform_data {int gpio_io; int gpio_rd; int gpio_wr; int gpio_cs; } ;
struct v3020 {TYPE_1__* gpio; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int gpio; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct v3020 *VAR_5, struct platform_device *VAR_6,
     struct v3020_platform_data *VAR_7)
{
 int VAR_8;

 VAR_4[VAR_0].gpio = VAR_7->gpio_cs;
 VAR_4[VAR_3].gpio = VAR_7->gpio_wr;
 VAR_4[VAR_2].gpio = VAR_7->gpio_rd;
 VAR_4[VAR_1].gpio = VAR_7->gpio_io;

 VAR_8 = FUNC_1(VAR_4, FUNC_0(VAR_4));

 if (!VAR_8)
  VAR_5->gpio = VAR_4;

 return VAR_8;
}
