
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc6387xb {scalar_t__ scr; int clk32k; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int start; } ;


 int FUNC_0 (int ) ;
 struct tc6387xb* FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct tc6387xb *VAR_2 = FUNC_1(VAR_1->dev.parent);

 FUNC_0(VAR_2->clk32k);

 FUNC_2(VAR_2->scr + 0x200, 0,
  VAR_0[0].start & 0xfffe);

 return 0;
}
