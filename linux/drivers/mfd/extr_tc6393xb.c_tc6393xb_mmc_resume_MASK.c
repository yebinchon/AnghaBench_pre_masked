
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc6393xb {scalar_t__ scr; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int start; } ;


 struct tc6393xb* FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct tc6393xb *VAR_2 = FUNC_0(VAR_1->dev.parent);

 FUNC_1(VAR_2->scr + 0x200, 0,
  VAR_0[0].start & 0xfffe);

 return 0;
}
