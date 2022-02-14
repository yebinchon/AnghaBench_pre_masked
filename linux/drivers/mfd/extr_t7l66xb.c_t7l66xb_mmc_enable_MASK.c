
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct t7l66xb {scalar_t__ scr; int lock; int clk32k; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct t7l66xb* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct t7l66xb *VAR_4 = FUNC_1(VAR_3->dev.parent);
 unsigned long VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4->clk32k);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_5(VAR_4->scr + VAR_0);
 VAR_6 |= VAR_1;
 FUNC_6(VAR_6, VAR_4->scr + VAR_0);

 FUNC_3(&VAR_4->lock, VAR_5);

 FUNC_4(VAR_4->scr + 0x200, 0,
  VAR_2[0].start & 0xfffe);

 return 0;
}
