
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct t7l66xb {int clk32k; int lock; scalar_t__ scr; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct t7l66xb* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct t7l66xb *VAR_3 = FUNC_1(VAR_2->dev.parent);
 unsigned long VAR_4;
 u8 VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_5 = FUNC_4(VAR_3->scr + VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_5(VAR_5, VAR_3->scr + VAR_0);

 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_0(VAR_3->clk32k);

 return 0;
}
