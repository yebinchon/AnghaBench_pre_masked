
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int tz; } ;
struct armada_drvdata {scalar_t__ type; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 struct armada_drvdata* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct armada_drvdata *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->type == VAR_0)
  FUNC_1(VAR_2->data.tz);

 return 0;
}
