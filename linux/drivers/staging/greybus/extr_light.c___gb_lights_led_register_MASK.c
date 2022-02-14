
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct gb_channel {int is_registered; int * led; } ;
struct TYPE_2__ {int dev; } ;


 struct led_classdev* FUNC_0 (struct gb_channel*) ;
 struct gb_connection* FUNC_1 (struct gb_channel*) ;
 int FUNC_2 (int *,struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct gb_channel *VAR_0)
{
 struct gb_connection *VAR_1 = FUNC_1(VAR_0);
 struct led_classdev *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1->bundle->dev, VAR_2);
 if (VAR_3 < 0)
  VAR_0->led = ((void*)0);
 else
  VAR_0->is_registered = 1;
 return VAR_3;
}
