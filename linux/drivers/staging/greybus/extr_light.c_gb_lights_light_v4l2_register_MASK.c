
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_light {int dummy; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct gb_connection* FUNC_1 (struct gb_light*) ;

__attribute__((used)) static int FUNC_2(struct gb_light *VAR_0)
{
 struct gb_connection *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->bundle->dev, "no support for v4l2 subdevices\n");
 return 0;
}
