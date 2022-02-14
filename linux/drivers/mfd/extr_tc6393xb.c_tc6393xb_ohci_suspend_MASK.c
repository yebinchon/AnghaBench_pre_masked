
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb_platform_data {scalar_t__ resume_restore; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct tc6393xb_platform_data* FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct tc6393xb_platform_data *VAR_2 = FUNC_0(VAR_1->dev.parent);


 if (VAR_2->resume_restore)
  return -VAR_0;

 return FUNC_1(VAR_1);
}
