
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct rtc_device {TYPE_2__* ops; TYPE_1__ dev; } ;
struct TYPE_4__ {int * set_alarm; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct rtc_device *VAR_0)
{
 if (!FUNC_0(VAR_0->dev.parent))
  return 0;

 return VAR_0->ops->set_alarm != ((void*)0);
}
