
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6393xb {int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct tc6393xb* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tc6393xb *VAR_1 = FUNC_2(VAR_0->dev.parent);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->lock, VAR_2);


 FUNC_1(VAR_0->dev.parent, "SMD buffer on\n");
 FUNC_5(0xff, VAR_1->scr + FUNC_0(1));

 FUNC_4(&VAR_1->lock, VAR_2);

 return 0;
}
