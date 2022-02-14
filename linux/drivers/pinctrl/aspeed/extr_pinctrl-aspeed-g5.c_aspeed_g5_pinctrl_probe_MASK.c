
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_8__ {int number; } ;
struct TYPE_6__ {int * dev; } ;
struct TYPE_7__ {TYPE_1__ pinmux; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct platform_device*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  VAR_2[VAR_4].number = VAR_4;

 VAR_0.pinmux.dev = &VAR_3->dev;

 return FUNC_1(VAR_3, &VAR_1,
   &VAR_0);
}
